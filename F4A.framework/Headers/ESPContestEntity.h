//
//  ESPContestEntity.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 26/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface ESPContestEntity : NSObject<NSCoding>

@property (nonatomic,strong) NSString *CONTEST_DESC;
@property (nonatomic,strong) NSString *CONTEST_FEE;
@property (nonatomic,strong) NSString *CONTEST_ID;
@property (nonatomic,strong) NSString *CONTEST_NAME;
@property (nonatomic,strong) NSString *CONTEST_PRIZE;
@property (nonatomic,strong) NSString *CONTEST_RATING;
@property (nonatomic,strong) NSString *CONTEST_SCORE_TYPE;
@property (nonatomic,strong) NSString *CONTEST_TYPE;
@property (nonatomic,strong) NSString *CONTEST_SCORING;
@property (nonatomic,strong) NSString *CONTEST_IMAGE;


-(id)initWithJsonContent:(NSDictionary *)json;


@end
