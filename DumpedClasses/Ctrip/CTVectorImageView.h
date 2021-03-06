//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBaseVectorImageView.h"

@class NSString, UIColor;

@interface CTVectorImageView : CTBaseVectorImageView
{
    UIColor *imageColor;
    double imageSize;
    NSString *imageName;
}

@property(copy, nonatomic) NSString *imageName; // @synthesize imageName;
- (void).cxx_destruct;
@property(readonly, nonatomic) double imageSize; // @synthesize imageSize;
@property(copy, nonatomic) NSString *imageCode;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor;
- (_Bool)isInvaidFontFamilyName:(id)arg1;
- (id)analysisImageName:(id)arg1;
- (void)fontFamilyName:(long long)arg1 imageCode:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 imageName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 fontFamilyName:(id)arg2 imageCode:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 iconFontFamliyName:(long long)arg2 imageCode:(id)arg3;

@end

