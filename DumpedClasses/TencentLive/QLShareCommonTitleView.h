//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIScrollView;

@interface QLShareCommonTitleView : UIView
{
    NSMutableArray *_shareLabels;
    UIScrollView *_scrollView;
    UIView *_shareBtnsContainer;
    NSMutableArray *_shareButtons;
}

@property(retain, nonatomic) NSMutableArray *shareButtons; // @synthesize shareButtons=_shareButtons;
@property(retain, nonatomic) UIView *shareBtnsContainer; // @synthesize shareBtnsContainer=_shareBtnsContainer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *shareLabels; // @synthesize shareLabels=_shareLabels;
- (void).cxx_destruct;
- (unsigned long long)actionTypeWithBtnTag:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)readTitleWithButtonType:(unsigned long long)arg1;
- (void)showAllShareBtns;
- (id)createButtonWithType:(unsigned long long)arg1;
- (void)shareClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

