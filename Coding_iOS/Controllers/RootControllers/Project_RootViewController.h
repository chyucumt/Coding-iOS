//
//  Project_RootViewController.h
//  Coding_iOS
//
//  Created by 王 原闯 on 14-7-29.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import "BaseViewController.h"
#import "Projects.h"
#import "XTSegmentControl.h"
#import "iCarousel.h"

@interface Project_RootViewController : BaseViewController<iCarouselDataSource, iCarouselDelegate>
@property (strong, nonatomic) NSArray *segmentItems;
@property (strong, nonatomic) UISearchBar *mySearchBar;
@property (assign, nonatomic) BOOL icarouselScrollEnabled;
@end
