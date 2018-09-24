//
//  FantasyManager.h
//  DemoFramework
//
//  Created by RAJA JIMSEN on 02/05/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface FantasyManager : NSObject

+(instancetype) FantasyBegin;

-(void) startManager;
-(void) stopManager;

-(void)InitializeWithGameID:(NSString*)getGamekey APIKey:(NSString*)getApiKey;
-(void) InView:(UIViewController *)viewController;
-(void) RequestRegister:(UIViewController *)viewController;
-(void)UpdateWithGameScore:(NSString*)GameScore WithMatchID:(NSString*)MatchID InView:(UIViewController*)InView;

-(BOOL) isManagerRunning;
-(NSString*) GetCurrentMatchID;

@end
