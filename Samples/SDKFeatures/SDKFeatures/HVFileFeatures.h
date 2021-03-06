//
//  HVFileFeatures.h
//  SDKFeatures
//
//  Copyright (c) 2013 Microsoft Corporation. All rights reserved.
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

#import "HVItemDataTypedFeatures.h"

@interface HVFileFeatures : HVItemDataTypedFeatures<UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
@private
    NSData* m_fileData;
    NSString* m_fileMediaType;
}

-(void) viewFileInBrowser;
-(void) downloadFile;

-(void) processSelectedFile:(HVHandler) action;
-(void) downloadFileToFile:(NSFileHandle *) file;
-(void) uploadFileWithName:(NSString *) name data:(NSData *) data andMediaType:(NSString *) mediaType;

-(void) pickImageForUpload;

@end
