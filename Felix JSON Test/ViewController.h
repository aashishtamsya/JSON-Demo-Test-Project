//
//  ViewController.h
//  Felix JSON Test
//
//  Created by Felix ITs 01 on 15/07/16.
//  Copyright © 2016 Aashish Tamsya. All rights reserved.
//

#warning Please enter your name before submission.
#define kCandidateName @"YOUR_FULL_NAME_IN_CAPTIALS"

#define kRequestURL @"https://json-test-sample-project.firebaseio.com/api.json"

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *labelCandidateName;

@end

