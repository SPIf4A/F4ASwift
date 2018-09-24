//
//  HomeContestView.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 26/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ESPContest.h"
#import "ESPContestEntity.h"
#import "DashBoardView.h"
#import "JoinContestView.h"


@interface HomeContestView : UIView
{
    int firstTime;
    int button_index;
    ESPContest *ContestModal;
    ESPContestEntity *ContestEntity;
    IBOutlet UITableView *ContestTableView;
    IBOutlet UIImageView *BlueLine;
    IBOutlet UIImageView *GreyLine;
    IBOutlet UIView *CustomFooterView;
    IBOutlet UIView *PagerButtonView;
    IBOutlet UIButton *BackGameBtn;
    IBOutlet UIButton *MactchCodeBtn;
    IBOutlet UILabel *NoRecordLbl;
    IBOutlet UILabel *HeaderLbl;
    
    IBOutlet UILabel *TotalPlayedLbl;
    IBOutlet UILabel *TotalWinLbl;
    IBOutlet UILabel *TotalCoinsLbl;
    IBOutlet UILabel *PlayerNameLbl;
    IBOutlet UIImageView *AvatarImg;

    

}
@property (nonatomic, strong) UIViewController *GetUserView2;

@end
