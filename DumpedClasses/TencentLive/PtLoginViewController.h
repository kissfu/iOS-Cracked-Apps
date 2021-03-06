//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UIWebView, WKUserContentController, WKWebView, WloginCustomParam;

@interface PtLoginViewController : UIViewController <UIWebViewDelegate, WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler>
{
    UIWebView *uWebView;
    WKWebView *wWebView;
    long long statusBarStyle;
    WKUserContentController *userController;
    UIActivityIndicatorView *indicator;
    WloginCustomParam *quickLoginParam;
    _Bool bForcePwd;
    id ptloginDelegate;
    UIButton *_closeButton;
}

+ (_Bool)isWkWebView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property _Bool bForcePwd; // @synthesize bForcePwd;
@property(retain) id ptloginDelegate; // @synthesize ptloginDelegate;
@property(retain) WloginCustomParam *quickLoginParam; // @synthesize quickLoginParam;
@property long long statusBarStyle; // @synthesize statusBarStyle;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)URLDecodedString:(id)arg1;
- (void)LoadPtLoginWebView;
- (void)InitPtLoginWebView:(id)arg1 speclogin:(_Bool)arg2 delegate:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)_onCloseBottonPress;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)stopIndicator;
- (void)startIndicator;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

