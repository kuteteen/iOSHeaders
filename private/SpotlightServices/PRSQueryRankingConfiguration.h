//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

@interface PRSQueryRankingConfiguration : NSObject
{
    _Bool _allowAnonymousDataCollection;
    NSSet *_requiredAttributes;
    NSArray *_rankingQueries;
    unsigned long long _strongRankingQueryCount;
    unsigned long long _dominantRankingQueryCount;
    unsigned long long _dominatedRankingQueryCount;
    unsigned long long _rankingBitCount;
    // Error parsing type: T, name: _fuzzyMatchMask
    // Error parsing type: T, name: _fuzzyMatchCheck
}

+ (void)updateMailVIP:(id)arg1 phoneFavorites:(id)arg2 meEmailAddresses:(id)arg3;
// Error parsing type for property fuzzyMatchCheck:
// Property attributes: TT,V_fuzzyMatchCheck

// Error parsing type for property fuzzyMatchMask:
// Property attributes: TT,V_fuzzyMatchMask

@property _Bool allowAnonymousDataCollection; // @synthesize allowAnonymousDataCollection=_allowAnonymousDataCollection;
@property unsigned long long rankingBitCount; // @synthesize rankingBitCount=_rankingBitCount;
@property unsigned long long dominatedRankingQueryCount; // @synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount;
@property unsigned long long dominantRankingQueryCount; // @synthesize dominantRankingQueryCount=_dominantRankingQueryCount;
@property unsigned long long strongRankingQueryCount; // @synthesize strongRankingQueryCount=_strongRankingQueryCount;
@property(retain) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property(retain) NSSet *requiredAttributes; // @synthesize requiredAttributes=_requiredAttributes;
- (void).cxx_destruct;

@end

