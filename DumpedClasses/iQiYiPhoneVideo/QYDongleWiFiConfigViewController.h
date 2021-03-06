//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

@class NSString;

@interface QYDongleWiFiConfigViewController : QYCommonViewController
{
    NSString *_configedDongleName;
    id _currentStateView;
    unsigned long long _currentState;
    NSString *_passowrd;
}

@property(copy, nonatomic) NSString *passowrd; // @synthesize passowrd=_passowrd;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) id currentStateView; // @synthesize currentStateView=_currentStateView;
@property(copy, nonatomic) NSString *configedDongleName; // @synthesize configedDongleName=_configedDongleName;
- (void)passwordInput:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)networkStatusChange:(id)arg1;
- (void)appEnterForground:(id)arg1;
- (void)doConfigWithPassword:(id)arg1;
- (void)configWithPassword:(id)arg1;
- (void)setConfigedState:(unsigned long long)arg1;
- (void)hideKeyboardIfNecessary;
- (void)clean;
- (void)showWifiGuide;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;

@end

