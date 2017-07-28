//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WatchHomePageParentViewController.h"

#import "KGTableViewDelegate.h"
#import "MVCategoryViewControllerDelegate.h"
#import "MVViewCommentChangeDeleagate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "WatchHomeTableFallCellDelegate.h"

@class FXMVChannelInfo, FXWatchHomeMVInfo, KGTableView, KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeLine, KGThemeView, MVCategoryViewController, NSMutableArray, NSMutableDictionary, NSString, RefreshControl, UIImageView;

@interface WatchHomeMVViewController : WatchHomePageParentViewController <KGTableViewDelegate, UITableViewDataSource, WatchHomeTableFallCellDelegate, RefreshControlDelegate, MVCategoryViewControllerDelegate, MVViewCommentChangeDeleagate>
{
    _Bool _isShowCategoryView;
    _Bool _isRefreshTop;
    _Bool _isFirstLoad;
    _Bool _sendAMPOnce;
    long long _isNeedTopInset;
    long long _enterType;
    KGTableView *_mvTableView;
    KGThemeView *_mvTableHeaderView;
    KGThemeButton *_classifyBtn;
    KGThemeButton *_recommondBtn;
    KGThemeButton *_hotBtn;
    KGThemeButton *_latestBtn;
    RefreshControl *_refreshControl;
    KGThemeLine *_line1;
    KGThemeImageView *_icon;
    KGThemeImageView *_upDownIcon;
    KGThemeLabel *_textLabel;
    long long _selectIndex;
    long long _pageIndex;
    FXWatchHomeMVInfo *_mvOriginInfoArray;
    NSMutableArray *_mvDisplayInfoList;
    NSMutableDictionary *_mvDataDic;
    MVCategoryViewController *_categoryVC;
    long long _lastReadDataIndex;
    long long _currentChannelId;
    KGThemeView *_addBg;
    UIImageView *_redDot;
    FXMVChannelInfo *_currentChannelInfo;
    FXMVChannelInfo *_backupChannelInfo;
}

