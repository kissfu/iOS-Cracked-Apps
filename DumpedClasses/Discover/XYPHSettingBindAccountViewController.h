//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView, UITableViewCell, XYPHBindInfo, XYPHSettingBindAccountCell;

@interface XYPHSettingBindAccountViewController : XYPHBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _dismissBlock;
    UITableView *_linkAccountTableView;
    XYPHSettingBindAccountCell *_phoneCell;
    XYPHSettingBindAccountCell *_weixinCell;
    XYPHSettingBindAccountCell *_weiboCell;
    XYPHSettingBindAccountCell *_qqCell;
    UITableViewCell *_resetCell;
    XYPHBindInfo *_userBindInfo;
}

@property(retain, nonatomic) XYPHBindInfo *userBindInfo; // @synthesize userBindInfo=_userBindInfo;
@property(retain, nonatomic) UITableViewCell *resetCell; // @synthesize resetCell=_resetCell;
@property(retain, nonatomic) XYPHSettingBindAccountCell *qqCell; // @synthesize qqCell=_qqCell;
@property(retain, nonatomic) XYPHSettingBindAccountCell *weiboCell; // @synthesize weiboCell=_weiboCell;
@property(retain, nonatomic) XYPHSettingBindAccountCell *weixinCell; // @synthesize weixinCell=_weixinCell;
@property(retain, nonatomic) XYPHSettingBindAccountCell *phoneCell; // @synthesize phoneCell=_phoneCell;
@property(retain, nonatomic) UITableView *linkAccountTableView; // @synthesize linkAccountTableView=_linkAccountTableView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)pushtoBindPhoneView;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)requestUserBindInfo;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

