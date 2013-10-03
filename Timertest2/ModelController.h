//
//  ModelController.h
//  Timertest2
//
//  Created by JJ Johnson on 10/3/2013.
//  Copyright (c) 2013 JJ Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
