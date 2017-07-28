//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGLChatBaseCell.h"

#import "OHAttributedLabelDelegate.h"

@class NSDictionary, NSString, OHAttributedLabel, UIImageView, UILabel, UIView;

@interface KGLEnterRoomViewCell : KGLChatBaseCell <OHAttributedLabelDelegate>
{
    id <EnterRoomViewCellDelegate> _delegate;
    NSDictionary *_msg;
    UIView *_textView;
    UILabel *_nameLabel;
    UILabel *_enterLabel;
    OHAttributedLabel *_enterRoomMsgLabel;
    UIImageView *_carImgView;
}

+ (double)cellHeightOfMsg:(id)arg1;
@property(retain, nonatomic) UIImageView *carImgView; // @synthesize carImgView=_carImgView;
@property(retain, nonatomic) OHAttributedLabel *enterRoomMsgLabel; // @synthesize enterRoomMsgLabel=_enterRoomMsgLabel;
@property(retain, nonatomic) UILabel *enterLabel; // @synthesize enterLabel=_enterLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSDictionary *msg; // @synthesize msg=_msg;
@property(nonatomic) __weak id <EnterRoomViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectAction;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)updateView;
- (void)setMessage:(id)arg1;
- (void)initView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
