//
//  MasterViewController.h
//  notegym
//
//  Created by Jhon Wilfer Orrego on 16/11/13.
//  Copyright (c) 2013 Jhon Wilfer Orrego. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
