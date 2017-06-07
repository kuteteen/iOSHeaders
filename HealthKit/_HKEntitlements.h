//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject
{
    NSString *_applicationIdentifier;
    NSDictionary *_entitlementValues;
}

+ (id)_allowedEntitlementsSet;
+ (id)entitlementsWithApplicationIdentifier:(id)arg1;
+ (id)entitlementsWithDictionary:(id)arg1;
+ (id)_entitlementsWithSecTask:(struct __SecTask *)arg1 valueOverrides:(id)arg2 error:(id *)arg3;
+ (id)entitlementsWithConnection:(id)arg1 error:(id *)arg2;
+ (void)_setEntitlementsForCurrentTask:(id)arg1;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)entitlementsForCurrentTaskWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *entitlementValues; // @synthesize entitlementValues=_entitlementValues;
- (void).cxx_destruct;
- (id)_typesFromIdentifierArray:(id)arg1;
- (id)typesForReadAuthorizationOverride;
- (id)typesForWriteAuthorizationOverride;
- (id)valueForEntitlement:(id)arg1;
- (id)stringForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)applicationIdentifier;
- (id)_initWithEntitlementValues:(id)arg1;
- (id)init;

@end

