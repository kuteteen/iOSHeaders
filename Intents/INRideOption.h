//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideOptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    NSDate *_estimatedPickupDate;
    INPriceRange *_priceRange;
    NSNumber *_usesMeteredFare;
    NSString *_disclaimerMessage;
    NSArray *_availablePartySizeOptions;
    NSString *_availablePartySizeOptionsSelectionPrompt;
    NSString *_specialPricing;
    INImage *_specialPricingBadgeImage;
    NSArray *_fareLineItems;
    NSUserActivity *_userActivityForBookingInApplication;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUserActivity *userActivityForBookingInApplication; // @synthesize userActivityForBookingInApplication=_userActivityForBookingInApplication;
@property(copy, nonatomic) NSArray *fareLineItems; // @synthesize fareLineItems=_fareLineItems;
@property(copy, nonatomic) INImage *specialPricingBadgeImage; // @synthesize specialPricingBadgeImage=_specialPricingBadgeImage;
@property(copy, nonatomic) NSString *specialPricing; // @synthesize specialPricing=_specialPricing;
@property(copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt; // @synthesize availablePartySizeOptionsSelectionPrompt=_availablePartySizeOptionsSelectionPrompt;
@property(copy, nonatomic) NSArray *availablePartySizeOptions; // @synthesize availablePartySizeOptions=_availablePartySizeOptions;
@property(copy, nonatomic) NSString *disclaimerMessage; // @synthesize disclaimerMessage=_disclaimerMessage;
@property(copy, nonatomic) NSNumber *usesMeteredFare; // @synthesize usesMeteredFare=_usesMeteredFare;
@property(copy, nonatomic) INPriceRange *priceRange; // @synthesize priceRange=_priceRange;
@property(copy, nonatomic) NSDate *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 estimatedPickupDate:(id)arg2;
- (id)cacheableObjects;
@property(copy, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

