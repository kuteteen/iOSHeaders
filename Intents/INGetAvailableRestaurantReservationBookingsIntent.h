//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INGetAvailableRestaurantReservationBookingsIntentExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INRestaurant, NSDate, NSDateComponents, NSNumber, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying>
{
    INRestaurant *_restaurant;
    unsigned long long _partySize;
    NSDateComponents *_preferredBookingDateComponents;
    NSNumber *_maximumNumberOfResults;
    NSDate *_earliestBookingDateForResults;
    NSDate *_latestBookingDateForResults;
    NSDate *_preferredBookingDate;
}

+ (id)intentDescription;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *preferredBookingDate; // @synthesize preferredBookingDate=_preferredBookingDate;
@property(copy, nonatomic) NSDate *latestBookingDateForResults; // @synthesize latestBookingDateForResults=_latestBookingDateForResults;
@property(copy, nonatomic) NSDate *earliestBookingDateForResults; // @synthesize earliestBookingDateForResults=_earliestBookingDateForResults;
@property(copy, nonatomic) NSNumber *maximumNumberOfResults; // @synthesize maximumNumberOfResults=_maximumNumberOfResults;
@property(copy, nonatomic) NSDateComponents *preferredBookingDateComponents; // @synthesize preferredBookingDateComponents=_preferredBookingDateComponents;
@property(nonatomic) unsigned long long partySize; // @synthesize partySize=_partySize;
@property(copy, nonatomic) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 partySize:(unsigned long long)arg2 preferredBookingDateComponents:(id)arg3 maximumNumberOfResults:(id)arg4 earliestBookingDateForResults:(id)arg5 latestBookingDateForResults:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

