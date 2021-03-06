//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAuthControlling-Protocol.h"
#import "FBAuthenticationMethodHandlerDelegate-Protocol.h"
#import "FBDBLPasswordAuthenticating-Protocol.h"

@class FBAuthenticationUsernamePasswordHandler, FBDBLStoredUser, FBLoginErrorStateManager, NSString;
@protocol FBAuthControllingDelegate, FBAuthUIPresenting, FBDBLPasswordFlowUIProviding, FBNetworkDispatch;

@interface FBDBLPasswordFlowController : NSObject <FBAuthenticationMethodHandlerDelegate, FBDBLPasswordAuthenticating, FBAuthControlling>
{
    FBDBLStoredUser *_storedUser;
    id <FBDBLPasswordFlowUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    FBLoginErrorStateManager *_errorStateManager;
    id <FBNetworkDispatch> _requesterConfiguration;
    id <FBAuthControllingDelegate> _authDelegate;
    FBAuthenticationUsernamePasswordHandler *_authHandler;
}

@property(retain, nonatomic) FBAuthenticationUsernamePasswordHandler *authHandler; // @synthesize authHandler=_authHandler;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2;
- (void)authenticationHandler:(id)arg1 isReady:(_Bool)arg2;
- (void)forgotPasswordFromViewController:(id)arg1 recoveryURL:(id)arg2;
- (void)userRegistrationFromViewController:(id)arg1;
- (void)cancelLoginRequestFromViewController:(id)arg1;
- (void)submitPassword:(id)arg1 fromViewController:(id)arg2;
- (void)authenticate;
- (id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

