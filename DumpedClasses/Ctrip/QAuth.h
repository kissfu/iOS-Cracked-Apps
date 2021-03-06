//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAuthNetWorkCenter_delegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, QAuthController;

@interface QAuth : NSObject <QAuthNetWorkCenter_delegate, UIAlertViewDelegate>
{
    id <QunarAuthDelegate> _delegate;
    QAuthController *_authVC;
    NSString *_appScheme;
}

+ (_Bool)jumpUrl:(id)arg1;
+ (void)AuthQunarWithReq:(id)arg1 andDelegate:(id)arg2;
+ (void)freeSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(retain, nonatomic) QAuthController *authVC; // @synthesize authVC=_authVC;
@property(nonatomic) id <QunarAuthDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)apiNetworkDidSuccessWithData:(id)arg1 fromCode:(id)arg2;
- (void)apiNetworkDidFailWithData:(id)arg1 fromCode:(id)arg2;
- (void)BackUserInfo:(id)arg1;
- (void)doQAuthWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

