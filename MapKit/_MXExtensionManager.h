//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _MXExtensionProvider;
@protocol _MXExtensionLookupPolicy, _MXExtensionManagerDelegate;

@interface _MXExtensionManager : NSObject
{
    id <_MXExtensionLookupPolicy> _lookupPolicy;
    id _matchingContext;
    id <_MXExtensionManagerDelegate> _delegate;
    _MXExtensionProvider *_extensionProvider;
}

+ (id)_lookupPolicyWithBlock:(CDUnknownBlockType)arg1;
+ (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2;
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)arg1;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)arg1;
+ (id)lookupPolicyForExtensionWithCapability:(id)arg1;
+ (id)_lookupPolicyWithExtensionPointNames:(id)arg1;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyForUIExtension;
+ (id)_extensionsWithLookupPolicy:(id)arg1;
+ (id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
+ (id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2;
+ (id)lookupPolicyForRideSharingExtensions;
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+ (id)_maps_ridesharingIntentClassesForUIInteraction;
+ (id)_maps_ridesharingIntentClassesForNonUIHandling;
+ (id)lookupPolicyForRestaurantQueueingExtensions;
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)restaurantQueueingIntentClassNames;
+ (id)lookupPolicyForRestaurantReservationExtensions;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)restaurantReservationIntentClassNames;
@property(retain, nonatomic) _MXExtensionProvider *extensionProvider; // @synthesize extensionProvider=_extensionProvider;
@property(nonatomic) __weak id <_MXExtensionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property(readonly, nonatomic) id <_MXExtensionLookupPolicy> lookupPolicy; // @synthesize lookupPolicy=_lookupPolicy;
- (void).cxx_destruct;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2;

@end

