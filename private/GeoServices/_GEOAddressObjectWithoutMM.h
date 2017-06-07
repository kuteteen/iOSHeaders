//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOAddressObjectProtocol-Protocol.h>

@class GEOPDAddress, NSString;

__attribute__((visibility("hidden")))
@interface _GEOAddressObjectWithoutMM : NSObject <GEOAddressObjectProtocol>
{
    GEOPDAddress *_placeDataAddress;
    NSString *_language;
    NSString *_country;
    NSString *_phoneticLocale;
    unsigned long long _hash;
}

+ (id)libraryVersion;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)rawBytes;
- (id)phoneticLocaleIdentifier;
@property(readonly, nonatomic) int knownAccuracy;
@property(readonly, nonatomic) _Bool hasKnownAccuracy;
- (id)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (id)parkingDisplayName;
- (id)weatherDisplayName;
- (id)cityDisplayNameWithFallback:(_Bool)arg1;
- (id)shortAddress;
- (id)fullAddressWithMultiline:(_Bool)arg1;
- (id)phoneticAddress;
- (id)phoneticName;
- (id)spokenStructuredAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenAddress;
- (id)spokenName;
- (id)addressDictionary;
- (id)address;
- (id)name;
- (void)dealloc;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
