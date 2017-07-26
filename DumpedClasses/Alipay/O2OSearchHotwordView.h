//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UILabel;

@interface O2OSearchHotwordView : UIView
{
    CDUnknownBlockType _selectAction;
    UILabel *_titleLabel;
    NSArray *_hotwords;
    NSArray *_hotwordBtns;
}

@property(copy, nonatomic) NSArray *hotwordBtns; // @synthesize hotwordBtns=_hotwordBtns;
@property(copy, nonatomic) NSArray *hotwords; // @synthesize hotwords=_hotwords;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)adjustLayout;
- (void)onWordBtnClicked:(id)arg1;
- (id)createNewHotwordBtn:(id)arg1;
- (void)createBtns;
- (void)updateHotwords:(id)arg1;
- (void)updateTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
