//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import "INGetRestaurantGuestIntentResponseExport.h"

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences, NSString;

@interface INGetRestaurantGuestIntentResponse : INIntentResponse <INGetRestaurantGuestIntentResponseExport>
{
    INRestaurantGuest *_guest;
    INRestaurantGuestDisplayPreferences *_guestDisplayPreferences;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences; // @synthesize guestDisplayPreferences=_guestDisplayPreferences;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

