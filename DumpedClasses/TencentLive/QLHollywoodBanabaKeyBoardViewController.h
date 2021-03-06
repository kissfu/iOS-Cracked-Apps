//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QLUniformInputKeyBoardDressUpVisitorProtocal.h"
#import "QLUniformInputKeyBoardParamSetProtocal.h"
#import "QLUniformInputKeyBoardSourceProviderProtocal.h"
#import "QLUniformInputKeyBoardStateJumpProtocal.h"
#import "QLUniformInputKeyboardNotifyDealProtocal.h"
#import "QLUniformInputUnitProtocal.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, QLHollywoodBanabaKeyBoardRightView, QLHollywoodBanabaKeyBoardView, QLHollywoodBanabaKeyBoardViewChooseHistoryMgr;

@interface QLHollywoodBanabaKeyBoardViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, QLUniformInputUnitProtocal, QLUniformInputKeyBoardStateJumpProtocal, QLUniformInputKeyBoardDressUpVisitorProtocal, QLUniformInputKeyboardNotifyDealProtocal, QLUniformInputKeyBoardParamSetProtocal, QLUniformInputKeyBoardSourceProviderProtocal>
{
    _Bool _openVipInteracting;
    _Bool _portraitScreen;
    NSMutableDictionary *_QLUniformInputKeyBoardStateTaskMap__;
    NSMutableDictionary *_QLUniformInputKeyBoardStateMachine__;
    NSMutableDictionary *_QLUniformInputKeyBoardSources__;
    QLHollywoodBanabaKeyBoardRightView *_banabaKeyBoardRightView;
    NSIndexPath *_selectedIndexPath;
    long long _banabaKeyboardNewOpen;
    long long _switchFromVisitorToVipResult;
    QLHollywoodBanabaKeyBoardView *_banabaKeyBoard;
    NSArray *_banabaKeyBoardDataArray;
    QLHollywoodBanabaKeyBoardViewChooseHistoryMgr *_chooseHistoryMgr;
    id _weakParentCtl;
}

@property(nonatomic) __weak id weakParentCtl; // @synthesize weakParentCtl=_weakParentCtl;
@property(retain, nonatomic) QLHollywoodBanabaKeyBoardViewChooseHistoryMgr *chooseHistoryMgr; // @synthesize chooseHistoryMgr=_chooseHistoryMgr;
@property(retain, nonatomic) NSArray *banabaKeyBoardDataArray; // @synthesize banabaKeyBoardDataArray=_banabaKeyBoardDataArray;
@property(retain, nonatomic) QLHollywoodBanabaKeyBoardView *banabaKeyBoard; // @synthesize banabaKeyBoard=_banabaKeyBoard;
@property(nonatomic) _Bool portraitScreen; // @synthesize portraitScreen=_portraitScreen;
@property(nonatomic) long long switchFromVisitorToVipResult; // @synthesize switchFromVisitorToVipResult=_switchFromVisitorToVipResult;
@property(nonatomic) _Bool openVipInteracting; // @synthesize openVipInteracting=_openVipInteracting;
@property(nonatomic) long long banabaKeyboardNewOpen; // @synthesize banabaKeyboardNewOpen=_banabaKeyboardNewOpen;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) QLHollywoodBanabaKeyBoardRightView *banabaKeyBoardRightView; // @synthesize banabaKeyBoardRightView=_banabaKeyBoardRightView;
@property(nonatomic) __weak NSMutableDictionary *QLUniformInputKeyBoardSources__; // @synthesize QLUniformInputKeyBoardSources__=_QLUniformInputKeyBoardSources__;
@property(nonatomic) __weak NSMutableDictionary *QLUniformInputKeyBoardStateMachine__; // @synthesize QLUniformInputKeyBoardStateMachine__=_QLUniformInputKeyBoardStateMachine__;
@property(nonatomic) __weak NSMutableDictionary *QLUniformInputKeyBoardStateTaskMap__; // @synthesize QLUniformInputKeyBoardStateTaskMap__=_QLUniformInputKeyBoardStateTaskMap__;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfItemsInSection;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)dataWithIndexPath:(id)arg1;
- (void)showOpenVipAlertView;
- (_Bool)needShowAlertViewWithRichData:(id)arg1;
- (void)dealWithIAPDetailCloseNotify:(id)arg1;
- (void)doSomeThingWhenOpenVipConfirmed;
- (void)doSomeThingWhenOpenVipCanceled;
- (void)refreshKeyBoardWithBanabaData:(id)arg1;
- (void)refreshKeyBoardWhenSelectedIndexChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateOldSelectedItemAtIndexPath:(id)arg1 newSelectedItemAtIndexPath:(id)arg2;
- (struct CGRect)rectForBanabaKeyBoard;
- (id)bubbleKeyBoardView;
- (_Bool)isEqualRichData:(id)arg1 richData:(id)arg2;
- (id)historySelectedBubbleData;
- (void)configBubbleDataArray:(id)arg1 portraitScreen:(_Bool)arg2;
- (void)vipStateChanged:(id)arg1;
- (id)initWithParentCtl:(id)arg1 portraitScreen:(_Bool)arg2;
- (void)dealloc;
- (long long)resultOfSwitchingKeyBoardFromVisitorToVip;
- (void)keyBoardSwitchingOperationComplete:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)rightViewTouchEvent:(id)arg1;
- (void)doSomeThingWhenKeyboardDidShow;
- (struct CGRect)keyboardButtonRectBasedOnWindow:(id)arg1;
- (id)resignUsingStarBubble;
- (_Bool)intendUsingStarBubble;
- (void)setMaskTo:(id)arg1 byRoundingCorners:(unsigned long long)arg2;
- (void)setKeyBoardInputTextViewBackground:(id)arg1;
- (void)resetBanabaKeyBoardStarImage:(id)arg1 imgUrl:(id)arg2;
- (void)updateKeyBoardStateMachineAndSource;
- (void)updateKeyBoardStateMachineAndSourceToInitial:(_Bool)arg1;
- (void)updateKeyBoardSources;
- (void)updateKyeBoardStateMachine;
- (id)keyboardInputViewForKeyBoardState:(long long)arg1;
- (id)keyboardThumbnailViewForKeyBoardState:(long long)arg1;
- (id)keyboardRightViewForKeyBoardState:(long long)arg1;
- (_Bool)keyboardShouldDealWithNotification:(id)arg1;
- (void)dressUpKeyBoardTextViewBgColor:(id)arg1;
- (void)dressUpKeyBoardLayerMask:(id)arg1;
- (_Bool)stateMachineWillStepFromState:(long long)arg1 toState:(long long)arg2;
- (id)QLUniformInputKeyBoardSources;
- (id)QLUniformInputKeyBoardStateMachine;
- (id)QLUniformInputKeyBoardStateTaskMap;
@property(nonatomic) long long keyboardObserverStatus; // @dynamic keyboardObserverStatus;
@property(retain, nonatomic) NSString *preUserLoginId; // @dynamic preUserLoginId;
@property(nonatomic) _Bool clickSwitchBoardButton;
@property(nonatomic) _Bool keyboardDidShow; // @dynamic keyboardDidShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

