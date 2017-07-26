//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBShareDelegate.h"

@class NSString, TBLiveCommentInputView, TBLiveItemVideoData, TBLiveLikeCounterView, UIButton, UIViewController;

@interface TBLiveGoodsVideoInterActionView : UIView <TBShareDelegate>
{
    _Bool _hasLike;
    _Bool _newLike;
    long long _videoId;
    NSString *_recommendType;
    TBLiveCommentInputView *_commentInputView;
    CDUnknownBlockType _OpenInputView;
    UIViewController *_viewController;
    UIButton *_likeButton;
    UIView *_likeNewButton;
    UIButton *_iconB;
    UIButton *_commentButton;
    UIButton *_shareButton;
    long long _likeCount;
    TBLiveItemVideoData *_videoData;
    TBLiveLikeCounterView *_likeCounterView;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) TBLiveLikeCounterView *likeCounterView; // @synthesize likeCounterView=_likeCounterView;
@property(retain, nonatomic) TBLiveItemVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) _Bool newLike; // @synthesize newLike=_newLike;
@property(nonatomic) _Bool hasLike; // @synthesize hasLike=_hasLike;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *iconB; // @synthesize iconB=_iconB;
@property(retain, nonatomic) UIView *likeNewButton; // @synthesize likeNewButton=_likeNewButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType OpenInputView; // @synthesize OpenInputView=_OpenInputView;
@property(retain, nonatomic) TBLiveCommentInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(copy, nonatomic) NSString *recommendType; // @synthesize recommendType=_recommendType;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)removeLikeCount;
- (void)addLikeCount;
- (void)switchLikeCount;
- (void)getLikeCountAndStatus;
- (void)updateLikeButton;
- (void)clickLikeButton;
- (void)setupLikeButton;
- (void)onActionShareBtn;
- (void)setupShareButton;
- (void)setupComnentInputView;
- (void)clickCommentButton;
- (void)refreshWithData:(id)arg1;
- (void)layoutCommentInput:(_Bool)arg1 type:(long long)arg2;
- (void)setupSubViews;
- (void)dealloc;
- (id)initWithType:(struct CGRect)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
