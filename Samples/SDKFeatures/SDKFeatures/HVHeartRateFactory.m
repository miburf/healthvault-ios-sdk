//
//  HVHeartRateFactory.m
//  SDKFeatures
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

#import "HVHeartRateFactory.h"

@implementation HVHeartRate (HVFactoryMethods)

+(HVItemCollection *) createRandomForDay:(NSDate *) date
{
    HVItemCollection* items = [[[HVItemCollection alloc] init] autorelease];
    
    // Typically 1 a day
    HVDateTime* dateTime = [HVDateTime fromDate:date];
    
    [items addObject:[HVHeartRate createRandomForDate:dateTime]];
    
    return items;
}

@end

@implementation HVHeartRate (HVDisplay)

-(NSString *)detailsString
{
    return [self toString];
}

-(NSString *)detailsStringMetric
{
    return [self detailsString];
}

-(NSString *)dateString
{
    return [self.when toString];
    
}

@end

