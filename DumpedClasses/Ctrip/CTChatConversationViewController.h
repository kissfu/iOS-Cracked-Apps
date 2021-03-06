//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTChatBaseViewController.h"

#import "CTChatBarDelegate.h"
#import "CTChatGroupBoardViewDelegate.h"
#import "CTChatMessageCellDelegate.h"
#import "CTChatUserWidgetDelegate.h"
#import "CTFetchedResultsControllerDelegate.h"

@class CTChatGroupBoardView, CTChatImagePickerManger, CTChatMessage, CTChatTitleView, CTChatViewManager, NSDictionary, NSIndexPath, NSString;

@interface CTChatConversationViewController : CTChatBaseViewController <CTChatBarDelegate, CTFetchedResultsControllerDelegate, CTChatUserWidgetDelegate, CTChatGroupBoardViewDelegate, CTChatMessageCellDelegate>
{
    NSDictionary *changes;
    _Bool _needSendLocation;
    long long _jumpType;
    CTChatViewManager *_vcManger;
    NSIndexPath *_bottomIndexPath;
    NSString *_conversationId;
    long long _conversationType;
    CTChatImagePickerManger *_imgPicManager;
    CTChatTitleView *_titleView;
    CTChatGroupBoardView *_broadCast;
    CTChatMessage *_recordingMessage;
}

@property(nonatomic) _Bool needSendLocation; // @synthesize needSendLocation=_needSendLocation;
@property(retain, nonatomic) CTChatMessage *recordingMessage; // @synthesize recordingMessage=_recordingMessage;
@property(retain, nonatomic) CTChatGroupBoardView *broadCast; // @synthesize broadCast=_broadCast;
@property(retain, nonatomic) CTChatTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) CTChatImagePickerManger *imgPicManager; // @synthesize imgPicManager=_imgPicManager;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSIndexPath *bottomIndexPath; // @synthesize bottomIndexPath=_bottomIndexPath;
@property(retain, nonatomic) CTChatViewManager *vcManger; // @synthesize vcManger=_vcManger;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObjects:(id)arg2 atIndexPaths:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPaths:(id)arg5;
- (void)sendTextMessage:(id)arg1;
- (id)URLWithTelephoneNumber:(id)arg1;
- (void)callAlertWithPhoneNumber:(id)arg1;
- (void)loadUrlWithUrl:(id)arg1;
- (void)cellDidFinishPlayingWithCell:(id)arg1 isFinished:(_Bool)arg2;
- (void)copyMessageWithCell:(id)arg1;
- (void)shareMessagetoOtherWithCell:(id)arg1;
- (void)deleteMessageWithCell:(id)arg1;
- (void)avatarImageViewLongPressed:(id)arg1;
- (void)resendMessage:(id)arg1;
- (void)messageCellTappedHead:(id)arg1;
- (void)messageCellTappedMessage:(id)arg1;
- (void)messageCellTappedBlank:(id)arg1;
- (void)didSelectUserNode:(id)arg1;
- (void)showUserViewController;
- (void)chatBar:(id)arg1 sendImageContent:(id)arg2;
- (void)chatBarCancelRecordVoice;
- (void)chatBarBeginRecordVoice;
- (void)didInputAtSign:(id)arg1;
- (void)chatBar:(id)arg1 sendVoice:(id)arg2 seconds:(int)arg3;
- (void)chatBarShowMore;
- (void)chatBarSelectLocation;
- (void)chatBarTakePhoto;
- (unsigned long long)maxImageFileSize;
- (void)chatBarSelectImage;
- (void)chatBar:(id)arg1 sendMessage:(id)arg2 andUsers:(id)arg3;
- (void)chatBar:(id)arg1 sendMessage:(id)arg2;
- (void)chatBarFrameDidChange:(id)arg1 shouldScrollToBottom:(_Bool)arg2;
- (void)goToUserSetting:(id)arg1;
- (void)goToLatest:(id)arg1;
- (void)goToHome:(id)arg1;
- (void)goToToolBox:(id)arg1;
- (void)gotoGroupSetting:(id)arg1;
- (void)boardViewCloseWithSelf:(id)arg1;
- (void)boardViewClickedTitle:(id)arg1 content:(id)arg2;
- (void)showBroadCastTitle:(id)arg1;
- (void)showRightBatButtonItems:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (int)applyNavigationBarStyle;
- (void)updateGroupMemeber;
- (void)updateShowBroadCastTitle;
- (void)updateGroupInfo;
- (void)viewDidLoad;
- (void)backBarButtonClicked:(id)arg1;
- (void)receiveLocationNotification:(id)arg1;
- (void)receiveNotification:(id)arg1;
- (void)onReceivedConversation:(id)arg1;
- (void)onReceivedMessages:(id)arg1;
- (void)dealloc;
- (id)initWithConversationId:(id)arg1 andType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