@property(nonatomic) _Bool sendAMPOnce; // @synthesize sendAMPOnce=_sendAMPOnce;
@property(retain, nonatomic) FXMVChannelInfo *backupChannelInfo; // @synthesize backupChannelInfo=_backupChannelInfo;
@property(retain, nonatomic) FXMVChannelInfo *currentChannelInfo; // @synthesize currentChannelInfo=_currentChannelInfo;
@property(retain, nonatomic) UIImageView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) KGThemeView *addBg; // @synthesize addBg=_addBg;
@property(nonatomic) long long currentChannelId; // @synthesize currentChannelId=_currentChannelId;
@property(nonatomic) long long lastReadDataIndex; // @synthesize lastReadDataIndex=_lastReadDataIndex;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) _Bool isRefreshTop; // @synthesize isRefreshTop=_isRefreshTop;
@property(nonatomic) _Bool isShowCategoryView; // @synthesize isShowCategoryView=_isShowCategoryView;
@property(retain, nonatomic) MVCategoryViewController *categoryVC; // @synthesize categoryVC=_categoryVC;
@property(retain, nonatomic) NSMutableDictionary *mvDataDic; // @synthesize mvDataDic=_mvDataDic;
@property(retain, nonatomic) NSMutableArray *mvDisplayInfoList; // @synthesize mvDisplayInfoList=_mvDisplayInfoList;
@property(retain, nonatomic) FXWatchHomeMVInfo *mvOriginInfoArray; // @synthesize mvOriginInfoArray=_mvOriginInfoArray;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) KGThemeLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) KGThemeImageView *upDownIcon; // @synthesize upDownIcon=_upDownIcon;
@property(retain, nonatomic) KGThemeImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) KGThemeLine *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGThemeButton *latestBtn; // @synthesize latestBtn=_latestBtn;
@property(retain, nonatomic) KGThemeButton *hotBtn; // @synthesize hotBtn=_hotBtn;
@property(retain, nonatomic) KGThemeButton *recommondBtn; // @synthesize recommondBtn=_recommondBtn;
@property(retain, nonatomic) KGThemeButton *classifyBtn; // @synthesize classifyBtn=_classifyBtn;
@property(retain, nonatomic) KGThemeView *mvTableHeaderView; // @synthesize mvTableHeaderView=_mvTableHeaderView;
@property(retain, nonatomic) KGTableView *mvTableView; // @synthesize mvTableView=_mvTableView;
@property(nonatomic) long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) long long isNeedTopInset; // @synthesize isNeedTopInset=_isNeedTopInset;
- (void).cxx_destruct;
- (void)changeCommentsNumWithMvHash:(id)arg1 AndCommentsNum:(long long)arg2;
- (id)subTabTitle;
- (void)clickItemBI;
- (void)refreshDataBI;
- (void)changeCategory:(id)arg1;
- (void)changeCurIndexBI;
- (void)KGUsingControllerState:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)makeOnlyThisScrollViewScrollToTopOnStatusBarTap;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)isCloseCategoryView;
- (void)categoryBtnEnable:(_Bool)arg1;
- (void)updateCategoryData:(id)arg1;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)WatchHomeTableFallCellClick:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)createLastReadingTipsCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)cleanAllState;
- (void)hideRecommondBtn:(_Bool)arg1;
- (void)cleanLastReadIndexCache;
- (void)autoRefreshTop;
- (void)requestFinishTopRfreshWithString:(id)arg1;
- (void)requestFinishRefreshingDirection;
- (void)onChangeTheme:(id)arg1;
- (void)reConnectEvent;
- (void)showCategoryView:(_Bool)arg1;
- (void)closeCategoryView;
- (void)tableViewScrollEnabled:(_Bool)arg1;
- (void)showLoadingWithDifferentType;
- (void)loadDataFailToChangeLoadingStateWithCategoryId:(long long)arg1 withSelectIndex:(long long)arg2;
- (id)insertDataToArray:(id)arg1 fromArray:(id)arg2 isInsertToTop:(_Bool)arg3 isCoverData:(_Bool)arg4;
- (void)saveLastReadIndexWithCategoryId:(long long)arg1 withSelectIndex:(long long)arg2 withLastReadDataIndex:(long long)arg3;
- (_Bool)readCurrentMVCategoryIsInsertTopWithCategoryId:(long long)arg1 withSort:(long long)arg2;
- (long long)readCurrentMVCategoryLastReadIndexWithCategoryId:(long long)arg1 withSort:(long long)arg2;
- (_Bool)readCurrentMVCategoryIsLastPageWithCategoryId:(long long)arg1 withSort:(long long)arg2;
- (long long)readCurrentMVCategoryPageIndexWithCategoryId:(long long)arg1 withSort:(long long)arg2;
- (id)readMVCategoryDataWithCategoryId:(long long)arg1 withSort:(long long)arg2;
- (void)saveMVCategoryData:(id)arg1 withCategoryId:(long long)arg2 withSelectIndex:(long long)arg3 withPageIndex:(long long)arg4 withIsLastPage:(_Bool)arg5 withIsInsertTop:(_Bool)arg6 withLastReadIndex:(long long)arg7;
- (_Bool)isLoadingMVCategoryDataState;
- (id)loadingTypeStringWithCategoryID:(long long)arg1 sort:(long long)arg2;
- (void)loadCategoryData;
- (void)loadAllMVListDataWithDimension:(long long)arg1 withPage:(long long)arg2 withChannelId:(long long)arg3;
- (void)sendAPMWithError:(id)arg1;
- (void)kgFetchDataFinished:(id)arg1;
- (void)loadRecommondData:(long long)arg1 withChannelId:(long long)arg2 withIsInsertTop:(_Bool)arg3 withLastReadIndex:(long long)arg4;
- (void)initData;
- (void)reloadDataWithDimension:(id)arg1;
- (void)classifyAction;
- (void)checkRedDot;
- (void)goToSearchView;
- (void)goToCacheMvView;
- (void)initTopView;
- (void)initMVTableHeaderView;
- (void)initViews;
- (void)registerNotifications;
- (void)viewManagerChangeState:(int)arg1;
- (void)dealloc;
- (void)viewDidInitialize;
- (void)viewDidLoad;
- (id)playManualPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
