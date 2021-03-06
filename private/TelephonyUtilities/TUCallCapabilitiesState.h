//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "TUPubliclyAccessibleCopying.h"

@class NSArray, NSDictionary, NSSet, NSString, TUCTCapabilityInfo, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    _Bool _supportsPrimaryCalling;
    _Bool _supportsBasebandCalling;
    _Bool _supportsCellularData;
    _Bool _supportsDisplayingTelephonyCalls;
    _Bool _supportsDisplayingFaceTimeAudioCalls;
    _Bool _supportsDisplayingFaceTimeVideoCalls;
    _Bool _faceTimeAudioAvailable;
    _Bool _faceTimeVideoAvailable;
    _Bool _ctCapabilitiesValid;
    _Bool _csCallingCurrentlyAvailable;
    _Bool _wiFiCallingCurrentlyAvailable;
    _Bool _wiFiEmergencyCallingAvailable;
    _Bool _wiFiEmergencyCallingSupported;
    _Bool _voLTECallingCurrentlyAvailable;
    _Bool _accountsMatchForSecondaryCalling;
    _Bool _accountsSupportSecondaryCalling;
    _Bool _supportsThumperCalling;
    _Bool _thumperCallingCurrentlyAvailable;
    _Bool _thumperCallingAllowedForCurrentDevice;
    _Bool _thumperCallingEnabled;
    _Bool _supportsRelayCalling;
    _Bool _relayCallingEnabled;
    _Bool _relayCallingFeaturesEnabled;
    _Bool _supportsTelephonyRelayCalling;
    _Bool _supportsFaceTimeAudioRelayCalling;
    _Bool _supportsFaceTimeVideoRelayCalling;
    _Bool _supportsSimultaneousVoiceAndData;
    _Bool _emergencyCallbackModeEnabled;
    _Bool _supportsCarrierServices;
    int _relayCallingAvailability;
    TUCTCapabilityInfo *_wiFiCallingCapabilityInfo;
    TUCTCapabilityInfo *_voLTECallingCapabilityInfo;
    TUCTCapabilityInfo *_thumperCallingCapabilityInfo;
    NSSet *_thumperCallingAllowedSecondaryDeviceIDs;
    NSString *_thumperCallingLocalDeviceID;
    NSDictionary *_relayCallingDisabledForDeviceID;
    NSString *_outgoingRelayCallerID;
    NSArray *_cloudCallingDevices;
}

