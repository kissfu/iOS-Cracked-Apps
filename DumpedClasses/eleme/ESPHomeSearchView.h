//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPHotSearch, UIImageView;

@interface ESPHomeSearchView : UIView
{
    CDUnknownBlockType _didPressedSearchAction;
    UIImageView *_searchBarImageView;
    double _barHeight;
    ESPHotSearch *_hotSearchWord;
}

+ (id)searchBarImageWithdefaultWord:(id)arg1 height:(double)arg2;
@property(retain, nonatomic) ESPHotSearch *hotSearchWord; // @synthesize hotSearchWord=_hotSearchWord;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(retain, nonatomic) UIImageView *searchBarImageView; // @synthesize searchBarImageView=_searchBarImageView;
@property(copy, nonatomic) CDUnknownBlockType didPressedSearchAction; // @synthesize didPressedSearchAction=_didPressedSearchAction;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setupSearchBarEntryStatsRefresh;
- (void)searchBarImageViewDidPressed:(id)arg1;
- (void)updateSearchBarHeight:(double)arg1;
- (void)updateWithHotWord:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
