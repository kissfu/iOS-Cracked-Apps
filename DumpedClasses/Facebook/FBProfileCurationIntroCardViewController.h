//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBEntityCardViewControllerProtocol-Protocol.h"
#import "FBProfileCurationIntroCardTapEventListener-Protocol.h"
#import "FBProfileFeaturedPhotosEditViewControllerDelegate-Protocol.h"
#import "FBProfileIntroCardEditBioSectionViewControllerDelegate-Protocol.h"

@class FBListViewController, FBMemPerson, FBProfileCurationFooterActionBar, FBProfileCurationIntroCardToolbox, FBProfileCurationIntroCardUpdateListenerAnnouncer, FBProfileCurationTitleAndSubtitleUpdateStatusListenerAnnouncer, FBProfilePersonUpdateListenerAnnouncer, FBUserSession, NSDictionary, NSString;
@protocol FBEntityCardFriendingActionDelegate, FBEntityCardsAnalyticsLogger;

@interface FBProfileCurationIntroCardViewController : UIViewController <FBProfileCurationIntroCardTapEventListener, FBProfileIntroCardEditBioSectionViewControllerDelegate, FBProfileFeaturedPhotosEditViewControllerDelegate, FBEntityCardViewControllerProtocol>
{
    FBUserSession *_session;
    FBListViewController *_listViewController;
    FBProfilePersonUpdateListenerAnnouncer *_personUpdateListenerAnnouncer;
    FBMemPerson *_person;
    FBProfileCurationTitleAndSubtitleUpdateStatusListenerAnnouncer *_curaitonTitleAndSubtitleUpdateStatusListenerAnnouncer;
    FBProfileCurationFooterActionBar *_footerActionBar;
    FBProfileCurationIntroCardToolbox *_toolbox;
    NSString *_bucketItemType;
    FBProfileCurationIntroCardUpdateListenerAnnouncer *_curationIntroCardUpdateListenerAnnouncer;
    NSString *_bucketSessionID;
    NSString *_discoverySessionReferrerType;
    NSDictionary *_impressionLoggingExtras;
    id <FBEntityCardsAnalyticsLogger> _entityCardLogger;
    id <FBEntityCardFriendingActionDelegate> _friendingActionDelegate;
}

@property(nonatomic) __weak id <FBEntityCardFriendingActionDelegate> friendingActionDelegate; // @synthesize friendingActionDelegate=_friendingActionDelegate;
- (void).cxx_destruct;
- (void)logCurationTapWithTapSurface:(id)arg1;
- (void)featuredPhotosHasSuccessfuallyEdited;
- (void)introCardBioSuccessfullyEdited;
- (void)_openFeaturedPhotosEditVC;
- (void)_openIntroCardBioEditVC;
- (void)didTapMainContent;
- (void)didTapFooterActionBar;
- (id)impressionLoggingExtras;
- (void)setIsSelected:(_Bool)arg1;
- (struct CGRect)activityIndicatorViewFrameForCardHeight:(double)arg1;
- (void)updateEntity:(id)arg1 reloadData:(_Bool)arg2 isInitialEntity:(_Bool)arg3 isParentViewAnimating:(_Bool)arg4 userInfo:(id)arg5;
- (void)prefetchImagesForEntities:(id)arg1;
- (void)setAnalytics:(id)arg1 cardConfigListener:(id)arg2;
- (void)prepareForReuse;
- (struct CGRect)_floatingActionBarFrameWithOffsetY:(double)arg1;
- (void)_createFloatingActionBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

