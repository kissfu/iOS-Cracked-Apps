//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class FBFriendActionController_DEPRECATED, FBUserSession, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBMemPersonFriendsGridTableViewCellDelegate, FBMemPersonFriendsSearchDataSourceDelegate, FBMemPersonPaginatedFriendListHelper, FBServiceTransactionMutating;

@interface FBMemPersonFriendsSearchDataSource : NSObject <UITableViewDataSource>
{
    FBUserSession *_session;
    FBFriendActionController_DEPRECATED *_friendActionController;
    NSString *_sourceID;
    NSString *_pendingSearchString;
    NSString *_pendingLoadingSearchString;
    id <FBServiceTransactionMutating> _token;
    NSMutableDictionary *_loadedAllFriendsStore;
    NSMutableArray *_filteredFriendListToDisplayAsTableViewDataSource;
    NSString *_currentSearchString;
    NSMutableDictionary *_searchedStringsWithPageInfo;
    int _state;
    id <FBMemPersonPaginatedFriendListHelper> _helper;
    NSMutableDictionary *_clcHandles;
    long long _objectsPerCell;
    id <FBMemPersonFriendsSearchDataSourceDelegate> _delegate;
    id <FBMemPersonFriendsGridTableViewCellDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <FBMemPersonFriendsGridTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) __weak id <FBMemPersonFriendsSearchDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_personChanged:(id)arg1;
- (void)_addConsistencyObserverForNewPeople:(id)arg1;
- (void)_loadFullDataForPeopleIntoAllFriendsStoreFinishedWithResponse:(id)arg1 andError:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_loadFullDataForPeopleIntoAllFriendsStore:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadPageOfFullDataForPeopleFilteredBySearchString:(id)arg1;
- (void)_performFiltrationBySearchString:(id)arg1;
- (id)getEntityCardArray;
- (void)_loadLiteFriendsFinishedWithResponse:(id)arg1 andError:(id)arg2;
- (void)_loadInitialAllFriendsStore;
- (void)setObjectsPerCell:(long long)arg1;
- (id)entityCardAdapterForSelectedIndex:(unsigned long long)arg1;
- (void)resetFilteredFriendDataSource;
- (void)loadSetOfPeopleBySearchString:(id)arg1;
- (void)filterSetOfPeopleBySearchString:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 sourceID:(id)arg2 friendController:(id)arg3 delegate:(id)arg4 helper:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

