//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSLock, NSMutableArray, NSString;
@protocol EAAccessoryDelegate;

@interface EAAccessoryInternal : NSObject
{
    _Bool _connected;
    unsigned int _connectionID;
    NSString *_name;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_serialNumber;
    NSString *_firmwareRevision;
    NSString *_hardwareRevision;
    NSString *_dockType;
    NSString *_macAddress;
    NSString *_preferredApp;
    NSData *_certSerial;
    NSData *_certData;
    int _classType;
    NSDictionary *_audioPorts;
    unsigned int _capabilities;
    _Bool _notPresentInIAPAccessoriesArray;
    NSLock *_locationLock;
    NSMutableArray *_sessionsList;
    NSArray *_eqNames;
    int _locationSentenceTypesMask;
    NSDictionary *_vehicleInfoSupportedTypes;
    NSDictionary *_vehicleInfoInitialData;
    NSArray *_cameraComponents;
    NSDictionary *_protocols;
    id <EAAccessoryDelegate> _delegate;
    _Bool _pointOfInterestHandoffEnabled;
    _Bool _hasIPConnection;
    _Bool _isAvailableOverBonjour;
    _Bool _createdByCoreAccessories;
    unsigned int _eqIndex;
    NSMutableArray *_enqueuedNMEASentences;
    NSString *_coreAccessoryPrimaryUUID;
    NSString *_bonjourName;
    CDUnknownBlockType _pairingCompletionBlock;
    CDUnknownBlockType _WiFiCredentialsCompletionBlock;
}

@property(copy) CDUnknownBlockType WiFiCredentialsCompletionBlock; // @synthesize WiFiCredentialsCompletionBlock=_WiFiCredentialsCompletionBlock;
@property(copy) CDUnknownBlockType pairingCompletionBlock; // @synthesize pairingCompletionBlock=_pairingCompletionBlock;
@property _Bool createdByCoreAccessories; // @synthesize createdByCoreAccessories=_createdByCoreAccessories;
@property(nonatomic) _Bool isAvailableOverBonjour; // @synthesize isAvailableOverBonjour=_isAvailableOverBonjour;
@property(nonatomic) _Bool hasIPConnection; // @synthesize hasIPConnection=_hasIPConnection;
@property(copy, nonatomic) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property(nonatomic) int locationSentenceTypesMask; // @synthesize locationSentenceTypesMask=_locationSentenceTypesMask;
@property(copy, nonatomic) NSString *coreAccessoryPrimaryUUID; // @synthesize coreAccessoryPrimaryUUID=_coreAccessoryPrimaryUUID;
@property(nonatomic) NSMutableArray *enqueuedNMEASentences; // @synthesize enqueuedNMEASentences=_enqueuedNMEASentences;
@property _Bool pointOfInterestHandoffEnabled; // @synthesize pointOfInterestHandoffEnabled=_pointOfInterestHandoffEnabled;
@property(nonatomic) id <EAAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) NSArray *cameraComponents; // @synthesize cameraComponents=_cameraComponents;
@property(retain, nonatomic) NSDictionary *vehicleInfoInitialData; // @synthesize vehicleInfoInitialData=_vehicleInfoInitialData;
@property(retain, nonatomic) NSDictionary *vehicleInfoSupportedTypes; // @synthesize vehicleInfoSupportedTypes=_vehicleInfoSupportedTypes;
@property(nonatomic) unsigned int eqIndex; // @synthesize eqIndex=_eqIndex;
@property(retain, nonatomic) NSArray *eqNames; // @synthesize eqNames=_eqNames;
@property(nonatomic) _Bool notPresentInIAPAccessoriesArray; // @synthesize notPresentInIAPAccessoriesArray=_notPresentInIAPAccessoriesArray;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) NSDictionary *audioPorts; // @synthesize audioPorts=_audioPorts;
@property(nonatomic) int classType; // @synthesize classType=_classType;
@property(copy, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property(copy, nonatomic) NSData *certSerial; // @synthesize certSerial=_certSerial;
@property(copy, nonatomic) NSString *preferredApp; // @synthesize preferredApp=_preferredApp;
@property(copy, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property(copy, nonatomic) NSString *dockType; // @synthesize dockType=_dockType;
@property(copy, nonatomic) NSString *hardwareRevision; // @synthesize hardwareRevision=_hardwareRevision;
@property(copy, nonatomic) NSString *firmwareRevision; // @synthesize firmwareRevision=_firmwareRevision;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) unsigned int connectionID; // @synthesize connectionID=_connectionID;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) NSArray *sessionsList;
- (void)removeSession:(id)arg1;
- (void)addSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end

