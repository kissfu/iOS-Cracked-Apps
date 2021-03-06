//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMCustomTouchRecognizerDelegate.h"
#import "NMHostSwitchPopoverDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NMCustomTouchRecognizer, NMHostSwitchPopover, NSMutableArray, NSString;

@interface NMServerDomainManager : NSObject <NMHostSwitchPopoverDelegate, NMCustomTouchRecognizerDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _currentServerHost;
    NSString *_customServerHost;
    NSString *_homePageURL;
    NSString *_secureHomePageURL;
    NSString *_serverURL;
    NSString *_secureServerURL;
    NSString *_spServerURL;
    NSString *_secureSpServerURL;
    NSString *_storeServerURL;
    NSString *_adServerURL;
    NSString *_secureStoreServerURL;
    NSString *_liveServerURL;
    NSString *_batchHomePageURL;
    NSString *_batchSecureHomePageURL;
    NSString *_liveHomePageURL;
    NSMutableArray *_userArray;
    NMCustomTouchRecognizer *_swipeRecognizer;
    NMHostSwitchPopover *_popover;
    NMHostSwitchPopover *_hostSwitcherPopover;
    NMHostSwitchPopover *_userSwitcherPopover;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSString *customServerHost; // @synthesize customServerHost=_customServerHost;
@property(nonatomic) unsigned long long currentServerHost; // @synthesize currentServerHost=_currentServerHost;
- (void).cxx_destruct;
- (void)crashApp;
- (void)showNoticeAndCrashApp:(id)arg1 needLogout:(_Bool)arg2;
- (void)_showSameServerIsChosenNotice;
- (void)hostSwitchPopover:(id)arg1 menuTouchedAtIndex:(unsigned long long)arg2 title:(id)arg3 userInfo:(id)arg4;
- (void)hostSwitchPopoverDidDismiss:(id)arg1;
- (void)switchToUserAccount:(id)arg1;
- (void)showUserSwitcherPopover;
- (void)resetUserArray;
- (void)cleanCache;
- (id)apiURIString;
- (id)secureStoreServerURL;
- (id)liveServerURL;
- (id)adServerURL;
- (id)storeServerURL;
- (id)secureSpServerURL;
- (id)spServerURL;
- (id)secureServerURL;
- (id)serverURL;
- (id)liveHomePage;
- (id)secureHomePage;
- (id)homePage;
- (id)liveHost;
- (id)host;
- (void)showHostSwitcherPopover;
- (id)dictionaryDataAtPath:(id)arg1;
- (void)saveDebugSettings;
- (void)restoreDebugSettings;
- (id)debugSettingPath;
- (id)storagePath;
- (void)restoreHostSettings;
- (void)saveHostSettings;
- (void)presentHostSwitchPopMenu;
- (void)customTouchRecognizerThreeFingerRightSwipeDetected:(id)arg1;
- (void)observeThreeFinger;
- (void)finishLauching:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

