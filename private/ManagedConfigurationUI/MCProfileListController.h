//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfigurationUI/MCURLListenerListController.h>

#import "UITableViewDelegate.h"

@class MCProfileInfo, NSArray, NSMutableArray, NSSManager, NSString, UIImage;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate>
{
    _Bool _hasFetchedProfilesInfo;
    _Bool _hasFailedFetchingProfilesInfo;
    int _provisioningProfileInstalledToken;
    int _provisioningProfileRemovedToken;
    NSMutableArray *_profileInfo;
    UIImage *_profileListIcon;
    NSSManager *_nssManager;
    MCProfileInfo *_mdmProfileInfo;
    NSArray *_configurationProfilesInfoList;
    NSArray *_enterpriseAppSigners;
    NSArray *_developerAppSigners;
    NSArray *_blockedApplications;
}

+ (id)specifiersForBlockedApps:(id)arg1;
@property(nonatomic) int provisioningProfileRemovedToken; // @synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken;
@property(nonatomic) int provisioningProfileInstalledToken; // @synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken;
@property(retain, nonatomic) NSArray *blockedApplications; // @synthesize blockedApplications=_blockedApplications;
@property(retain, nonatomic) NSArray *developerAppSigners; // @synthesize developerAppSigners=_developerAppSigners;
@property(retain, nonatomic) NSArray *enterpriseAppSigners; // @synthesize enterpriseAppSigners=_enterpriseAppSigners;
@property(retain, nonatomic) NSArray *configurationProfilesInfoList; // @synthesize configurationProfilesInfoList=_configurationProfilesInfoList;
@property(retain, nonatomic) MCProfileInfo *mdmProfileInfo; // @synthesize mdmProfileInfo=_mdmProfileInfo;
@property(nonatomic) _Bool hasFailedFetchingProfilesInfo; // @synthesize hasFailedFetchingProfilesInfo=_hasFailedFetchingProfilesInfo;
@property(nonatomic) _Bool hasFetchedProfilesInfo; // @synthesize hasFetchedProfilesInfo=_hasFetchedProfilesInfo;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property(retain, nonatomic) UIImage *profileListIcon; // @synthesize profileListIcon=_profileListIcon;
@property(retain, nonatomic) NSMutableArray *profileInfo; // @synthesize profileInfo=_profileInfo;
- (void).cxx_destruct;
- (void)_hideProgressIndicatorAndShowBackButton:(_Bool)arg1;
- (void)_showProgressIndicator;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)specifiers;
- (id)specifiersForMDMProfileInfo:(id)arg1 configurationProfilesInfo:(id)arg2 enterpriseAppSigners:(id)arg3 developerAppSigners:(id)arg4 blockedApps:(id)arg5;
- (void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2;
- (void)_appSignerApplicationsChanged:(id)arg1;
- (void)_blockedAppsChanged:(id)arg1;
- (void)_profileListChanged:(id)arg1;
- (void)_installedApplicationsChanged:(id)arg1;
- (void)fetchRemoteProfileList;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

