//
//  DashBoardView.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 27/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeContestView.h"
#import "CartView.h"
#import "EsportsPreference.h"
#import "ESPHistoryEntity.h"
#import "ESPHistory.h"

@interface DashBoardView : UIView
{
    int firstTime;
  
    IBOutlet UIScrollView *DashBoardScrollView;
    IBOutlet UIScrollView *DashBoardScrollView1;

    IBOutlet UIImageView *BlueLine;
    IBOutlet UIImageView *GreyLine;
    IBOutlet UIView *CustomFooterView;
    IBOutlet UIView *HistoryView;
    IBOutlet UIView *HistoryView1;
    IBOutlet UIView *CoinsView;


    IBOutlet UIButton *BackGameBtn;
    IBOutlet UIButton *HistoryBtn;
    
    IBOutlet UILabel *RankLbl;
    IBOutlet UILabel *Starlbl;
    
    IBOutlet UILabel *TotalPlayedLbl;
    IBOutlet UILabel *TotalWinLbl;
    IBOutlet UILabel *TotalCoinsLbl;
    IBOutlet UILabel *PlayerNameLbl;
    
    ESPHistory *HistoryModal;
    ESPHistoryEntity *HistoryEntity;
    IBOutlet UIImageView *AvatarImg;
    IBOutlet UITableView *DashBoardTableView;
    IBOutlet UIImageView *WinImg;
    IBOutlet UIImageView *LoseImg;

    IBOutlet UIImageView *Round1;
    IBOutlet UIImageView *Round2;
    IBOutlet UIImageView *Round3;
    IBOutlet UIImageView *Round4;
    IBOutlet UIImageView *Round5;
    IBOutlet UIImageView *Round6;
    IBOutlet UIImageView *Round7;
    IBOutlet UIImageView *Round8;
    IBOutlet UIImageView *Round9;
    IBOutlet UIImageView *Round10;


    

    
    

}

@property (nonatomic, strong) UIViewController *GetUserView3;


@end
