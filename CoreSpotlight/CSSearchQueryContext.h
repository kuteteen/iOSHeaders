//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _grouped;
    _Bool _internal;
    _Bool _lowPriority;
    NSString *_clientBundleID;
    NSArray *_fetchAttributes;
    NSArray *_protectionClasses;
    NSArray *_bundleIDs;
    NSArray *_rankingQueries;
    NSArray *_preferredLanguages;
    NSString *_keyboardLanguage;
    NSArray *_markedTextArray;
    NSArray *_disableBundles;
    NSString *_filterQuery;
    long long _strongRankingQueryCount;
    long long _maxCount;
    long long _queryID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool lowPriority; // @synthesize lowPriority=_lowPriority;
@property(nonatomic) _Bool internal; // @synthesize internal=_internal;
@property(nonatomic) _Bool grouped; // @synthesize grouped=_grouped;
@property(nonatomic) long long queryID; // @synthesize queryID=_queryID;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long strongRankingQueryCount; // @synthesize strongRankingQueryCount=_strongRankingQueryCount;
@property(retain, nonatomic) NSString *filterQuery; // @synthesize filterQuery=_filterQuery;
@property(retain, nonatomic) NSArray *disableBundles; // @synthesize disableBundles=_disableBundles;
@property(retain, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(retain, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(retain, nonatomic) NSArray *protectionClasses; // @synthesize protectionClasses=_protectionClasses;
@property(retain, nonatomic) NSArray *fetchAttributes; // @synthesize fetchAttributes=_fetchAttributes;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSDictionary *options;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

