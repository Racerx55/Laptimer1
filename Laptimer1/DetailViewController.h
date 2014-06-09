//
//  DetailViewController.h
//  Laptimer1
//
//  Created by Christopher Neal on 6/9/14.
//  Copyright (c) 2014 SpiderMonkeyProductions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
