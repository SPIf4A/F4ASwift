//
//  EsportsService.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 25/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ESPEnum.h"
#import "HPIndicator.h"



@interface EsportsService : NSObject
{
    
}

+(void)ESPWebservice:(mEspEnum)EnumType getRequest:(NSString*)getRequest getView:(UIView*)getView;

@end
