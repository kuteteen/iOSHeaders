//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate;

@interface PHMoment : PHAssetCollection
{
    NSData *_approximateLocationData;
    NSData *_reverseLocationData;
    _Bool _reverseLocationDataIsValid;
    _Bool _reverseLocationDataContainsLocation;
    short _generationType;
    NSDate *_representativeDate;
    NSDate *_modificationDate;
}

+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property(readonly, nonatomic) short generationType; // @synthesize generationType=_generationType;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *representativeDate; // @synthesize representativeDate=_representativeDate;
- (void).cxx_destruct;
- (id)description;
- (_Bool)collectionHasFixedOrder;
- (_Bool)hasLocationInfo;
- (_Bool)hasLocalizedTitle;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (void)_decodeTitlesIfNeeded;
- (id)approximateLocation;
- (_Bool)canShowAvalancheStacks;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (_Bool)isMeaningful;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end

