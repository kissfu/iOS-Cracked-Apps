//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCPOrderBaseViewController.h"

#import "DCOrderListOneToOneTopHeaderUnitDelegate.h"
#import "ONEGestureBackInteractionDelegate.h"

@class DCIMButtonCom<DCAutoload>, DCOrderListOneToOneTopHeaderUnit<DCAutoload>, DCPWaitingDriverOneToOneView, NSString, ONEAlertView, UIButton;

@interface DCPWaitingDriverOneToOneViewController : DCPOrderBaseViewController <ONEGestureBackInteractionDelegate, DCOrderListOneToOneTopHeaderUnitDelegate>
{
    UIButton *_cancelOrderButton;
    DCIMButtonCom<DCAutoload> *_imBtnCom;
    DCOrderListOneToOneTopHeaderUnit<DCAutoload> *_tripInfoCom;
    DCPWaitingDriverOneToOneView *_waitingDriverView;
    ONEAlertView *_currentAlertView;
    NSString *_imSessionId;
}

+ (id)timeWithMinuteConversionToTime:(long long)arg1;
+ (void)load;
@property(copy, nonatomic) NSString *imSessionId; // @synthesize imSessionId=_imSessionId;
@property(nonatomic) __weak ONEAlertView *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
@property(retain, nonatomic) DCPWaitingDriverOneToOneView *waitingDriverView; // @synthesize waitingDriverView=_waitingDriverView;
@property(retain, nonatomic) DCOrderListOneToOneTopHeaderUnit<DCAutoload> *tripInfoCom; // @synthesize tripInfoCom=_tripInfoCom;
@property(retain, nonatomic) DCIMButtonCom<DCAutoload> *imBtnCom; // @synthesize imBtnCom=_imBtnCom;
@property(retain, nonatomic) UIButton *cancelOrderButton; // @synthesize cancelOrderButton=_cancelOrderButton;
- (void).cxx_destruct;
- (void)addFeeSucceed;
- (void)detailContentViewIsShow:(_Bool)arg1;
- (void)topHeaderViewHeightDidChanged:(double)arg1;
- (_Bool)disableGuesture;
- (void)showIMController;
- (void)reOrder;
- (void)cancelOrder;
- (void)showDefaultAlert;
- (id)alertAttributeMessage:(id)arg1 message:(id)arg2;
- (void)cancelSucceed;
- (void)showGainCouponAlert:(id)arg1;
- (void)showCancelAlert:(id)arg1;
- (void)requestCancelOrder:(id)arg1 needAlertMessage:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)cancelOrderRequest:(_Bool)arg1;
- (void)cancelAction;
- (void)updateLeftMinutes;
- (void)updateOrderInfo;
- (void)updateViewWithOrderState:(long long)arg1;
- (void)refreshOrderInfoView;
- (void)buildConstraints;
- (void)infoViewReceiveNewIM;
- (void)receiveIMSessionStatusChange:(id)arg1;
- (void)receiveNewIM:(id)arg1;
- (void)registerNotifications;
- (void)dealloc;
- (void)enterForeground;
- (void)getOrderInfoWithOrderRequest:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

