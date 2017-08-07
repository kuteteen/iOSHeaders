//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMHome.h>

@interface HMHome (Additions)
+ (id)_hf_appDataKeyForColorPaletteOfType:(unsigned long long)arg1;
- (id)hf_updateAccessControlDescriptor:(id)arg1;
- (id)hf_accessControlDescriptor;
- (id)hf_updateColorPalette:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_updateColorPalette:(id)arg1;
- (id)hf_colorPaletteOfType:(unsigned long long)arg1;
- (id)hf_colorPalette;
- (_Bool)hf_hasMediaAccessories;
- (_Bool)hf_supportsSharedEventAutomation;
- (_Bool)hf_isPresenceAuthorizedForUser:(id)arg1;
- (id)hf_allUsersIncludingCurrentUser;
- (_Bool)hf_supportsRemoteAccessRestrictions;
- (_Bool)hf_supportsPerUserRemoteAccess;
- (id)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:(_Bool)arg1;
- (_Bool)hf_homeHasOnboarded;
- (id)hf_setNotesApplicationData:(id)arg1;
- (id)hf_notesApplicationData;
- (id)hf_reorderableCamerasList;
- (id)hf_reorderableActionSetsList;
- (id)hf_reorderableServicesList;
- (id)hf_reorderableRoomsList;
- (id)hf_mediaAccessories;
- (id)hf_updateAutomaticSoftwareUpdateEnabled:(_Bool)arg1;
- (id)hf_allMediaProfiles;
- (id)hf_allCameraProfiles;
- (id)hf_cameraProfileWithIdentifier:(id)arg1;
- (id)hf_allVisibleServices;
- (id)hf_allServices;
- (id)hf_serviceWithIdentifier:(id)arg1;
- (id)hf_serviceGroupsForService:(id)arg1;
- (id)hf_actionSetWithUUID:(id)arg1;
- (id)hf_primaryResidentDevice;
- (id)hf_allProgrammableSwitchAccessories;
- (id)hf_allBridgeAccessories;
- (id)hf_accessoryWithIdentifier:(id)arg1;
- (id)hf_allNonEmptyActionSets;
- (id)hf_zoneWithIdentifier:(id)arg1;
- (id)hf_roomWithIdentifier:(id)arg1;
- (_Bool)hf_currentUserIsOwner;
- (_Bool)hf_currentUserIsAdministrator;
- (_Bool)hf_isUserAtHome;
- (_Bool)hf_isCurrentLocationHome;
- (unsigned long long)hf_remoteAccessState;
- (id)hf_characteristicValueManager;
- (id)hf_allRooms;
@end

