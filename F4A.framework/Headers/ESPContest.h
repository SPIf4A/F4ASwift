//
//  ESPContest.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 26/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESPContest : NSObject<NSCoding>

@property (nonatomic,strong) NSMutableArray *ESPTourModel;
@property (nonatomic,strong) NSMutableArray *ESPPracticeModel;
@property (nonatomic,strong) NSMutableArray *ESPHeadModel;


-(id)initWithESPContestJson:(NSDictionary *)json;

@end
