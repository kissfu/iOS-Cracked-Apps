//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRDynamicPlugin.h"

@class UIView<TTRexxarEngine>;

@interface TTRLogin : TTRDynamicPlugin
{
    UIView<TTRexxarEngine> *_webview;
    CDUnknownBlockType _response;
}

+ (unsigned long long)instanceType;
@property(copy, nonatomic) CDUnknownBlockType response; // @synthesize response=_response;
@property(nonatomic) __weak UIView<TTRexxarEngine> *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (void)removeAccountNotification;
- (void)cancelLogin:(id)arg1;
- (void)loginClosed:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)isLoginWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 webView:(id)arg3 controller:(id)arg4;
- (void)loginWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 webView:(id)arg3 controller:(id)arg4;
- (void)dealloc;

@end
