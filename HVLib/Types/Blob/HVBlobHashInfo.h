//
//  HVBlobHashInfo.h
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
//
#import <Foundation/Foundation.h>
#import "HVType.h"
#import "HVBaseTypes.h"

@interface HVBlobHashAlgorithmParams : HVType
{
@private
    HVPositiveInt* m_blockSize;
}

//
// (Optional)
//
@property (readwrite, nonatomic, retain) HVPositiveInt* blockSize;

@end

@interface HVBlobHashInfo : HVType
{
@private
    HVStringZ255* m_algorithm;
    HVBlobHashAlgorithmParams* m_params;
    HVStringNZ512* m_hash;
}

@property (readwrite, nonatomic, retain) NSString* algorithm;
@property (readwrite, nonatomic, retain) HVBlobHashAlgorithmParams* params;
@property (readwrite, nonatomic, retain) NSString* hash;

@end
