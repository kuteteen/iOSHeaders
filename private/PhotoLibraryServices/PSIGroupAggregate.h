//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface PSIGroupAggregate : NSObject
{
    NSArray *_searchTokens;
    NSMutableArray *_rangesMatchingTokens;
    NSMutableArray *_groups;
    NSMutableArray *_assetIdArrays;
    NSMutableArray *_primaryAssetIdArrays;
    NSMutableArray *_secondaryAssetIdArrays;
    NSMutableArray *_aggregatedGroupIds;
}

+ (_Bool)_prefer:(id)arg1 over:(id)arg2;
+ (void)postProcessGroupResults:(id)arg1;
+ (_Bool)_canDedupeGroupResult:(id)arg1 withGroupResult:(id)arg2;
@property(readonly, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
- (id)newGroupResult;
- (struct __CFArray *)_newSortedGroupIds;
- (_Bool)_verifySortedGroupIdsUnique;
- (void)pop;
- (_Bool)pushGroup:(id)arg1 secondaryPairedGroup:(id)arg2;
- (struct _NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 excludingRanges:(id)arg3;
- (void)dealloc;
- (id)initWithSearchTokens:(id)arg1;

@end

