//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CTHotelDetailCacheBean, CTWebImageView, UILabel;

@interface CTHotelDetailGalleryButton : UIButton
{
    UIButton *_cameraButton;
    UILabel *_cameraIcon;
    CTWebImageView *_imgView;
    CTHotelDetailCacheBean *_mCacheBean;
}

@property(nonatomic) __weak CTHotelDetailCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
@property(retain, nonatomic) CTWebImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *cameraIcon; // @synthesize cameraIcon=_cameraIcon;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void).cxx_destruct;
- (id)getHeadImage;
- (void)setData:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

