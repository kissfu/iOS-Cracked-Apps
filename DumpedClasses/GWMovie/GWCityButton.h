//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface GWCityButton : UIButton
{
    UILabel *_cityName;
    UIImageView *_arrowImage;
    double _leftMargin;
}

@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *cityName; // @synthesize cityName=_cityName;
- (void).cxx_destruct;
- (void)updateWithCity:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

