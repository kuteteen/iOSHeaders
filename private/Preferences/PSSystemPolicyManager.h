//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSSystemPolicyManager : NSObject
{
}

+ (_Bool)_documentSettingsNeededForBundleID:(id)arg1;
+ (_Bool)_notificationSettingsNeededForBundleID:(id)arg1;
+ (void)_populateBBSectionIDs;
+ (_Bool)_cellularDataSettingsNeededForBundleID:(id)arg1;
+ (id)_dataUsageWorkspaceInfo;
+ (_Bool)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1;
+ (_Bool)_locationSettingsNeededForBundleID:(id)arg1;
+ (_Bool)_privacySettingsNeededForProxy:(id)arg1;
+ (_Bool)_systemSettingsNeededForProxy:(id)arg1;
+ (_Bool)_shouldIncludeProxy:(id)arg1;
+ (id)_thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)_thirdPartyApplicationProxies;
+ (id)thirdPartyApplicationProxies;
+ (id)thirdPartyApplicationForBundleID:(id)arg1;
+ (id)thirdPartyApplications;

@end

