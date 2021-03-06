//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGLiveHomeListRefreshDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGLiveHomeListVM, KGLiveHomeListView, NSArray, NSString, UIView;

@interface KGLiveHomeListVLL : NSObject <UITableViewDataSource, UITableViewDelegate, KGLiveHomeListRefreshDelegate>
{
    UIView *_headerView;
    KGLiveHomeListView *_homeListView;
    CDUnknownBlockType _pullRequestBlock;
    KGLiveHomeListVM *_homeListVM;
    NSArray *_dataArray;
}

@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) KGLiveHomeListVM *homeListVM; // @synthesize homeListVM=_homeListVM;
@property(copy, nonatomic) CDUnknownBlockType pullRequestBlock; // @synthesize pullRequestBlock=_pullRequestBlock;
@property(retain, nonatomic) KGLiveHomeListView *homeListView; // @synthesize homeListView=_homeListView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (double)scale;
- (void)refreshHeadViewDidDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configData;
- (void)configListView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

