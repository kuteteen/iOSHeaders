//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSVMultiCallback, NSData, NSError, NSString, PBCodable;

@interface MRProtocolMessage : NSObject
{
    NSData *_protobufData;
    PBCodable *_underlyingCodableMessage;
    NSError *_error;
    NSString *_identifier;
    unsigned long long _timestamp;
    MSVMultiCallback *_messageSentCallbacks;
    MSVMultiCallback *_messagePurgedCallbacks;
}

+ (id)protocolMessageWithProtobufData:(id)arg1;
+ (unsigned long long)currentProtocolVersion;
@property(readonly, nonatomic) MSVMultiCallback *messagePurgedCallbacks; // @synthesize messagePurgedCallbacks=_messagePurgedCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *messageSentCallbacks; // @synthesize messageSentCallbacks=_messageSentCallbacks;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PBCodable *underlyingCodableMessage; // @synthesize underlyingCodableMessage=_underlyingCodableMessage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *protobufData;
@property(readonly, nonatomic) _Bool shouldLog;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) unsigned long long encryptionType;
@property(readonly, nonatomic) NSString *description;
- (id)init;
- (id)initWithUnderlyingCodableMessage:(id)arg1 identifier:(id)arg2 error:(id)arg3;

@end

