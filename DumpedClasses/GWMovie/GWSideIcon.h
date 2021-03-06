//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIView;
@protocol GWSideIconDelegate;

@interface GWSideIcon : UIControl
{
    _Bool _Existed;
    CDUnknownBlockType _animationFinishMethod;
    id <GWSideIconDelegate> _delegate;
    UIView *_messageView;
    UIView *_searchView;
    UILabel *_messageLabel;
    UIImageView *_bellView;
}

@property(nonatomic) _Bool Existed; // @synthesize Existed=_Existed;
@property(retain, nonatomic) UIImageView *bellView; // @synthesize bellView=_bellView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) __weak id <GWSideIconDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType animationFinishMethod; // @synthesize animationFinishMethod=_animationFinishMethod;
- (void).cxx_destruct;
- (void)updateCount:(id)arg1;
- (void)receiveNotification:(id)arg1;
- (void)dismiss;
- (void)showWithStyle:(unsigned long long)arg1;
- (void)messageClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

