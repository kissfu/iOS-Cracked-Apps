//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, QRVIPImageJumpModel, UIImageView, UILabel;

@interface QRVIPChannelActivityCell : UITableViewCell
{
    QRVIPImageJumpModel *_model;
    NSString *_statisticBlock;
    UILabel *_titleLabel;
    UILabel *_detailTitleLabel;
    UIImageView *_imgView;
}

+ (double)cellFixedHeight;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *statisticBlock; // @synthesize statisticBlock=_statisticBlock;
- (void).cxx_destruct;
- (void)handleClickImg;
- (void)setTitle:(id)arg1;
- (void)setModel:(id)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

