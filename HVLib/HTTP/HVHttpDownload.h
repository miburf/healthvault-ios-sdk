//
//  HVHttpDownload.h
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
#import "HVHttp.h"

@interface HVHttpDownload : HVHttp
{
@protected
    NSURLResponse* m_response;
    NSFileHandle* m_file;
    int m_totalBytesWritten;
}

//-------------------------
//
// Data
//
//-------------------------
//
// (Required) - download to this file
//
@property (readwrite, nonatomic, retain) NSFileHandle* file;

//-------------------------
//
// Initializers
//
//-------------------------
-(id) initWithUrl:(NSURL *) url filePath:(NSString *) path andCallback:(HVTaskCompletion) callback;
-(id) initWithUrl:(NSURL *) url fileHandle:(NSFileHandle *) file andCallback:(HVTaskCompletion) callback;

@end
