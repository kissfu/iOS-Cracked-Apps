//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DragLyricViewDelegate <NSObject>

@optional
- (void)scrollViewDidEndDragging;
- (void)scrollViewWillBeginDragging;
- (void)willDragLyricView;
- (void)onLyricViewDraging:(long long)arg1 offset:(double)arg2;
- (void)didDragLyricView:(long long)arg1;
@end
