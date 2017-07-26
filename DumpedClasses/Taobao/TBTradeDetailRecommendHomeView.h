//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PagedFlowViewDataSource.h"
#import "PagedFlowViewDelegate.h"

@class NSArray<TBTradeRecmdItemModel>, NSString, TBTradeDetailPageFlowView, TBTradeDetailRecommendLoadView, TBTradeRecmdEngine, UILabel;

@interface TBTradeDetailRecommendHomeView : UIView <PagedFlowViewDataSource, PagedFlowViewDelegate>
{
    _Bool _needTrackMovePicEvent;
    CDUnknownBlockType _imageClickHandler;
    CDUnknownBlockType _buttonInitHandler;
    NSString *_eventToken;
    UILabel *_groupTitleLabel;
    NSString *_groupTitle;
    UILabel *_digitIndicatorLabel;
    TBTradeDetailPageFlowView *_pageFlowView;
    TBTradeDetailRecommendLoadView *_loadView;
    NSArray<TBTradeRecmdItemModel> *_itemList;
    TBTradeRecmdEngine *_recmdEngine;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failHandler;
}

@property(copy, nonatomic) CDUnknownBlockType failHandler; // @synthesize failHandler=_failHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(retain, nonatomic) TBTradeRecmdEngine *recmdEngine; // @synthesize recmdEngine=_recmdEngine;
@property(nonatomic) _Bool needTrackMovePicEvent; // @synthesize needTrackMovePicEvent=_needTrackMovePicEvent;
@property(retain, nonatomic) NSArray<TBTradeRecmdItemModel> *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) TBTradeDetailRecommendLoadView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) TBTradeDetailPageFlowView *pageFlowView; // @synthesize pageFlowView=_pageFlowView;
@property(retain, nonatomic) UILabel *digitIndicatorLabel; // @synthesize digitIndicatorLabel=_digitIndicatorLabel;
@property(retain, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(retain, nonatomic) UILabel *groupTitleLabel; // @synthesize groupTitleLabel=_groupTitleLabel;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(copy, nonatomic) CDUnknownBlockType buttonInitHandler; // @synthesize buttonInitHandler=_buttonInitHandler;
@property(copy, nonatomic) CDUnknownBlockType imageClickHandler; // @synthesize imageClickHandler=_imageClickHandler;
- (void).cxx_destruct;
- (id)flowView:(id)arg1 cellForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInFlowView:(id)arg1;
- (void)flowView:(id)arg1 didScrollToPageAtIndex:(long long)arg2;
- (struct CGSize)sizeForPageInFlowView:(id)arg1;
- (void)showTipsWithErrorMsg:(id)arg1;
- (void)showRecommendView;
- (void)showLoadingView;
- (void)startRequestWithParams:(id)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
