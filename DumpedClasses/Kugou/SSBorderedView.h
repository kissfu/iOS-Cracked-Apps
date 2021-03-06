//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface SSBorderedView : UIView
{
    UIColor *_topBorderColor;
    UIColor *_topInsetColor;
    UIColor *_bottomInsetColor;
    UIColor *_bottomBorderColor;
}

@property(retain, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(retain, nonatomic) UIColor *bottomInsetColor; // @synthesize bottomInsetColor=_bottomInsetColor;
@property(retain, nonatomic) UIColor *topInsetColor; // @synthesize topInsetColor=_topInsetColor;
@property(retain, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

