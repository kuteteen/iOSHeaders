//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceTransport : NSObject
{
    _Bool _requiresCustomPairing;
}

@property(readonly, nonatomic) _Bool requiresCustomPairing; // @synthesize requiresCustomPairing=_requiresCustomPairing;
- (void)reset;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
@property(readonly, nonatomic) NSError *error;
@property(nonatomic) _Bool shouldUseSystemAuthenticationPrompt; // @dynamic shouldUseSystemAuthenticationPrompt;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostname;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;

@end

