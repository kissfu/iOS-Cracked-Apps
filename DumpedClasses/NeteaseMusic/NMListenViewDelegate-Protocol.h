//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMListenView;

@protocol NMListenViewDelegate <NSObject>
- (void)listenViewLocationButtonTouched:(NMListenView *)arg1;

@optional
- (_Bool)shouldHandleTouchEventInListenView:(NMListenView *)arg1 point:(struct CGPoint)arg2;
- (void)listenViewDidClose:(NMListenView *)arg1;
- (void)listenViewCloseButtonTouched:(NMListenView *)arg1;
@end

