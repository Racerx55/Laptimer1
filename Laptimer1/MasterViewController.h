//
//  MasterViewController.h
//  Laptimer1
//
//  Created by Christopher Neal on 6/9/14.
//  Copyright (c) 2014 SpiderMonkeyProductions. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
