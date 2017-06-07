//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVExternalDeviceInternal, NSArray, NSData, NSDictionary, NSString;
@protocol AVExternalDeviceDelegate;

@interface AVExternalDevice : NSObject
{
    AVExternalDeviceInternal *_externalDevice;
}

+ (id)sharedLocalDevice;
+ (id)currentCarPlayExternalDevice;
+ (id)currentExternalDevice;
- (struct OpaqueFigEndpoint *)figEndpoint;
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;
- (void)takeScreenForConnection;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (id)requestTurnByTurnNavigationOwnership;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestCarUI;
@property(readonly, nonatomic) NSData *MFiCertificateSerialNumber;
@property(readonly, nonatomic) long long transportType;
@property(readonly, nonatomic) long long navigationAidedDriving;
@property(readonly, nonatomic) long long electronicTollCollection;
@property(readonly, nonatomic) NSArray *supportedFeatures;
@property(readonly, nonatomic) _Bool recognizingSpeech;
@property(readonly, nonatomic) _Bool ownsScreen;
@property(readonly, nonatomic) _Bool ownsTurnByTurnNavigation;
@property(readonly, nonatomic) _Bool limitedUI;
@property(readonly, nonatomic) NSArray *limitedUIElements;
@property(readonly, nonatomic) _Bool rightHandDrive;
@property(readonly, nonatomic) _Bool nightModeSupported;
@property(readonly, nonatomic) _Bool nightMode;
@property(readonly, nonatomic) NSString *modelName;
@property(readonly, nonatomic) _Bool OEMIconVisible;
@property(readonly, nonatomic) NSString *OEMIconLabel;
@property(readonly, nonatomic) NSArray *OEMIcons;
@property(readonly, nonatomic) NSData *OEMIcon;
- (id)externalDeviceHIDWithUUID:(id)arg1;
@property(readonly, nonatomic) NSArray *externalDeviceHIDs;
@property(readonly, nonatomic) NSDictionary *screenPrimaryInputDevices;
@property(readonly, nonatomic) NSDictionary *screenInputCapabilities;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSArray *screenIDs;
- (id)_screenInfo;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
@property(nonatomic) id <AVExternalDeviceDelegate> delegate;
- (void)finalize;
- (void)dealloc;
- (id)_weakReference;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (id)initWithCurrentCarPlayExternalDevice;
- (id)init;

@end

