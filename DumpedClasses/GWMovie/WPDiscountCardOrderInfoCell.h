//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WPDiscountCardOrderInfoCell : UITableViewCell
{
    UIImageView *_checkImageView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_validPeriodLabel;
}

@property(nonatomic) __weak UILabel *validPeriodLabel; // @synthesize validPeriodLabel=_validPeriodLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
- (void).cxx_destruct;
- (void)setupWithDiscountCard:(id)arg1 canEdit:(_Bool)arg2;

@end
