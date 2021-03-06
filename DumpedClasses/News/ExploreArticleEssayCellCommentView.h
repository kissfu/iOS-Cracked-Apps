//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "ExploreArticleEssayCellCommentItemViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface ExploreArticleEssayCellCommentView : SSViewBase <ExploreArticleEssayCellCommentItemViewDelegate>
{
    id <ExploreArticleEssayCellCommentViewDelegate> _delegate;
    NSArray *_commentItems;
    NSMutableArray *_commentViewItems;
}

+ (double)heightForComments:(id)arg1 viewWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *commentViewItems; // @synthesize commentViewItems=_commentViewItems;
@property(retain, nonatomic) NSArray *commentItems; // @synthesize commentItems=_commentItems;
@property(nonatomic) __weak id <ExploreArticleEssayCellCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commentItemDidSeletedNameButton:(id)arg1;
- (void)commentItemDidSeletedCommentButton:(id)arg1;
- (void)commentItemDidTouchCancelled:(id)arg1;
- (void)commentItemDidTouchEnded:(id)arg1;
- (void)commentItemDidTouchBegan:(id)arg1;
- (void)updateBackgroudColorWithHighlighted:(_Bool)arg1;
- (void)updateHighlight;
- (void)updateNormal;
- (void)refreshWithComments:(id)arg1 viewWidth:(double)arg2;
- (void)themeChanged:(id)arg1;
- (void)fontSizeChanged;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

