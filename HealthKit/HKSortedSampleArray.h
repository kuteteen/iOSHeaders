//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSFastEnumeration-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSSortDescriptor;

@interface HKSortedSampleArray : NSObject <NSFastEnumeration>
{
    NSMutableArray *_samples;
    NSMutableDictionary *_samplesByUUID;
    NSSortDescriptor *_sortDescriptor;
}

@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
- (void).cxx_destruct;
- (id)description;
- (id)reverseSampleEnumerator;
- (id)sampleEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllSamples;
- (_Bool)removeSamplesWithUUIDs:(id)arg1;
- (_Bool)removeSampleAtIndex:(long long)arg1;
- (_Bool)removeSample:(id)arg1;
- (long long)count;
- (id)allSamples;
- (id)sampleAtIndex:(long long)arg1;
- (_Bool)insertSamples:(id)arg1;
- (void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1;
- (id)init;

@end

