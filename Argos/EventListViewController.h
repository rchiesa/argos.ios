//
//  EventListViewController.h
//  Argos
//
//  Created by Francis Tseng on 1/27/14.
//  Copyright (c) 2014 Argos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AFHTTPRequestOperationManager.h"

@interface EventListViewController : UITableViewController

@property (strong, nonatomic) AFHTTPRequestOperationManager *manager;

@end