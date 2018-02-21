//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSystemServiceFacilityClient.h"

@class NSString;

@interface FBBasicSystemServiceFacilityClient : NSObject <FBSystemServiceFacilityClient>
{
    id <FBSystemServiceClient> _systemServiceClient;
}

+ (id)facilityClientWithSystemServiceClient:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <FBSystemServiceClient> systemServiceClient; // @synthesize systemServiceClient=_systemServiceClient;
- (id)initWithSystemServiceClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

