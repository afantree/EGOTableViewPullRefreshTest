//
//  ViewController.h
//  EGOTableViewPullRefreshTest
//
//  Created by 阿凡树 QQ：729397005 on 14-5-12.
//  Copyright (c) 2014年 ManGang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"
#import "LoadMoreTableFooterView.h"
@interface ViewController : UIViewController<EGORefreshTableHeaderDelegate,LoadMoreTableFooterDelegate>
{
    __weak IBOutlet UITableView      *_mainTableView;
    EGORefreshTableHeaderView        *_refreshHeaderView;
    LoadMoreTableFooterView          *_loadMoreView;
    
    BOOL                              _reloading;
}
@end
