//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class ExploreAvatarView, UIButton;

@interface TTVideoFloatAvatar : SSThemedView
{
    SSThemedView *_mask;
    UIButton *_button;
    ExploreAvatarView *_icon;
}

@property(retain, nonatomic) ExploreAvatarView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)init;

@end

