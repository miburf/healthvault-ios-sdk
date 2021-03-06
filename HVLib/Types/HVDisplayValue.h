//
//  HVDisplayValue.h
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

#import <Foundation/Foundation.h>
#import "HVType.h"

//
// The DisplayValue of a measurement is the precise information the user
// entered - BEFORE any conversions to standard units, such as metric. 
// E.g. Weights are stored in kgs, but are typically entered (in the US) 
// in pounds. 
//
// The display value captures the exact data the user entered, along with
// the units of that data. 
//
@interface HVDisplayValue : HVType
{
@private
    double m_value;
    NSString* m_text;
    NSString* m_units;
    NSString* m_unitsCode;
}
//
// (Required) - the exact data as entered by the user - before any conversions
// to standardized units
//
@property (readwrite, nonatomic) double value;
//
// (Optional) - units for the data
//
@property (readwrite, nonatomic, retain) NSString* units;
//
// (Optional) - a vocabulary code for the units
//
@property (readwrite, nonatomic, retain) NSString* unitsCode;
//
// (Optional) - text value for the above
//
@property (readwrite, nonatomic, retain) NSString* text;

-(id) initWithValue:(double) doubleValue andUnits:(NSString *) unitValue;

@end
