//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface QYPPPubMoodPanel : UIView
{
    NSArray *_moodNameArr;
    NSMutableArray *_items;
    long long _moodType;
    CDUnknownBlockType _moodItemDidChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType moodItemDidChangeBlock; // @synthesize moodItemDidChangeBlock=_moodItemDidChangeBlock;
- (void).cxx_destruct;
- (void)updateDataWithItem:(id)arg1;
- (void)tapItem:(id)arg1;
- (void)configUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

