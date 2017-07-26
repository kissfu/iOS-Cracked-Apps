//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOModel.h"

@class EmotionParseResult, NSString;

@interface QQAIOMsgModel : QQAIOModel
{
    _Bool _isSelf;
    _Bool _isDiscussGroupMsg;
    NSString *_groupCode;
    long long _read;
    _Bool _isAnimating;
    _Bool _isOpenGroupAdmin;
    _Bool _isOpenGroupAIO;
    _Bool _IsTranslate;
    NSString *_strbackup;
    NSString *_textFirstBackup;
    NSString *_textSecondBackup;
    NSString *_destlan;
    struct CGRect _preBubbleRect;
    _Bool _needBubbleAnimate;
    long long _qqiReport;
    _Bool _stickerNeedShowLight;
    NSString *_nick;
    EmotionParseResult *_layoutNickResult;
    NSString *_groupRankStr;
    struct CGSize _groupRankSize;
}

@property(nonatomic) struct CGSize groupRankSize; // @synthesize groupRankSize=_groupRankSize;
@property(copy, nonatomic) NSString *groupRankStr; // @synthesize groupRankStr=_groupRankStr;
@property(nonatomic) _Bool stickerNeedShowLight; // @synthesize stickerNeedShowLight=_stickerNeedShowLight;
@property(retain, nonatomic) EmotionParseResult *layoutNickResult; // @synthesize layoutNickResult=_layoutNickResult;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (void)didClickGrayTail;
- (_Bool)getMagicFontOpenFlagFromMsgModel;
- (void)reloadLayoutQuoteResult;
- (void)reloadLayoutResult;
- (id)accessibilityLabel;
- (id)voiceOverText;
- (id)getGlobalGroupChatLevelIcon;
- (id)getGroupGlamourRankViewIcon;
- (_Bool)isShowGroupRankView;
- (_Bool)isSpecialTitleMember;
- (_Bool)compareMsg:(id)arg1;
- (_Bool)shouldDisplayTorchbearer;
- (_Bool)shouldDisplaySelfNick;
- (_Bool)isGroupAnonymousModel;
- (_Bool)isImageModel;
- (_Bool)isTextModel;
- (_Bool)isTailPart;
- (_Bool)isHeadPart;
- (_Bool)shouldDisplayHeadView;
- (_Bool)shouldDisplayNickName;
- (id)cellIdentifier;
- (id)initWithMessageModel:(id)arg1;
- (struct CGRect)getTailRectWithRect:(struct CGRect)arg1;
- (id)getSourceName;
- (struct CGSize)GetTailInfoSize;
- (_Bool)hasTail;
- (id)favoritesInfoModel;

// Remaining properties
@property(nonatomic) _Bool IsTranslate; // @dynamic IsTranslate;
@property(retain, nonatomic) NSString *destlan; // @dynamic destlan;
@property(retain, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(nonatomic) _Bool isAnimating; // @dynamic isAnimating;
@property(nonatomic) _Bool isDiscussGroupMsg; // @dynamic isDiscussGroupMsg;
@property(nonatomic) _Bool isOpenGroupAIO; // @dynamic isOpenGroupAIO;
@property(nonatomic) _Bool isOpenGroupAdmin; // @dynamic isOpenGroupAdmin;
@property(nonatomic) _Bool isSelf; // @dynamic isSelf;
@property(nonatomic) _Bool needBubbleAnimate; // @dynamic needBubbleAnimate;
@property(nonatomic) struct CGRect preBubbleRect; // @dynamic preBubbleRect;
@property(nonatomic) long long qqiReport; // @dynamic qqiReport;
@property(nonatomic) long long read; // @dynamic read;
@property(retain, nonatomic) NSString *strbackup; // @dynamic strbackup;
@property(retain, nonatomic) NSString *textFirstBackup; // @dynamic textFirstBackup;
@property(retain, nonatomic) NSString *textSecondBackup; // @dynamic textSecondBackup;

@end
