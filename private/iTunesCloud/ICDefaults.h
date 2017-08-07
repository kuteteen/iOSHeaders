//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSUserDefaults;

@interface ICDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)standardDefaults;
- (void).cxx_destruct;
- (void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2;
- (_Bool)_shouldSpoofIPhoneRequestProperties;
@property(readonly, nonatomic) _Bool shouldForceiPhoneBehaviors;
@property(readonly, copy, nonatomic) NSString *productPlatformOverride;
@property(readonly, copy, nonatomic) NSString *productVersionOverride;
@property(readonly, copy, nonatomic) NSString *hardwarePlatformOverride;
@property(readonly, copy, nonatomic) NSNumber *fairPlayDeviceTypeOverride;
@property(readonly, copy, nonatomic) NSString *deviceModelOverride;
@property(readonly, copy, nonatomic) NSNumber *deviceClassOverride;
@property(nonatomic) _Bool ignoreExtendedCertificateValidation;
@property(copy, nonatomic) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property(copy, nonatomic) NSDictionary *pushNotificationState;
@property(nonatomic, getter=isCachedSubscriptionStatusValid) _Bool cachedSubscriptionStatusValid;
@property(copy, nonatomic) NSDictionary *cachedSubscriptionStatus;
@property(copy, nonatomic) NSString *defaultStoreFront;
@property(copy, nonatomic) NSString *cloudMediaLibraryUID;
- (id)init;

@end

