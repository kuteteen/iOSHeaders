//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSMutableCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_street;
    NSString *_subLocality;
    NSString *_city;
    NSString *_subAdministrativeArea;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_ISOCountryCode;
    NSString *_formattedAddress;
}

+ (_Bool)supportsSecureCoding;
+ (id)postalAddressWithDictionaryRepresentation:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
@property(copy, nonatomic) NSString *formattedAddress; // @synthesize formattedAddress=_formattedAddress;
@property(copy, nonatomic) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
- (_Bool)isValid:(id *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPostalAddress:(id)arg1;
- (id)dictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

