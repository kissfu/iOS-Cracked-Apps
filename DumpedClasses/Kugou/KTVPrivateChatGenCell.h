//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVPrivateChatBaseCell.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSAttributedString, NSString, OHAttributedLabel, UIButton, UIImage, UIImageView, UIView;

@interface KTVPrivateChatGenCell : KTVPrivateChatBaseCell <UIActionSheetDelegate, UIAlertViewDelegate>
{
    UIImage *_comChatPopImg_Me_Nor;
    UIImage *_comChatPopImg_Me_Hig;
    UIImage *_comChatPopImg_Others_Nor;
    UIImage *_comChatPopImg_Others_Hig;
    UIImage *_photoChatPopImg_Me_Nor;
    UIImage *_photoChatPopImg_Me_Hig;
    UIImage *_photoChatPopImg_Others_Nor;
    UIImage *_photoChatPopImg_Others_Hig;
    UIImage *_sendStateImg_Loading;
    UIImage *_sendStateImg_Failed;
    unsigned int _sendState;
    unsigned int _contType;
    NSAttributedString *_chatCont;
    NSString *_chatContTintStr;
    NSString *_chatPhotoURLStr;
    UIView *_detailChatContView;
    UIImageView *_comChatPopImgView;
    UIImageView *_photoChatPopImgView;
    OHAttributedLabel *_chatContLabel;
    UIButton *_sendStateBtn;
}

+ (float)privateChatCellHeightWithPhotoURL:(id)arg1 showTime:(_Bool)arg2;
+ (float)privateChatCellHeightWithChatCont:(id)arg1 showTime:(_Bool)arg2 showSource:(_Bool)arg3;
@property(retain, nonatomic) UIButton *sendStateBtn; // @synthesize sendStateBtn=_sendStateBtn;
@property(retain, nonatomic) OHAttributedLabel *chatContLabel; // @synthesize chatContLabel=_chatContLabel;
@property(retain, nonatomic) UIImageView *photoChatPopImgView; // @synthesize photoChatPopImgView=_photoChatPopImgView;
@property(retain, nonatomic) UIImageView *comChatPopImgView; // @synthesize comChatPopImgView=_comChatPopImgView;
@property(retain, nonatomic) UIView *detailChatContView; // @synthesize detailChatContView=_detailChatContView;
@property(copy, nonatomic) NSString *chatPhotoURLStr; // @synthesize chatPhotoURLStr=_chatPhotoURLStr;
@property(copy, nonatomic) NSString *chatContTintStr; // @synthesize chatContTintStr=_chatContTintStr;
@property(copy, nonatomic) NSAttributedString *chatCont; // @synthesize chatCont=_chatCont;
@property(nonatomic) unsigned int contType; // @synthesize contType=_contType;
@property(nonatomic) unsigned int sendState; // @synthesize sendState=_sendState;
- (void).cxx_destruct;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hideMenu;
- (void)deleted:(id)arg1;
- (void)copyed:(id)arg1;
- (void)longGestureRecognizerDidPressed:(id)arg1;
- (void)sendStateFailedDidClicked_TouchUpInside:(id)arg1;
- (void)customLayout;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <KTVPrivateChatGenCellDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
