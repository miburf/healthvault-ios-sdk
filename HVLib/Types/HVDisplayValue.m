//
//  HVDisplayValue.m
//  HVLib
//
//  Copyright (c) 2012 Microsoft Corporation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "HVCommon.h"
#import "XLib.h"
#import "HVDisplayValue.h"

static const xmlChar* x_attribute_units = XMLSTRINGCONST("units");
static const xmlChar* x_attribute_code = XMLSTRINGCONST("units-code");
static const xmlChar* x_attribute_text = XMLSTRINGCONST("text");

@implementation HVDisplayValue

@synthesize value = m_value;
@synthesize text = m_text;
@synthesize units = m_units;
@synthesize unitsCode = m_unitsCode;

-(id) initWithValue:(double)doubleValue andUnits:(NSString *)unitValue
{
    HVCHECK_STRING(unitValue);
    
    self = [super init];
    HVCHECK_SELF;
    
    m_value = doubleValue;
    self.units = unitValue;
    
    return self;
    
LError:
    HVALLOC_FAIL;
}

-(void) dealloc
{
    [m_text release];
    [m_units release];
    [m_unitsCode release];
    
    [super dealloc];
}

-(HVClientResult *) validate
{
    HVVALIDATE_BEGIN;
    
    HVVALIDATE_STRING(m_units, HVClientError_InvalidDisplayValue);
    HVVALIDATE_STRINGOPTIONAL(m_unitsCode, HVClientError_InvalidDisplayValue);
    
    HVVALIDATE_STRINGOPTIONAL(m_text, HVClientError_InvalidDisplayValue)
    
    HVVALIDATE_SUCCESS;
    
LError:
    HVVALIDATE_FAIL;
}

-(void)serializeAttributes:(XWriter *)writer
{
    HVSERIALIZE_ATTRIBUTE_X(m_text, x_attribute_text);
    HVSERIALIZE_ATTRIBUTE_X(m_units, x_attribute_units);
    HVSERIALIZE_ATTRIBUTE_X(m_unitsCode, x_attribute_code);
}

-(void) serialize:(XWriter *)writer
{    
    [writer writeDouble:m_value];
}

-(void) deserializeAttributes:(XReader *)reader
{
    HVDESERIALIZE_ATTRIBUTE_X(m_text, x_attribute_text);
    HVDESERIALIZE_ATTRIBUTE_X(m_units, x_attribute_units);
    HVDESERIALIZE_ATTRIBUTE_X(m_unitsCode, x_attribute_code);
}

-(void) deserialize:(XReader *)reader
{    
    m_value = [reader readDouble];
}

@end
