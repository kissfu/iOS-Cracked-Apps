//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

@interface MQQRedAlarmHeaderView : UICollectionReusableView
{
    UIImageView *_leftBorderView;
    UIImageView *_rightBorderView;
    UIImageView *_titleImageView;
}

+ (double)height;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

