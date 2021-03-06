//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCharacteristicRequest.h>

@class NSData, NSUUID;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest
{
    id _value;
    NSData *_authorizationData;
    NSUUID *_identifier;
}

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4;
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4;

@end

