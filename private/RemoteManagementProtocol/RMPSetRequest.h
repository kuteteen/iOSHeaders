//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagementProtocol/RMPRemoteManagementRequest.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSString;

@interface RMPSetRequest : RMPRemoteManagementRequest <CEMRegisteredTypeProtocol>
{
    NSString *_syncToken;
    NSArray *_declarations;
}

+ (id)registeredType;
+ (id)registeredClass;
@property(retain, nonatomic) NSArray *declarations; // @synthesize declarations=_declarations;
@property(retain, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
- (void).cxx_destruct;
- (id)serialize;
- (_Bool)loadRequestFromDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

