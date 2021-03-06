//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBGroupsCoverPhotoPickerHandlerDelegate-Protocol.h"
#import "FBGroupsEditGroupPrivacyViewControllerDelegate-Protocol.h"
#import "FBGroupsEditGroupPurposesViewControllerDelegate-Protocol.h"
#import "FBGroupsTableSectionDetailViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBConsistentLookasideCacheObservationHandle, FBGroupsEditGroupLocalNewsVisibilityViewController, FBGroupsEditGroupPrivacyViewController, FBMemGroup, FBUserSession, NSString, UIActivityIndicatorView, UISwitch, UITableView;
@protocol FBGroupsCoverPhotoPickerHandlerProtocol, FBGroupsEditGroupViewControllerDelegate, FBGroupsHelpCenterLinkProvider, FBGroupsInfoViewConfig, FBGroupsPresentationHandlerProtocol, FBIntentHandler;

@interface FBGroupsEditGroupViewController : UIViewController <FBGroupsCoverPhotoPickerHandlerDelegate, FBGroupsEditGroupPrivacyViewControllerDelegate, FBGroupsTableSectionDetailViewDelegate, FBGroupsEditGroupPurposesViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    FBUserSession *_session;
    FBMemGroup *_group;
    FBConsistentLookasideCacheObservationHandle *_groupObservationHandle;
    FBGroupsEditGroupPrivacyViewController *_editPrivacy;
    FBGroupsEditGroupLocalNewsVisibilityViewController *_localNewsVisibilityViewController;
    id <FBGroupsCoverPhotoPickerHandlerProtocol> _coverPhotoPickerHandler;
    UIActivityIndicatorView *_spinner;
    UISwitch *_dummySwitch;
    id <FBGroupsInfoViewConfig> _config;
    id <FBGroupsHelpCenterLinkProvider> _helpCenterLinkProvider;
    id <FBGroupsPresentationHandlerProtocol> _presentationHandler;
    UITableView *_tableView;
    _Bool _isSubgroupsEnabled;
    _Bool _isGroupPurposesEnabled;
    _Bool _shouldReload;
    id <FBGroupsEditGroupViewControllerDelegate> _delegate;
    id <FBIntentHandler> _intentHandler;
}

@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(nonatomic) __weak id <FBGroupsEditGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_decorateCell:(id)arg1;
- (void)_stopSpinnerAnimation;
- (void)_startSpinnerAnimation;
- (_Bool)_shouldShowLocalNewsVisibility;
- (_Bool)_shouldShowTagsSection;
- (_Bool)_shouldShowEditLocationSection;
- (long long)_numGeneralSectionRows;
- (long long)_generalSectionItemAtRow:(long long)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (id)_accessoryViewForSubgroupGeneralSettingRowForIndexPath:(id)arg1;
- (id)_accessoryViewForGeneralSettingRowForIndexPath:(id)arg1;
- (id)_accessoryViewForRowAtIndexPath:(id)arg1;
- (unsigned long long)_thumbnailViewSizeForRowAtIndexPath:(id)arg1;
- (id)_thumbnailViewForRowAtIndexPath:(id)arg1;
- (id)_footerTitleForMembersRequestsSetting;
- (id)_footerTitleForGeneralSetting;
- (id)_footerTitleForLinkedGroups;
- (id)_footerTitleForGroupPurposes;
- (void)_mutateGroup:(id)arg1 forceGroupReload:(_Bool)arg2;
- (id)_editGroupInputData;
- (void)_groupModelUpdated:(id)arg1;
- (void)_toggleMembersCanCreateSubgroups:(id)arg1;
- (void)_toggleAdminMustApprovePosts:(id)arg1;
- (void)_toggleOnlyAdminsCanPost:(id)arg1;
- (void)_toggleAdminApprovesMemberRequests:(id)arg1;
- (void)_showEditGroupLocalNewsVisibilityViewController;
- (void)_showEditGroupPrivacyViewController;
- (void)_showEditGroupPurposesViewController;
- (void)_showEditGroupLocationTagsViewController;
- (void)_showEditGroupTagsViewController;
- (void)_showEditGroupViewController;
- (id)_tableView:(id)arg1 cellForCheckSettingsRowAtIndexPath:(id)arg2;
- (id)_titleForToggleRowForIndexPath:(id)arg1;
- (id)_titleForLinkedGroupsRow;
- (id)_titleForGroupPurposesRow;
- (id)_tableView:(id)arg1 cellForToggleSettingsRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 cellForLinkedGroupsRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 cellForGroupPurposesRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 cellForGeneralSettingsRowAtIndexPath:(id)arg2;
- (id)_titleForPostPermissionSettingsForIndexPath:(id)arg1;
- (id)_titleForMemberSettingsForIndexPath:(id)arg1;
- (id)_titleForSubgroupGeneralSettingsForIndexPath:(id)arg1;
- (id)_titleForGeneralSettingsForIndexPath:(id)arg1;
- (_Bool)_isCasualGroup;
- (void)_changeCoverPhoto;
- (_Bool)_hasSimplifiedPostPermissions;
- (_Bool)_hasSimplifiedJoinPermissions;
- (void)tappedURL:(id)arg1;
- (void)didEndCoverPhotoUploadingWithError:(id)arg1;
- (void)didBeginCoverPhotoUploading;
- (void)didSelectPurposeType:(id)arg1;
- (void)didSelectGroupPrivacyOption:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setGroup:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)fb_showNavBarSearchField;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGroup:(id)arg1 session:(id)arg2 viewConfig:(id)arg3 coverPhotoPickerHandler:(id)arg4 presentationHandler:(id)arg5 helpCenterLinkProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

