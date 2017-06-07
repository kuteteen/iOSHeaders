//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INRestaurantReservationBooking.h>

#import <Intents/INRestaurantReservationUserBookingExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INRestaurantGuest, INRestaurantOffer, NSDate, NSString;

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <INRestaurantReservationUserBookingExport, NSCopying>
{
    INRestaurantGuest *_guest;
    NSString *_advisementText;
    INRestaurantOffer *_selectedOffer;
    NSString *_guestProvidedSpecialRequestText;
    unsigned long long _status;
    NSDate *_dateStatusModified;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *dateStatusModified; // @synthesize dateStatusModified=_dateStatusModified;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *guestProvidedSpecialRequestText; // @synthesize guestProvidedSpecialRequestText=_guestProvidedSpecialRequestText;
@property(copy, nonatomic) INRestaurantOffer *selectedOffer; // @synthesize selectedOffer=_selectedOffer;
@property(copy, nonatomic) NSString *advisementText; // @synthesize advisementText=_advisementText;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 status:(unsigned long long)arg6 dateStatusModified:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

