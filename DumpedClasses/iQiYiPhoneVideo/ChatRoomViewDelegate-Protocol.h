//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ChatMessageFrameModel, NSString, QYLiveChatMessage;

@protocol ChatRoomViewDelegate <NSObject>

@optional
- (void)updateImmediateMessage:(QYLiveChatMessage *)arg1;
- (void)startNoticeTimer;
- (void)enterPaopaoCircle:(id)arg1;
- (void)giftBtnClick;
- (void)doRetry;
- (_Bool)isAdministrator;
- (void)needToLogin;
- (void)sendMessage:(NSString *)arg1;
- (void)didClickMenuDeleteContent:(ChatMessageFrameModel *)arg1;
- (void)didClickMenuDisableSendMsg:(ChatMessageFrameModel *)arg1;
- (void)didClickMenuReport:(ChatMessageFrameModel *)arg1;
@end

