//
//  EsportsPreference.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 23/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EsportsPreference : NSObject

+(void)ESPStoreString:(NSString*)withObject withKey:(NSString*)key;
+(NSString*)ESPRetrieveString:(NSString*)key;
+(void) ESPUserData:(id) userData;
+(void)ESPRemoveWithKey:(NSString*)GetKey;
+(void)ESPRemoveAll;

@end
