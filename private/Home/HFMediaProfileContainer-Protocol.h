//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFAccessoryVendor.h"
#import "HFFavoritable.h"
#import "HFGroupableItemProtocol.h"
#import "HFHomeKitObject.h"
#import "HFPrettyDescription.h"
#import "HFReorderableHomeKitObject.h"
#import "HFRoomContextProviding.h"
#import "HFSymptomsHandlerVendor.h"
#import "HFSymptomsVendor.h"
#import "HMMediaObject.h"

@class ACAccount, HFAccessorySettingAdapterManager, HFMediaProfileContainerSettingsValueManager, HFServiceNameComponents, HMAccessory, HMHome, HMMediaSession, NAFuture, NSSet, NSString;

@protocol HFMediaProfileContainer <HMMediaObject, HFAccessoryVendor, HFHomeKitObject, HFPrettyDescription, HFReorderableHomeKitObject, HFFavoritable, HFRoomContextProviding, HFGroupableItemProtocol, HFSymptomsVendor, HFSymptomsHandlerVendor>
@property(readonly, nonatomic) HFMediaProfileContainerSettingsValueManager *hf_settingsValueManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) HFAccessorySettingAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, nonatomic) NSString *hf_defaultName;
@property(readonly, nonatomic) NSString *hf_editingName;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, nonatomic) _Bool hf_supportsMediaSystem;
@property(readonly, nonatomic) _Bool hf_showsAudioSettings;
@property(readonly, nonatomic) _Bool hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) _Bool hf_isReachable;
@property(readonly, nonatomic) _Bool hf_isAppleMusicReachable;
@property(readonly, nonatomic) _Bool hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) _Bool hf_isCurrentAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjects;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, copy, nonatomic) HMMediaSession *mediaSession;
- (NSString *)hf_idsDeviceIdentifierWithError:(id *)arg1;
- (NAFuture *)hf_fetchLog:(NSString *)arg1 timeout:(double)arg2;
- (NAFuture *)hf_fetchLogListWithTimeout:(double)arg1;
- (ACAccount *)hf_appleMusicCurrentLoggedInAccount;
- (NSString *)hf_appleMusicCurrentLoggedInAccountDSID;
@end

