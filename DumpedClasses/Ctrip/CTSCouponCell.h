//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTScheduleBaseCell.h"

@class CTImageView, UIButton, UILabel, UIView;

@interface CTSCouponCell : CTScheduleBaseCell
{
    id <CTSCouponCellDelegate> _delegate;
    UIView *_realContentView;
    UIView *_couponView;
    UILabel *_couponNameLabel;
    UILabel *_couponDescriptionLabel;
    CTImageView *_couponLogoImageView;
    UIButton *_moreButton;
    UIView *_separatorView;
    UIView *_leftCircleView;
    UIView *_rightCircleView;
}

@property(nonatomic) __weak UIView *rightCircleView; // @synthesize rightCircleView=_rightCircleView;
@property(nonatomic) __weak UIView *leftCircleView; // @synthesize leftCircleView=_leftCircleView;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak CTImageView *couponLogoImageView; // @synthesize couponLogoImageView=_couponLogoImageView;
@property(nonatomic) __weak UILabel *couponDescriptionLabel; // @synthesize couponDescriptionLabel=_couponDescriptionLabel;
@property(nonatomic) __weak UILabel *couponNameLabel; // @synthesize couponNameLabel=_couponNameLabel;
@property(nonatomic) __weak UIView *couponView; // @synthesize couponView=_couponView;
@property(nonatomic) __weak UIView *realContentView; // @synthesize realContentView=_realContentView;
@property(nonatomic) __weak id <CTSCouponCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCellWithModel:(id)arg1 index:(id)arg2 delegate:(id)arg3;
- (void)drawDashLine:(id)arg1 lineLength:(int)arg2 lineSpacing:(int)arg3 lineColor:(id)arg4;
- (void)handleSeparatorView;
- (void)handleCouponLogoImageView;
- (void)addTapGRForContentView;
- (void)contentViewTapped;
- (void)moreButtonTouched:(id)arg1;
- (void)awakeFromNib;

@end