+ (_Bool)supportsSecureCoding;
+ (id)allowedCapabilityInformationClasses;
@property(nonatomic) _Bool supportsCarrierServices; // @synthesize supportsCarrierServices=_supportsCarrierServices;
@property(nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled; // @synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled;
@property(copy, nonatomic) NSArray *cloudCallingDevices; // @synthesize cloudCallingDevices=_cloudCallingDevices;
@property(nonatomic) _Bool supportsSimultaneousVoiceAndData; // @synthesize supportsSimultaneousVoiceAndData=_supportsSimultaneousVoiceAndData;
@property(nonatomic) _Bool supportsFaceTimeVideoRelayCalling; // @synthesize supportsFaceTimeVideoRelayCalling=_supportsFaceTimeVideoRelayCalling;
@property(nonatomic) _Bool supportsFaceTimeAudioRelayCalling; // @synthesize supportsFaceTimeAudioRelayCalling=_supportsFaceTimeAudioRelayCalling;
@property(nonatomic) _Bool supportsTelephonyRelayCalling; // @synthesize supportsTelephonyRelayCalling=_supportsTelephonyRelayCalling;
@property(copy, nonatomic) NSString *outgoingRelayCallerID; // @synthesize outgoingRelayCallerID=_outgoingRelayCallerID;
@property(copy, nonatomic) NSDictionary *relayCallingDisabledForDeviceID; // @synthesize relayCallingDisabledForDeviceID=_relayCallingDisabledForDeviceID;
@property(nonatomic) int relayCallingAvailability; // @synthesize relayCallingAvailability=_relayCallingAvailability;
@property(nonatomic, getter=areRelayCallingFeaturesEnabled) _Bool relayCallingFeaturesEnabled; // @synthesize relayCallingFeaturesEnabled=_relayCallingFeaturesEnabled;
@property(nonatomic, getter=isRelayCallingEnabled) _Bool relayCallingEnabled; // @synthesize relayCallingEnabled=_relayCallingEnabled;
@property(nonatomic) _Bool supportsRelayCalling; // @synthesize supportsRelayCalling=_supportsRelayCalling;
@property(copy, nonatomic) NSString *thumperCallingLocalDeviceID; // @synthesize thumperCallingLocalDeviceID=_thumperCallingLocalDeviceID;
@property(copy, nonatomic) NSSet *thumperCallingAllowedSecondaryDeviceIDs; // @synthesize thumperCallingAllowedSecondaryDeviceIDs=_thumperCallingAllowedSecondaryDeviceIDs;
@property(copy, nonatomic) TUCTCapabilityInfo *thumperCallingCapabilityInfo; // @synthesize thumperCallingCapabilityInfo=_thumperCallingCapabilityInfo;
@property(nonatomic, getter=isThumperCallingEnabled) _Bool thumperCallingEnabled; // @synthesize thumperCallingEnabled=_thumperCallingEnabled;
@property(nonatomic, getter=isThumperCallingAllowedForCurrentDevice) _Bool thumperCallingAllowedForCurrentDevice; // @synthesize thumperCallingAllowedForCurrentDevice=_thumperCallingAllowedForCurrentDevice;
@property(nonatomic, getter=isThumperCallingCurrentlyAvailable) _Bool thumperCallingCurrentlyAvailable; // @synthesize thumperCallingCurrentlyAvailable=_thumperCallingCurrentlyAvailable;
@property(nonatomic) _Bool supportsThumperCalling; // @synthesize supportsThumperCalling=_supportsThumperCalling;
@property(nonatomic) _Bool accountsSupportSecondaryCalling; // @synthesize accountsSupportSecondaryCalling=_accountsSupportSecondaryCalling;
@property(nonatomic) _Bool accountsMatchForSecondaryCalling; // @synthesize accountsMatchForSecondaryCalling=_accountsMatchForSecondaryCalling;
@property(copy, nonatomic) TUCTCapabilityInfo *voLTECallingCapabilityInfo; // @synthesize voLTECallingCapabilityInfo=_voLTECallingCapabilityInfo;
@property(nonatomic, getter=isVoLTECallingCurrentlyAvailable) _Bool voLTECallingCurrentlyAvailable; // @synthesize voLTECallingCurrentlyAvailable=_voLTECallingCurrentlyAvailable;
@property(copy, nonatomic) TUCTCapabilityInfo *wiFiCallingCapabilityInfo; // @synthesize wiFiCallingCapabilityInfo=_wiFiCallingCapabilityInfo;
@property(nonatomic, getter=isWiFiEmergencyCallingSupported) _Bool wiFiEmergencyCallingSupported; // @synthesize wiFiEmergencyCallingSupported=_wiFiEmergencyCallingSupported;
@property(nonatomic, getter=isWiFiEmergencyCallingAvailable) _Bool wiFiEmergencyCallingAvailable; // @synthesize wiFiEmergencyCallingAvailable=_wiFiEmergencyCallingAvailable;
@property(nonatomic, getter=isWiFiCallingCurrentlyAvailable) _Bool wiFiCallingCurrentlyAvailable; // @synthesize wiFiCallingCurrentlyAvailable=_wiFiCallingCurrentlyAvailable;
@property(nonatomic, getter=isCSCallingCurrentlyAvailable) _Bool csCallingCurrentlyAvailable; // @synthesize csCallingCurrentlyAvailable=_csCallingCurrentlyAvailable;
@property(nonatomic, getter=areCTCapabilitiesValid) _Bool ctCapabilitiesValid; // @synthesize ctCapabilitiesValid=_ctCapabilitiesValid;
@property(nonatomic, getter=isFaceTimeVideoAvailable) _Bool faceTimeVideoAvailable; // @synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable;
@property(nonatomic, getter=isFaceTimeAudioAvailable) _Bool faceTimeAudioAvailable; // @synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable;
@property(nonatomic) _Bool supportsDisplayingFaceTimeVideoCalls; // @synthesize supportsDisplayingFaceTimeVideoCalls=_supportsDisplayingFaceTimeVideoCalls;
@property(nonatomic) _Bool supportsDisplayingFaceTimeAudioCalls; // @synthesize supportsDisplayingFaceTimeAudioCalls=_supportsDisplayingFaceTimeAudioCalls;
@property(nonatomic) _Bool supportsDisplayingTelephonyCalls; // @synthesize supportsDisplayingTelephonyCalls=_supportsDisplayingTelephonyCalls;
@property(nonatomic) _Bool supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property(nonatomic) _Bool supportsBasebandCalling; // @synthesize supportsBasebandCalling=_supportsBasebandCalling;
@property(nonatomic) _Bool supportsPrimaryCalling; // @synthesize supportsPrimaryCalling=_supportsPrimaryCalling;
- (void).cxx_destruct;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publiclyAccessibleCopy;
- (id)deviceIDForPhoneNumber:(id)arg1;
@property(readonly, nonatomic) TUCloudCallingDevice *defaultPairedDevice;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

