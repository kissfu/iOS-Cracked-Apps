//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTHotelPromotionGroupView, CTWebImageView, UILabel;

@interface CTHotelDetailSceneNoDPCell : UITableViewCell
{
    CTWebImageView *_imgvHotel;
    UILabel *_lblName;
    UILabel *_lblPrice;
    UILabel *_lblDistance;
    CTHotelPromotionGroupView *_groupView;
}

+ (id)createCell:(id)arg1;
+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) CTHotelPromotionGroupView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) UILabel *lblDistance; // @synthesize lblDistance=_lblDistance;
@property(retain, nonatomic) UILabel *lblPrice; // @synthesize lblPrice=_lblPrice;
@property(retain, nonatomic) UILabel *lblName; // @synthesize lblName=_lblName;
@property(retain, nonatomic) CTWebImageView *imgvHotel; // @synthesize imgvHotel=_imgvHotel;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
