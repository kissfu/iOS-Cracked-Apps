//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, QLMomentPageControl, UILabel, UIScrollView, UIView;

@interface QLFanTuanRecommendStarsCell : QLBaseTabelViewCell <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    QLMomentPageControl *_pageControl;
    UILabel *_titleLabel;
    UIView *_bottomLineView;
    long long _pageNumber;
    NSMutableArray *_panelViewArray;
    NSArray *_starsArray;
}

+ (double)getQLFanTuanRecommendStarsCellHeight:(id)arg1;
@property(readonly, nonatomic) NSArray *starsArray; // @synthesize starsArray=_starsArray;
@property(readonly, nonatomic) NSMutableArray *panelViewArray; // @synthesize panelViewArray=_panelViewArray;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QLMomentPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)pageChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateStarState:(unsigned long long)arg1;
- (void)updatePages;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

