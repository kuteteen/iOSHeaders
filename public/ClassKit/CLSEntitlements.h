//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject
{
    NSString *_applicationBundleIdentifier;
    NSDictionary *_entitlements;
}

+ (_Bool)isInternalProcess;
+ (_Bool)isDashboardAppProcess;
+ (id)allowedEntitlements;
+ (id)entitlementsWithSecTask:(struct __SecTask *)arg1 overrides:(id)arg2 error:(id *)arg3;
+ (id)entitlementsWithConnection:(id)arg1 error:(id *)arg2;
+ (id)entitlementsForCurrentTaskWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (void).cxx_destruct;
- (id)stringValueForEntitlement:(id)arg1 error:(id *)arg2;
- (_Bool)boolValueForEntitlement:(id)arg1 error:(id *)arg2;
- (_Bool)isInDevelopmentEnvironment;
- (_Bool)hasEntitlement:(id)arg1;
- (_Bool)isRegisterDashboardEnabled;
- (_Bool)isDashboardAPIEnabled;
- (_Bool)isInternal;
- (_Bool)isPublicClassKitAPIEnabled;
@property(readonly, nonatomic) NSString *classKitEnvironment;
- (id)initWithEntitlements:(id)arg1;
- (id)init;

@end

