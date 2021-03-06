//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface DGPSegmentTransferPointView : UIView
{
    NSString *_stationName;
    NSString *_action;
    long long _viewType;
    UILabel *_nameLable;
    UILabel *_actionLabel;
    UILabel *_missingLiveInfoLabel;
}

@property(retain, nonatomic) UILabel *missingLiveInfoLabel; // @synthesize missingLiveInfoLabel=_missingLiveInfoLabel;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
- (void).cxx_destruct;
- (double)namelabelWidth;
- (double)dgpSegmentTransferPointViewHeight;
- (void)layoutSubviews;
- (void)layoutOneLine;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 stationName:(id)arg2 action:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

