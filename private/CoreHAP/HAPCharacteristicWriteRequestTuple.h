//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HAPCharacteristic, NSData, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : HMFObject
{
    _Bool _timedWrite;
    _Bool _writeResponse;
    HAPCharacteristic *_characteristic;
    id _value;
    NSData *_authorizationData;
    NSNumber *_enableEvents;
}

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(_Bool)arg4;
@property(retain, nonatomic) NSNumber *enableEvents; // @synthesize enableEvents=_enableEvents;
@property(nonatomic) _Bool writeResponse; // @synthesize writeResponse=_writeResponse;
@property(nonatomic) _Bool timedWrite; // @synthesize timedWrite=_timedWrite;
@property(retain, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;

@end

