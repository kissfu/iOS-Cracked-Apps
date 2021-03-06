//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol MQQScreenElemViewDelegate;

@interface MQQScreenElemView : UIView
{
    UIImageView *_screenView;
    UIImageView *_checkView;
    long long _type;
    id <MQQScreenElemViewDelegate> _delegate;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) id <MQQScreenElemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSelected:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 type:(long long)arg2;

@end

