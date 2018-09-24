//
//  InsertManager.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 06/03/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface InsertManager : NSObject

+(instancetype) ESPManager;

-(void) startManager;
-(void) stopManager;

-(void)InitializeWithGameID:(NSString*)getGamekey APIKey:(NSString*)getApiKey;
-(void) RequestLogin:(UIViewController *)viewController;
-(void) RequestRegister:(UIViewController *)viewController;
-(void) UpdateWithGameScore:(NSString*)GameScore InView:(UIViewController*)InView;


-(BOOL) isManagerRunning;

@end
