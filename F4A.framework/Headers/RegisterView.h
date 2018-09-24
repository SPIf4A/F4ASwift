//
//  RegisterView.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 23/04/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HPValidation.h"

@interface RegisterView : UIView
{
    IBOutlet UITextField *UsernameTf;
    IBOutlet UITextField *PasswordTf;
    IBOutlet UITextField *FirstnameTf;
    IBOutlet UITextField *LastnameTf;
    IBOutlet UIImageView *LogoView;
    IBOutlet UIButton *BackGameBtn;


}

@property (nonatomic, strong) IBOutlet UIView *BottomView;


@end
