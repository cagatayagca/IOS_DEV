//
//  ViewController.h
//  Learnmixer
//
//  Created by kasutaja on 12/03/15.
//  Copyright (c) 2015 kasutaja. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIAlertViewDelegate>
@property (weak, nonatomic) IBOutlet UITextField *txtUsername;
@property (weak, nonatomic) IBOutlet UITextField *txtPassword;





- (IBAction)log_in_Clicked:(id)sender;






- (IBAction)backgroundTap:(id)sender;


@end

