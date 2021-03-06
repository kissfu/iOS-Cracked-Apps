//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWDramaCellDelegate-Protocol.h"
#import "GWMovieCellDelegate-Protocol.h"
#import "GWMovieCheckLoginDelegate-Protocol.h"
#import "GWSearchHotWordDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WPSearchScreenCellDelegate-Protocol.h"

@class MJRefreshFooterView, MJRefreshHeaderView, NSIndexPath, NSMutableArray, NSObject, NSString, UIColor, UITableView, UITextField, UIView;

@interface GWSearchViewController : GWBaseViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, GWMovieCheckLoginDelegate, GWSearchHotWordDelegate, GWMovieCellDelegate, GWDramaCellDelegate, WPSearchScreenCellDelegate>
{
    _Bool _showSelectedMode;
    _Bool _showMoreInfo;
    _Bool _isRecommend;
    _Bool _showAllActivities;
    UIView *_currentNavView;
    UIColor *_navBarColor;
    long long _currentResultSearchType;
    NSObject *_selectedItem;
    UITableView *_historyTableView;
    NSMutableArray *_historyList;
    UITableView *_mainTableView;
    NSMutableArray *_mainList;
    UITextField *_searchTF;
    NSString *_searchInfo;
    NSIndexPath *_selectIndexPath;
    NSMutableArray *_hotWordsTypeList;
    MJRefreshFooterView *_refreshFooter;
    MJRefreshHeaderView *_refreshHeader;
    NSString *_searchWord;
    long long _pageIndex;
}

+ (id)createSearchViewWithSearchInfo:(id)arg1 withType:(long long)arg2 showMore:(_Bool)arg3;
+ (id)createSearchViewWithSearchInfo:(id)arg1 withType:(id)arg2;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(nonatomic) _Bool showAllActivities; // @synthesize showAllActivities=_showAllActivities;
@property(retain, nonatomic) MJRefreshHeaderView *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(retain, nonatomic) MJRefreshFooterView *refreshFooter; // @synthesize refreshFooter=_refreshFooter;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(retain, nonatomic) NSMutableArray *hotWordsTypeList; // @synthesize hotWordsTypeList=_hotWordsTypeList;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(retain, nonatomic) NSString *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) UITextField *searchTF; // @synthesize searchTF=_searchTF;
@property(retain, nonatomic) NSMutableArray *mainList; // @synthesize mainList=_mainList;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSMutableArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) UITableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(retain, nonatomic) NSObject *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) long long currentResultSearchType; // @synthesize currentResultSearchType=_currentResultSearchType;
@property(retain, nonatomic) UIColor *navBarColor; // @synthesize navBarColor=_navBarColor;
@property(retain, nonatomic) UIView *currentNavView; // @synthesize currentNavView=_currentNavView;
@property(nonatomic) _Bool showMoreInfo; // @synthesize showMoreInfo=_showMoreInfo;
@property(nonatomic) _Bool showSelectedMode; // @synthesize showSelectedMode=_showSelectedMode;
- (void).cxx_destruct;
- (void)showSearchMode:(_Bool)arg1;
- (void)clearCurrentMessageView;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)buyMovieWithScreenModel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 didOverDataSourceForIndexPath:(id)arg2;
- (void)hotWordCell:(id)arg1 clickHotWord:(id)arg2;
- (id)getSearchUmengTypeName;
- (id)staticFromDic;
- (void)checkActionWithDic:(id)arg1;
- (void)buyMovieTicketAction:(id)arg1;
- (void)specialOfferClick:(id)arg1;
- (void)dramaCell:(id)arg1 didClickQuickbuyEventWithDrama:(id)arg2 withTicketStatus:(_Bool)arg3;
- (void)dismiss;
- (void)cancelButtonClicked:(id)arg1;
- (void)cleanHistoryText;
- (void)addTextToHistory:(id)arg1;
- (void)searchTrigger:(id)arg1;
- (void)endSearchTextFieldEdit:(id)arg1;
- (void)hideLoadView;
- (long long)preferredStatusBarStyle;
- (void)addFooter;
- (void)addHeader;
- (void)clearAction;
- (void)showEmptyView;
- (void)removeEmptyView;
- (void)requestWPSearch:(id)arg1;
- (void)requestHotWord;
- (id)historyRecordFileName;
- (void)createSearchTopInputView;
- (id)searchTitle;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)gwInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

