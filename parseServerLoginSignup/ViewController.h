//
//  ViewController.h
//  parseServerLoginSignup
//
//  Created by Thomas Neary on 5/20/16.
//  Copyright © 2016 OpCon Technologies, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ParseUI/ParseUI.h>
#import <Parse/Parse.h>

@interface ViewController : UIViewController <PFLogInViewControllerDelegate, PFSignUpViewControllerDelegate>

@property (nonatomic, strong) IBOutlet UILabel *welcomeLabel;

- (IBAction)logOutButtonTapAction:(id)sender;


@end

