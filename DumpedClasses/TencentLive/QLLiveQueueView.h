//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIButton, UILabel, UITapGestureRecognizer;

@interface QLLiveQueueView : UIView <UIGestureRecognizerDelegate>
{
    id <QLLiveQueueViewDelegate> _delegate;
    UIView *_blurView;
    UIButton *_vipBtn;
    UIButton *_loginBtn;
    UILabel *_mainTitle;
    UILabel *_subTitle;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) UIButton *vipBtn; // @synthesize vipBtn=_vipBtn;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <QLLiveQueueViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)didPressLoginBtn;
- (void)didPressVipBtn;
- (void)updateUI:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateWithState:(unsigned long long)arg1 loginState:(_Bool)arg2 VipState:(_Bool)arg3 CanJump:(_Bool)arg4 fullScreen:(_Bool)arg5 andWaitrank:(long long)arg6;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
