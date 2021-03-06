//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, QRUpgradeBtn, UIButton, UILabel, UITableView;
@protocol QRUpgradeViewDelegete;

@interface QRUpgradeView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isUpgradeFlag;
    _Bool _animationFlag;
    _Bool _canCloseBtn;
    id <QRUpgradeViewDelegete> _upgradeViewDelegate;
    UILabel *_levelLb;
    UIButton *_levelTextView;
    UITableView *_tableView;
    UIButton *_actionBtn;
    QRUpgradeBtn *_closeBtn;
    UIView *_maskView;
    UIView *_alphaView;
    NSMutableArray *_arrayM;
    NSTimer *_timer;
}

@property(nonatomic) _Bool canCloseBtn; // @synthesize canCloseBtn=_canCloseBtn;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool animationFlag; // @synthesize animationFlag=_animationFlag;
@property(retain, nonatomic) NSMutableArray *arrayM; // @synthesize arrayM=_arrayM;
@property(retain, nonatomic) UIView *alphaView; // @synthesize alphaView=_alphaView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) QRUpgradeBtn *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *levelTextView; // @synthesize levelTextView=_levelTextView;
@property(nonatomic) _Bool isUpgradeFlag; // @synthesize isUpgradeFlag=_isUpgradeFlag;
@property(retain, nonatomic) UILabel *levelLb; // @synthesize levelLb=_levelLb;
@property(nonatomic) __weak id <QRUpgradeViewDelegete> upgradeViewDelegate; // @synthesize upgradeViewDelegate=_upgradeViewDelegate;
- (void).cxx_destruct;
- (void)setAlphaValue:(long long)arg1;
- (void)upgradeActionAnimation;
- (void)actionBtn:(id)arg1;
- (void)closeEvent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)intializeViewData:(id)arg1;
- (void)intializeUpgradeViewData:(id)arg1;
- (void)intializeData:(id)arg1;
- (void)configueUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 type:(_Bool)arg2 data:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

