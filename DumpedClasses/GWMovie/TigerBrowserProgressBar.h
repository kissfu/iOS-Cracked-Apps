//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIProgressView.h>

@class NSTimer, UIColor;

@interface TigerBrowserProgressBar : UIProgressView
{
    UIColor *_tintColor;
    NSTimer *_animationTimer;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)hideWithFadeOut;
- (void)drawRect:(struct CGRect)arg1;

@end

