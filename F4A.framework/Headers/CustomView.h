//
//  CustomView.h
//  E-Sports
//
//  Created by RAJA JIMSEN on 06/03/18.
//  Copyright © 2018 RAJA JIMSEN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HPValidation.h"

@interface CustomView : UIView
{
    IBOutlet UITextField *UsernameTf;
    IBOutlet UITextField *PasswordTf;
    IBOutlet UIImageView *LogoView;
    IBOutlet UIButton *BackGameBtn;
}

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIButton *closeButton;
@property (nonatomic, strong) UIViewController *GetUserView1;
@property (nonatomic, strong) IBOutlet UIView *LoginView;



@end
