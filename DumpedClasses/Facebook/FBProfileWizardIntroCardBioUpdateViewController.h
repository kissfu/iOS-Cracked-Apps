//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBProfileWizardViewController.h"

#import "FBProfileIntroCardEditBioSectionViewControllerDelegate-Protocol.h"
#import "FBProfileWizardIntroCardBioUpdateViewDelegate-Protocol.h"

@class FBProfileWizardIntroCardBioUpdateView, NSString;

@interface FBProfileWizardIntroCardBioUpdateViewController : FBProfileWizardViewController <FBProfileWizardIntroCardBioUpdateViewDelegate, FBProfileIntroCardEditBioSectionViewControllerDelegate>
{
    FBProfileWizardIntroCardBioUpdateView *_introCardBioUpdateView;
    _Bool _introCardBioUpdated;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)introCardBioSuccessfullyEdited;
- (void)goToNextStep;
- (void)didTapAddIntroCardBioButton;
- (void)didTapSkip;
- (_Bool)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithProfileWizardModel:(id)arg1 currentStepIndex:(unsigned long long)arg2 session:(id)arg3 person:(id)arg4 scenePath:(id)arg5 analyticsUUID:(id)arg6 referralType:(id)arg7 referralID:(id)arg8;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

