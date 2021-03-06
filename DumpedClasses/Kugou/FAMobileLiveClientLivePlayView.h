//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

#import "FALCPublicRoomChatViewDelegate.h"
#import "FAMobileLiveClientLyricControllerDelegate.h"
#import "FAMobileLiveGiftChatInfoViewDelegate.h"
#import "FAMobileLiveSongKrcViewDelegate.h"

@class FAActivityWebView, FALCEnterRoomMessageController, FALCPublicRoomChatView, FAMobileLiveClientLyricController, FAMobileLiveContinueSendGiftView, FAMobileLiveGiftChatInfoView, FAMobileLiveQuickGiftView, NSMutableArray, NSString, UIButton, UIView;

@interface FAMobileLiveClientLivePlayView : FAView <FAMobileLiveSongKrcViewDelegate, FAMobileLiveClientLyricControllerDelegate, FALCPublicRoomChatViewDelegate, FAMobileLiveGiftChatInfoViewDelegate>
{
    _Bool _isShowSendGiftView;
    _Bool _isDealingDismissSendGiftView;
    _Bool _isSinging;
    _Bool _actionViewNeedHidden;
    _Bool _shouldShowQuickViewAfterContinueView;
    id <FAMobileLiveClientLivePlayViewDelegate> _delegate;
    id <FAMobileLiveClientLivePlayViewDataSource> _dataSource;
    UIButton *_starButton;
    FALCPublicRoomChatView *_chatView;
    UIView *_chatViewBackgroundView;
    FAMobileLiveGiftChatInfoView *_giftChatInfoView;
    FAMobileLiveContinueSendGiftView *_continueGiftView;
    FAMobileLiveQuickGiftView *_quickGiftView;
    FAActivityWebView *_pendantWebViewTop;
    FAActivityWebView *_pendantWebViewBottom;
    NSMutableArray *_pendantWebViewQueue;
    double _pendantWebViewScale;
    UIView *_lyricActiveView;
    FALCEnterRoomMessageController *_enterRoomMessageController;
    FAMobileLiveClientLyricController *_lyricController;
}

