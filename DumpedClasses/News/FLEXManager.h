//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FLEXExplorerViewControllerDelegate.h"
#import "FLEXWindowEventDelegate.h"

@class FLEXExplorerViewController, FLEXWindow, NSMutableArray, NSString;

@interface FLEXManager : NSObject <FLEXWindowEventDelegate, FLEXExplorerViewControllerDelegate>
{
    FLEXWindow *_explorerWindow;
    FLEXExplorerViewController *_explorerViewController;
    NSMutableArray *_userGlobalEntries;
}

+ (void)load;
+ (id)sharedManager;
@property(readonly, nonatomic) NSMutableArray *userGlobalEntries; // @synthesize userGlobalEntries=_userGlobalEntries;
@property(retain, nonatomic) FLEXExplorerViewController *explorerViewController; // @synthesize explorerViewController=_explorerViewController;
@property(retain, nonatomic) FLEXWindow *explorerWindow; // @synthesize explorerWindow=_explorerWindow;
- (void).cxx_destruct;
- (void)showExplorerIfNeeded;
- (void)toggleTopViewControllerOfClass:(Class)arg1;
- (id)topViewController;
- (void)tryGoBack;
- (id)firstScrollView;
- (void)tryScrollUp;
- (void)tryScrollDown;
- (void)registerGlobalEntryWithName:(id)arg1 viewControllerFutureBlock:(CDUnknownBlockType)arg2;
- (void)registerGlobalEntryWithName:(id)arg1 objectFutureBlock:(CDUnknownBlockType)arg2;
- (void)registerDefaultSimulatorShortcuts;
@property(nonatomic) _Bool simulatorShortcutsEnabled;
- (void)registerSimulatorShortcutWithKey:(id)arg1 modifiers:(long long)arg2 action:(CDUnknownBlockType)arg3 description:(id)arg4;
- (void)explorerViewControllerDidFinish:(id)arg1;
- (_Bool)canBecomeKeyWindow;
- (_Bool)shouldHandleTouchAtPoint:(struct CGPoint)arg1;
@property(nonatomic) unsigned long long networkResponseCacheByteLimit;
@property(nonatomic, getter=isNetworkDebuggingEnabled) _Bool networkDebuggingEnabled;
@property(readonly, nonatomic) _Bool isHidden;
- (void)toggleExplorer;
- (void)hideExplorer;
- (void)showExplorer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
