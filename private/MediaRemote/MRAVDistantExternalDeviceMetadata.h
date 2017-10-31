//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class MRSupportedProtocolMessages, NSString;

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSMutableCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_hostName;
    long long _hostPort;
    MRSupportedProtocolMessages *_supportedMessages;
    void *_deviceInfo;
    _Bool _paired;
    _Bool _usingSystemPairing;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool usingSystemPairing; // @synthesize usingSystemPairing=_usingSystemPairing;
@property(readonly, nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @synthesize supportedMessages=_supportedMessages;
@property(readonly, nonatomic) void *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) long long hostPort; // @synthesize hostPort=_hostPort;
@property(readonly, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

