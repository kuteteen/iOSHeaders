//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItem.h>

#import <MediaPlayer/MPCacheableConcreteMediaEntity-Protocol.h>
#import <MediaPlayer/NSCoding-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying, MPCacheableConcreteMediaEntity>
{
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}

+ (_Bool)supportsSecureCoding;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;
- (_Bool)didSkipWithPlayedToTime:(double)arg1;
- (double)nominalHasBeenPlayedThreshold;
- (void)markNominalAmountHasBeenPlayed;
- (void)reallyIncrementPlayCount;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valuesForProperties:(id)arg1;
- (id)cachedValueForProperty:(id)arg1 isCached:(_Bool *)arg2;
- (id)valueForProperty:(id)arg1;
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(_Bool *)arg2;
- (unsigned long long)persistentID;
- (id)mediaLibrary;
- (_Bool)existsInLibrary;
- (Class)itemArrayCoderPIDDataCodingClass;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)invalidateCachedProperties;
@property(readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;
- (void)dealloc;
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)init;

@end

