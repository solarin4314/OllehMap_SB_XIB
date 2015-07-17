//
//  SettingViewController.h
//  OllehMap
//
//  Created by 이 제민 on 12. 7. 2..
//  Copyright (c) 2012년 jmlee@miksystem.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OMNavigationController.h"
#import "OllehMapStatus.h"
#import "OMMessageBox.h"
#import "VersionInfoViewController.h"
#import "ResolutionViewController.h"
#import "HelperViewController.h"
#import "NoticeListViewController.h"
#import "ServerConnector.h"
#import "RecentSearchViewController.h"
#import "FavoriteViewController.h"
#import "AccountSettingViewController.h"
#import "MyImageViewController.h"
// 고객문의/ 초불만
#import "CustomerComplainViewController.h"
#import "ImproveProposeViewController.h"
#include <sys/sysctl.h>

@interface SettingViewController : UIViewController
{
    UIScrollView *_scrollView;
    UISwitch *_switcher;
    UISwitch *_picSwitcher;
    NSInteger _viewStartY;
    
    UIImageView *_notiImg;
    UILabel *_notiLabel;
    
    //NSMutableArray *_notiArr;
    
    
    UILabel *_imgSettingLabel;
    UIImageView *_imgSettingArrow;
    UIButton *_myImageSettingBtn;
}

- (IBAction)finishBtnClick:(id)sender;
@property (retain, nonatomic) UIImageView *notiImg;
@property (retain, nonatomic) UILabel *notiLabel;
@property (retain, nonatomic) IBOutlet UIScrollView *scrollView;
@property (retain, nonatomic) IBOutlet UISwitch *switcher;
@property (retain, nonatomic) IBOutlet UISwitch *picSwitcher;

@end
