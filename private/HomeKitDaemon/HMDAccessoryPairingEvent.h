//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitVendorInformation, NSString;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _addOperation;
    _Bool _addViaWAC;
    AWDHomeKitVendorInformation *_vendorInfo;
    long long _linkType;
}

+ (id)removingAccessory:(id)arg1 hapAccessory:(id)arg2;
+ (id)pairingAccessory:(id)arg1;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic, getter=isAddViaWAC) _Bool addViaWAC; // @synthesize addViaWAC=_addViaWAC;
@property(readonly, nonatomic, getter=isAddOperation) _Bool addOperation; // @synthesize addOperation=_addOperation;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorInfo; // @synthesize vendorInfo=_vendorInfo;
- (void).cxx_destruct;
- (void)pairedAccessory:(id)arg1;
- (void)pairedToServer:(id)arg1;
- (id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 isAddOperation:(_Bool)arg4;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
