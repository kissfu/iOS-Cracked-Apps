//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FALCNormalRoomInfo, FALCQuickGiftModel, FALCRoomFansModel, FALCStarCardModel, FALiveRoomInfo, FALiveTopIconView, FAUserUserStarRelModel, NSDictionary, NSString;

@protocol FALiveRoomViewDelegate <NSObject>

@optional
- (void)faLiveChatViewBoundTransform:(struct CGPoint)arg1 state:(long long)arg2;
- (long long)liveEndGetLiveRoomId;
- (void)liveRoomViewLeftPanAction;
- (void)faLiveChatViewTouchRichCellWithCmd:(long long)arg1 content:(NSDictionary *)arg2;
- (void)faLiveChatViewTouchActivityNotice:(NSString *)arg1;
- (void)dealTapPlayerView;
- (void)clickLeaveRoomFollowGuideViewFollow;
- (void)clickLeaveRoomFollowGuideViewQuit;
- (long long)buyRichLevelGetLiveRoomId;
- (FALiveRoomInfo *)buyRichLevelGetLiveRoomInfo;
- (void)buyRichLevelViewWillDismiss;
- (void)buyRichLevelViewWillShow;
- (void)faLivePraiseButtonDidDimiss;
- (void)faLiveChatViewShowCrazyCatchDollView:(int)arg1 withGameUrl:(NSString *)arg2;
- (void)faLiveChatViewShowGiftView;
- (void)faLiveChatViewDealShare;
- (void)faLiveUserFollowStar;
- (_Bool)faLiveChatViewGetIsFollow;
- (void)quickGiftViewClick:(FALCQuickGiftModel *)arg1;
- (void)clickContinueSendGiftView;
- (long long)faLiveGetCurrentContributionRankWithUserId:(long long)arg1;
- (void)enoughViewersCancelDownloadFX;
- (void)enoughViewersToDownloadFX;
- (void)liveRoomViewDidProgressCountDownHandler;
- (void)liveRoomViewExitShootEventHandlerWithCurrentTime:(long long)arg1 isAutoExit:(_Bool)arg2;
- (void)liveRoomViewDidEnterShootMVStatusHandler;
- (void)liveRoomViewClickPublicChatView;
- (void)liveRoomViewClickTabBarItemWIthType:(long long)arg1;
- (void)clickUserCardActionWithActionType:(long long)arg1 userInfo:(FALCStarCardModel *)arg2;
- (void)clickUserCardFollowButtonWithStarCardModel:(FALCStarCardModel *)arg1 isFollow:(_Bool)arg2;
- (FAUserUserStarRelModel *)userCardRelationshipInfo;
- (FALCNormalRoomInfo *)userCardNormalRoomInfo;
- (void)willHiddenUserCard;
- (void)willShowUserCard;
- (void)clickTopViewerCount;
- (void)clickTopViewerItem:(FALCRoomFansModel *)arg1;
- (void)clickTopIconFollow:(FALiveTopIconView *)arg1;
- (void)clickTopIcon;
- (void)clickStarLight;
- (void)clickBackButton;
@end

