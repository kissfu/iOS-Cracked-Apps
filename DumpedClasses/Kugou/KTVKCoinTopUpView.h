//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KTVKCoinButton;

@interface KTVKCoinTopUpView : UIView
{
    id <KTVKCoinTopUpViewDelegate> _delegate;
    KTVKCoinButton *_selectBtn;
    KGThemeButton *_topUpButton;
}

@property(nonatomic) __weak KGThemeButton *topUpButton; // @synthesize topUpButton=_topUpButton;
@property(retain, nonatomic) KTVKCoinButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(nonatomic) __weak id <KTVKCoinTopUpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionPayBack:(id)arg1;
- (void)actionOptionItem:(id)arg1;
- (void)startTopUp:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chargeOptions:(id)arg2 appStorePayIsBack:(_Bool)arg3;

@end

