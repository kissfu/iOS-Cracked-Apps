//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, TBFilter, TBStoryTimerFilterItem, TBSwipeableFilterView, UIScrollView;

@interface TBStoryVideoVisualEffects : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    double scrollViewStartContentOffsetX;
    TBStoryTimerFilterItem *_timerFilterView;
    unsigned long long _currentItemIndex;
    id <TBStoryVideoVisualEffectsDelegate> _delegate;
    TBSwipeableFilterView *_srcollDelegate;
    TBFilter *_currentFilter;
    NSArray *_visualEffectTypes;
    NSMutableArray *_visualEffectItems;
    unsigned long long _currentPageIndex;
}

@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSMutableArray *visualEffectItems; // @synthesize visualEffectItems=_visualEffectItems;
@property(retain, nonatomic) NSArray *visualEffectTypes; // @synthesize visualEffectTypes=_visualEffectTypes;
@property(retain, nonatomic) TBFilter *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak TBSwipeableFilterView *srcollDelegate; // @synthesize srcollDelegate=_srcollDelegate;
@property(nonatomic) __weak id <TBStoryVideoVisualEffectsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)reStoreVisualEffect:(id)arg1;
- (id)currentVisualEffectItem;
- (id)visualEffectItemForIndex:(unsigned long long)arg1;
- (void)showVisualEffects:(id)arg1;
- (void)clearEffects;
- (void)createScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
