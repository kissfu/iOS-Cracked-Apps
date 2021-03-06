//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightUseCarNewTitleCell : CTCustomeGroupTableViewCell
{
    _Bool _canDelete;
    UIImageView *_leftIcon;
    UILabel *_lable1;
    UILabel *_label2;
    UIImageView *_arrowIcon;
    UIImageView *_rightIcon;
    NSLayoutConstraint *_cnsLabel1Width;
    CDUnknownBlockType _foldSectionBlock;
    CDUnknownBlockType _delSectionBlock;
}

+ (double)setupCellHeight;
@property(copy, nonatomic) CDUnknownBlockType delSectionBlock; // @synthesize delSectionBlock=_delSectionBlock;
@property(copy, nonatomic) CDUnknownBlockType foldSectionBlock; // @synthesize foldSectionBlock=_foldSectionBlock;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(retain, nonatomic) NSLayoutConstraint *cnsLabel1Width; // @synthesize cnsLabel1Width=_cnsLabel1Width;
@property(retain, nonatomic) UIImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *lable1; // @synthesize lable1=_lable1;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
- (void).cxx_destruct;
- (void)deleteBtnClicked:(id)arg1;
- (void)genDelButton;
- (void)removeLineView;
- (void)showLineAtTop:(_Bool)arg1 leftPadding:(double)arg2 rightPadding:(double)arg3;
- (id)genLeftIcon:(id)arg1;
- (void)setLeftIconWithIconName:(id)arg1;
- (void)setLeftIconOfNum:(long long)arg1;
- (void)btn2Clicked:(id)arg1;
- (void)btn1Clicked:(id)arg1;
- (void)setupCellWithLeftIcon:(id)arg1 withLabel1:(id)arg2 withArrowIcon:(id)arg3 withLabel2:(id)arg4 withRightIcon:(id)arg5;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

