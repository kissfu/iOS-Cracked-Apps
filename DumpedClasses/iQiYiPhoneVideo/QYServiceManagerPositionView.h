//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface QYServiceManagerPositionView : UIView
{
    NSMutableArray *verticalImageViews;
    NSMutableArray *horizontalImageViews;
    UIView *promptView;
    long long _numOfVisible;
}

@property(nonatomic) long long numOfVisible; // @synthesize numOfVisible=_numOfVisible;
- (void)commonInit;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end