@property(retain, nonatomic) FAMobileLiveClientLyricController *lyricController; // @synthesize lyricController=_lyricController;
@property(retain, nonatomic) FALCEnterRoomMessageController *enterRoomMessageController; // @synthesize enterRoomMessageController=_enterRoomMessageController;
@property(nonatomic) _Bool shouldShowQuickViewAfterContinueView; // @synthesize shouldShowQuickViewAfterContinueView=_shouldShowQuickViewAfterContinueView;
@property(nonatomic) _Bool actionViewNeedHidden; // @synthesize actionViewNeedHidden=_actionViewNeedHidden;
@property(nonatomic) _Bool isSinging; // @synthesize isSinging=_isSinging;
@property(nonatomic) _Bool isDealingDismissSendGiftView; // @synthesize isDealingDismissSendGiftView=_isDealingDismissSendGiftView;
@property(nonatomic) _Bool isShowSendGiftView; // @synthesize isShowSendGiftView=_isShowSendGiftView;
@property(retain, nonatomic) UIView *lyricActiveView; // @synthesize lyricActiveView=_lyricActiveView;
@property(nonatomic) double pendantWebViewScale; // @synthesize pendantWebViewScale=_pendantWebViewScale;
@property(retain, nonatomic) NSMutableArray *pendantWebViewQueue; // @synthesize pendantWebViewQueue=_pendantWebViewQueue;
@property(retain, nonatomic) FAActivityWebView *pendantWebViewBottom; // @synthesize pendantWebViewBottom=_pendantWebViewBottom;
@property(retain, nonatomic) FAActivityWebView *pendantWebViewTop; // @synthesize pendantWebViewTop=_pendantWebViewTop;
@property(retain, nonatomic) FAMobileLiveQuickGiftView *quickGiftView; // @synthesize quickGiftView=_quickGiftView;
@property(retain, nonatomic) FAMobileLiveContinueSendGiftView *continueGiftView; // @synthesize continueGiftView=_continueGiftView;
@property(retain, nonatomic) FAMobileLiveGiftChatInfoView *giftChatInfoView; // @synthesize giftChatInfoView=_giftChatInfoView;
@property(retain, nonatomic) UIView *chatViewBackgroundView; // @synthesize chatViewBackgroundView=_chatViewBackgroundView;
@property(retain, nonatomic) FALCPublicRoomChatView *chatView; // @synthesize chatView=_chatView;
@property(retain, nonatomic) UIButton *starButton; // @synthesize starButton=_starButton;
@property(nonatomic) __weak id <FAMobileLiveClientLivePlayViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FAMobileLiveClientLivePlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealSocketSongInfoWithDic:(id)arg1;
- (void)dealPlayerKrcInfoFromPlayer:(id)arg1;
- (void)getEnterRoomMsgDictionary:(id)arg1;
- (void)updateEnterRoomViewShowStatus:(_Bool)arg1;
- (void)adjustPositionBetweenQuickGiftViewAndPendantWebView;
- (void)recoverInputStatePendantPosition;
- (void)adjustWebViewWithJSFunName:(id)arg1 targetName:(id)arg2 funParams:(id)arg3 changeHeight:(long long)arg4;
- (void)hiddenPendantActivityWebViewWithPendantType:(unsigned long long)arg1;
- (void)showPendantActivityWebViewWithPendantType:(unsigned long long)arg1;
- (void)beginLoadPendantActivityWebViewWithURLs:(id)arg1;
- (void)dealAppDidBecomeActive;
- (void)animationChangePendantWebViewWithPosition:(unsigned long long)arg1 shouldBackAnimation:(_Bool)arg2;
- (void)animationChangeQuickStarViewWithPosition:(unsigned long long)arg1 shouldBackAnimation:(_Bool)arg2;
- (double)getQuickStarViewTopWithPosition:(unsigned long long)arg1;
- (double)getSideMenuTop;
- (double)selfMarginToScreenBottom;
- (double)getContinueGiftOutScreenTop;
- (double)getQuickGiftViewOutScreenTop;
- (double)getQuickGiftViewFinalTop;
- (double)getContinueSendGiftViewTop;
- (void)showQuickViewWhenIsHiddenWithFinalTop:(double)arg1;
- (void)updateViewWithQuickGiftModel:(id)arg1;
- (void)initQuickViewWithGiftModel:(id)arg1;
- (void)changeActionViewStatus:(_Bool)arg1;
- (void)reloadLivePlayView;
- (void)tap;
- (void)dealloc;
- (void)dismissContinueSendGiftView;
- (void)showContiueSendGiftViewIsClickContinueBtn:(_Bool)arg1;
- (void)sendGiftViewClick;
- (void)sendGiftViewProgressEnd;
- (void)continueGiftCellViewDidHide;
- (void)chatCellViewDidTapWithUserModel:(id)arg1;
- (void)faLiveChatViewBoundTransform:(struct CGPoint)arg1 state:(long long)arg2;
- (void)faLiveChatViewShowGiftView;
- (void)faLiveChatViewDealShare;
- (void)faLiveUserFollowStar;
- (_Bool)faLiveChatViewGetIsFollow;
- (long long)faLiveGetCurrentContributionRankWithUserId:(long long)arg1;
- (void)faLiveChatViewShowCrazyCatchDollView:(int)arg1 withGameUrl:(id)arg2;
- (void)faLiveChatViewSelectedUserInfo:(id)arg1;
- (void)viewerViewItemSelect:(id)arg1;
- (void)viewerViewStatusChanged:(_Bool)arg1;
- (void)renewViewWithMusicName:(id)arg1;
- (void)loadGiftMsg:(id)arg1;
- (void)loadChatMsg:(id)arg1;
- (void)configSubviews;
- (void)resetGiftAndStarViewStatus;
- (void)initViewsStatus;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

