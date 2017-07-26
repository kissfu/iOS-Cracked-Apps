//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QRChapterListViewController.h"

#import "BookcityErrorDelegate.h"
#import "QRChapterInfoUpdaterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BookcityErrorView, NSString, OnlineTag, QRChapterInfoUpdater, QRChapterLoadingView, QRLoadingChapterCell, QRSerializedBookInfo;

@interface QROnlineChapterListViewController : QRChapterListViewController <BookcityErrorDelegate, UITableViewDataSource, UITableViewDelegate, QRChapterInfoUpdaterDelegate>
{
    OnlineTag *_onlineTag;
    QRChapterLoadingView *_loadingView;
    QRSerializedBookInfo *_serializedBookInfo;
    QRLoadingChapterCell *_lodingCell;
    QRChapterInfoUpdater *_chapterInfoUpdater;
    BookcityErrorView *_errorView;
    _Bool _isUpdating;
}

- (void).cxx_destruct;
- (void)topTabSwitchedToIndex:(unsigned long long)arg1;
- (void)doReloadOnError;
- (void)doGotoShelfOnError;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)chapterInfoUpdateFailed:(id)arg1;
- (void)chapterInfoUpdater:(id)arg1 updateSuccess:(id)arg2;
- (void)viewDidLoad;
- (id)initWithOnlineTag:(id)arg1 isDayMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
