//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTHeaderViewProtocol.h"

@class NSString, SSThemedImageView, SSThemedLabel, TTImageView, UITapGestureRecognizer;

@interface TTHTSTabHeaderView : SSThemedView <TTHeaderViewProtocol>
{
    _Bool _isDisplayView;
    double _minimumHeaderHeight;
    SSThemedView *_contentView;
    TTImageView *_leftImage;
    SSThemedLabel *_title;
    SSThemedLabel *_subTitle;
    SSThemedImageView *_arrowImage;
    SSThemedView *_bottomLine;
    NSString *_scheme;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) SSThemedLabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) SSThemedLabel *title; // @synthesize title=_title;
@property(retain, nonatomic) TTImageView *leftImage; // @synthesize leftImage=_leftImage;
@property(retain, nonatomic) SSThemedView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isDisplayView; // @synthesize isDisplayView=_isDisplayView;
@property(nonatomic) double minimumHeaderHeight; // @synthesize minimumHeaderHeight=_minimumHeaderHeight;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)refreshUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

