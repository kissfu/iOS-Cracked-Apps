//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class UIButton, UIImageView, UILabel;

@interface SSPublishProgressView : SSViewBase
{
    UIImageView *_bgImgView;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UILabel *_progressLabel;
    UIImageView *_progressBgView;
    UIImageView *_progressFgView;
}

@property(retain, nonatomic) UIImageView *progressFgView; // @synthesize progressFgView=_progressFgView;
@property(retain, nonatomic) UIImageView *progressBgView; // @synthesize progressBgView=_progressBgView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (void)addTarget:(id)arg1 selecter:(SEL)arg2;
- (struct CGRect)frameForBGImgView;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (void)buildViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

