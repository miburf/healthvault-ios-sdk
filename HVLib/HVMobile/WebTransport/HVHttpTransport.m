//
//  HVHttpTransport.m
//  HVLib
//
// Copyright 2014 Microsoft Corp.
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
//
#import "HVCommon.h"
#import "HVHttpTransport.h"
#import "WebTransport.h"

@implementation HVHttpTransport

-(NSURLConnection *)sendRequestForURL:(NSString *)url withData:(NSString *)data context:(NSObject *)context target:(NSObject *)target callBack:(SEL)callBack
{
    return [WebTransport sendRequestForURL:url withData:data context:context target:target callBack:callBack];
}

@end
