//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAccountAccessNavigationController, FBSecuredActionWebChallengeViewController;

@interface FBSecuredActionWebChallengeController : NSObject
{
    FBAccountAccessNavigationController *_navigationController;
    FBSecuredActionWebChallengeViewController *_viewController;
}

- (void).cxx_destruct;
- (void)dismissChallenge;
- (void)presentChallengeWithPresentingViewController:(id)arg1 processPool:(id)arg2 entryURL:(id)arg3 successURL:(id)arg4 didValidateBlock:(CDUnknownBlockType)arg5 didCancelBlock:(CDUnknownBlockType)arg6;

@end

