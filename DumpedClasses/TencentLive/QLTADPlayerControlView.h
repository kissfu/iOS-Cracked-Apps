//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface QLTADPlayerControlView : UIView
{
    _Bool _isCtrlShow;
    NSTimer *_showTimer;
}

@property(retain, nonatomic) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(nonatomic) _Bool isCtrlShow; // @synthesize isCtrlShow=_isCtrlShow;
- (void).cxx_destruct;
- (void)tapControlView:(id)arg1;
- (void)showAllControl;
- (void)hideAllControl;
- (void)invalidateTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
