//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABSRecord.h"

@class ABSAddressBook, ABSSource, CNMutableContact, NSMutableSet, NSString;

@interface ABSPerson : NSObject <ABSRecord>
{
    ABSAddressBook *_addressBook;
    ABSSource *_source;
    CNMutableContact *_cnImpl;
    NSString *_revertedRecordIdentifier;
    NSMutableSet *_nonNilSetProperties;
}

+ (id)propertyKeyForPropertyID:(int)arg1;
+ (id)createPeopleInSource:(id)arg1 withVCardRepresentation:(id)arg2;
+ (id)vCardRepresentationForPeople:(id)arg1;
+ (unsigned int)sortOrdering;
+ (id)copyCompositeNameDelimiterForPerson:(id)arg1;
+ (void)setCompositeNameFormat:(unsigned int)arg1;
+ (unsigned int)compositeNameFormatForPerson:(id)arg1;
+ (unsigned int)compositeNameFormat;
+ (id)nameForProperty:(int)arg1;
+ (id)localizedNameForProperty:(int)arg1;
+ (unsigned int)typeForProperty:(int)arg1;
+ (id)defaultKeysToFetch;
@property(retain, nonatomic) NSMutableSet *nonNilSetProperties; // @synthesize nonNilSetProperties=_nonNilSetProperties;
@property(retain, nonatomic) NSString *revertedRecordIdentifier; // @synthesize revertedRecordIdentifier=_revertedRecordIdentifier;
@property(retain, nonatomic) CNMutableContact *cnImpl; // @synthesize cnImpl=_cnImpl;
@property(nonatomic) __weak ABSSource *source; // @synthesize source=_source;
@property(nonatomic) __weak ABSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (void)replaceRecordStorageWithCNObject:(id)arg1;
- (long long)comparePersonByName:(id)arg1 sortOrdering:(unsigned int)arg2;
- (_Bool)removeImageDataWithError:(id *)arg1;
- (_Bool)hasImageData;
- (id)copyImageDataWithFormat:(int)arg1;
- (id)copyImageData;
- (_Bool)setImageData:(id)arg1 withError:(id *)arg2;
- (id)copyCompositeNameDelimiter;
- (unsigned int)compositeNameFormat;
- (id)linkedPeople;
- (_Bool)removeProperty:(int)arg1 withError:(id *)arg2;
- (_Bool)setValue:(void *)arg1 forProperty:(int)arg2 withError:(struct __CFError **)arg3;
- (const void *)copyValueForProperty:(int)arg1;
@property(readonly, nonatomic) NSString *compositeName;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) NSString *CNIdentifierString;
@property(readonly, nonatomic) int id;
- (_Bool)completeCNImplIfNeededWithKeysToFetch:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)initWithMutableContact:(id)arg1 source:(id)arg2;
- (id)initWithSource:(id)arg1;
- (id)initWithMutableContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

