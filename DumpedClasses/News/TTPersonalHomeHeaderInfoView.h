//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedImageView, SSThemedLabel, TTPersonalHomeHeaderInfoNumberView, TTPersonalHomeUserInfoDataResponseModel;

@interface TTPersonalHomeHeaderInfoView : SSThemedView
{
    SSThemedButton *_spreadOutBtn;
    TTPersonalHomeUserInfoDataResponseModel *_infoModel;
    double _headerViewTopMargin;
    SSThemedLabel *_nameLabel;
    SSThemedImageView *_sexImageView;
    SSThemedImageView *_toutiaoIcon;
    SSThemedLabel *_authLabel;
    SSThemedLabel *_authDescLabel;
    SSThemedButton *_locationView;
    SSThemedButton *_occupationView;
    SSThemedLabel *_introduceLabel;
    TTPersonalHomeHeaderInfoNumberView *_followNumberView;
    TTPersonalHomeHeaderInfoNumberView *_likeNumbrView;
    SSThemedView *_bottomLine;
}

@property(nonatomic) __weak SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak TTPersonalHomeHeaderInfoNumberView *likeNumbrView; // @synthesize likeNumbrView=_likeNumbrView;
@property(nonatomic) __weak TTPersonalHomeHeaderInfoNumberView *followNumberView; // @synthesize followNumberView=_followNumberView;
@property(nonatomic) __weak SSThemedLabel *introduceLabel; // @synthesize introduceLabel=_introduceLabel;
@property(nonatomic) __weak SSThemedButton *occupationView; // @synthesize occupationView=_occupationView;
@property(nonatomic) __weak SSThemedButton *locationView; // @synthesize locationView=_locationView;
@property(nonatomic) __weak SSThemedLabel *authDescLabel; // @synthesize authDescLabel=_authDescLabel;
@property(nonatomic) __weak SSThemedLabel *authLabel; // @synthesize authLabel=_authLabel;
@property(nonatomic) __weak SSThemedImageView *toutiaoIcon; // @synthesize toutiaoIcon=_toutiaoIcon;
@property(nonatomic) __weak SSThemedImageView *sexImageView; // @synthesize sexImageView=_sexImageView;
@property(nonatomic) __weak SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) double headerViewTopMargin; // @synthesize headerViewTopMargin=_headerViewTopMargin;
@property(retain, nonatomic) TTPersonalHomeUserInfoDataResponseModel *infoModel; // @synthesize infoModel=_infoModel;
@property(nonatomic) __weak SSThemedButton *spreadOutBtn; // @synthesize spreadOutBtn=_spreadOutBtn;
- (void).cxx_destruct;
- (void)likeNumberViewTap;
- (void)followNumberViewTap;
- (void)setupSubviewFrameWithTopMargin:(double)arg1;
- (void)setupSubviewData;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

