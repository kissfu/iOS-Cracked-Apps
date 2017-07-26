//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBGuideMenuItem, UIButton, UIFont, UIImageView, UILabel;

@interface ATCLanLanInterestSegmentView : UIView
{
    float _animProgress;
    TBGuideMenuItem *_item;
    long long _index;
    UIFont *_titleFont;
    UIButton *_actionButton;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIImageView *_tagImageView;
    CDUnknownBlockType _indexDidSelectedBlock;
    struct CGSize _iconImageViewSize;
}

@property(copy, nonatomic) CDUnknownBlockType indexDidSelectedBlock; // @synthesize indexDidSelectedBlock=_indexDidSelectedBlock;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) struct CGSize iconImageViewSize; // @synthesize iconImageViewSize=_iconImageViewSize;
@property(nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) float animProgress; // @synthesize animProgress=_animProgress;
@property(retain, nonatomic) TBGuideMenuItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)actionButtonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
