//
//  ESPConstant.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 25/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#ifndef ESPConstant_h
#define ESPConstant_h


#define SCREEN_WIDTH (UIInterfaceOrientationIsPortrait([UIApplication sharedApplication].statusBarOrientation) ? [[UIScreen mainScreen] bounds].size.width : [[UIScreen mainScreen] bounds].size.height)
#define SCREEN_HEIGHT (UIInterfaceOrientationIsPortrait([UIApplication sharedApplication].statusBarOrientation) ? [[UIScreen mainScreen] bounds].size.height : [[UIScreen mainScreen] bounds].size.width)

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)


#define NoInternet      @"Internet connection appears to be offline."


#define API_URL         @"http://fanxt.com/esports/api"


#endif /* ESPConstant_h */
