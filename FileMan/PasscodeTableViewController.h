//
//  PasscodeTableViewController.h
//  FileMan
//
//  Created by Sami Sharaf on 3/6/17.
//  Copyright © 2017 Sami Sharaf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PasscodeTableViewController : UITableViewController

@property int purpose;

+(instancetype)sharedInstance;

@end
