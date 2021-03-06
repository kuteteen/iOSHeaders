//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSSet, NSString;

@interface SGMeContact : NSObject
{
    CNContact *_meContact;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_formattedName;
    NSSet *_emailAddresses;
    NSSet *_phoneNumbers;
    NSSet *_postalAddresses;
}

+ (id)keysToFetch;
@property(readonly, nonatomic) NSSet *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(readonly, nonatomic) NSSet *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, nonatomic) NSString *formattedName; // @synthesize formattedName=_formattedName;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(readonly, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
- (void).cxx_destruct;
- (_Bool)isSameAsOrUnifiedWithContact:(id)arg1;
- (id)initWithContact:(id)arg1;

@end

