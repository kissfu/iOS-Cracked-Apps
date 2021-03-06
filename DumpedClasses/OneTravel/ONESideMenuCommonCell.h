//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ONERedPointView, ONESideMenuCellViewModel, UIImageView, UILabel;

@interface ONESideMenuCommonCell : UITableViewCell
{
    _Bool _isRedPointShow;
    UIImageView *_leftIconImageView;
    UILabel *_leftLable;
    UILabel *_rightLabel;
    ONESideMenuCellViewModel *_viewModel;
    ONERedPointView *_redPoint;
}

@property(retain, nonatomic) ONERedPointView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) ONESideMenuCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLable; // @synthesize leftLable=_leftLable;
@property(retain, nonatomic) UIImageView *leftIconImageView; // @synthesize leftIconImageView=_leftIconImageView;
@property(nonatomic) _Bool isRedPointShow; // @synthesize isRedPointShow=_isRedPointShow;
- (void).cxx_destruct;
- (void)installConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUIWithViewModel:(id)arg1;

@end

