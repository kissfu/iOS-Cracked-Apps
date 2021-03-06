//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class KQReceiveGiftEntity, NSMutableArray, NSString, UIImageView, UILabel;

@interface KQReceiveGiftView : UIView <CAAnimationDelegate>
{
    _Bool _firstGiftActive;
    _Bool _secondGiftActive;
    UIView *_firstView;
    UIImageView *_firstHeadImgView;
    UILabel *_firstTipLabel;
    UILabel *_firstNameLabel;
    UIImageView *_firstGiftImgView;
    UILabel *_firstCountLabel;
    UIView *_secondView;
    UIImageView *_secondHeadImgView;
    UILabel *_secondNameLabel;
    UILabel *_secondTipLabel;
    UIImageView *_secondGiftImgView;
    UILabel *_secondCountLabel;
    KQReceiveGiftEntity *_firstGiftEntity;
    KQReceiveGiftEntity *_secondGiftEntity;
    NSMutableArray *_receiveGiftArr;
    long long _activeCount;
}

@property(nonatomic) long long activeCount; // @synthesize activeCount=_activeCount;
@property(retain, nonatomic) NSMutableArray *receiveGiftArr; // @synthesize receiveGiftArr=_receiveGiftArr;
@property(nonatomic) _Bool secondGiftActive; // @synthesize secondGiftActive=_secondGiftActive;
@property(retain, nonatomic) KQReceiveGiftEntity *secondGiftEntity; // @synthesize secondGiftEntity=_secondGiftEntity;
@property(nonatomic) _Bool firstGiftActive; // @synthesize firstGiftActive=_firstGiftActive;
@property(retain, nonatomic) KQReceiveGiftEntity *firstGiftEntity; // @synthesize firstGiftEntity=_firstGiftEntity;
@property(retain, nonatomic) UILabel *secondCountLabel; // @synthesize secondCountLabel=_secondCountLabel;
@property(retain, nonatomic) UIImageView *secondGiftImgView; // @synthesize secondGiftImgView=_secondGiftImgView;
@property(retain, nonatomic) UILabel *secondTipLabel; // @synthesize secondTipLabel=_secondTipLabel;
@property(retain, nonatomic) UILabel *secondNameLabel; // @synthesize secondNameLabel=_secondNameLabel;
@property(retain, nonatomic) UIImageView *secondHeadImgView; // @synthesize secondHeadImgView=_secondHeadImgView;
@property(retain, nonatomic) UIView *secondView; // @synthesize secondView=_secondView;
@property(retain, nonatomic) UILabel *firstCountLabel; // @synthesize firstCountLabel=_firstCountLabel;
@property(retain, nonatomic) UIImageView *firstGiftImgView; // @synthesize firstGiftImgView=_firstGiftImgView;
@property(retain, nonatomic) UILabel *firstNameLabel; // @synthesize firstNameLabel=_firstNameLabel;
@property(retain, nonatomic) UILabel *firstTipLabel; // @synthesize firstTipLabel=_firstTipLabel;
@property(retain, nonatomic) UIImageView *firstHeadImgView; // @synthesize firstHeadImgView=_firstHeadImgView;
@property(retain, nonatomic) UIView *firstView; // @synthesize firstView=_firstView;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)buildCountStrWithCount:(long long)arg1;
- (void)addLayerAnimationWithView:(id)arg1 nameLabel:(id)arg2 headImgView:(id)arg3 giftImgView:(id)arg4 countLabel:(id)arg5 GiftEntity:(id)arg6;
- (void)beginAnimation;
- (void)showReceiveGift:(id)arg1;
- (void)createView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

