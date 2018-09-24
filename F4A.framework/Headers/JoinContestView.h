//
//  JoinContestView.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 27/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JoinContestView : UIView
{
    int firstTime;
    IBOutlet UIView *TopVSView;
    IBOutlet UIView *TopVSview1;
    NSTimer *gameTimer;
    int timecount;
    IBOutlet UILabel *CountDownLabel;
    NSString *JsonString;
    BOOL isMatchedUp;
    IBOutlet UILabel *PlayerNameLbl;
    IBOutlet UILabel *OpponentNamelbl;
    
    IBOutlet UILabel *PlayerNameLbl1;
    IBOutlet UILabel *OpponentNamelbl1;
    
    IBOutlet UIImageView *AvatarImg1;
    IBOutlet UIImageView *AvatarImg2;
    IBOutlet UIImageView *AvatarImg3;
    IBOutlet UIImageView *AvatarImg4;



}

@property(nonatomic,strong)NSString *Get_ContestID;
@property(nonatomic,strong) IBOutlet UILabel *EntryFeeLbl;


@end
