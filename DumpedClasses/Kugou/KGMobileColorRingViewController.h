//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGMobileColorRingTableViewController.h"

@class ColorRingDataBLL;

@interface KGMobileColorRingViewController : KGMobileColorRingTableViewController
{
    ColorRingDataBLL *_shareDataInstace;
    long long _firstLoadData;
    float _topBarHeight;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (long long)showPlayBarWay;
- (void)endAPMStatics;
- (void)billboardClicked:(id)arg1;
- (void)updateColorRingListInfo;
- (void)reConnectEvent;
- (void)getMobileRingListInfo;
- (void)tapClicked:(id)arg1;
- (void)addHeaderView;
- (void)addSearchView;
- (void)reloadTableData;
- (void)showColorRingList;
- (void)getCMCCInfo;
- (void)viewDidLoad;

@end
