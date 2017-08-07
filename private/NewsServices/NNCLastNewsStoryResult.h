//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NNCLastNewsStoryResult : NSObject
{
    NSString *_headlineIdentifier;
    NSString *_headlineTitle;
    NSString *_sectionName;
    NSString *_sectionIdentifier;
    NSString *_sourceName;
    NSString *_sourceIdentifier;
    NSString *_excerpt;
    unsigned long long _headlineIndex;
    unsigned long long _totalHeadlineCount;
    long long _family;
}

@property(nonatomic) long long family; // @synthesize family=_family;
@property(nonatomic) unsigned long long totalHeadlineCount; // @synthesize totalHeadlineCount=_totalHeadlineCount;
@property(nonatomic) unsigned long long headlineIndex; // @synthesize headlineIndex=_headlineIndex;
@property(copy, nonatomic) NSString *excerpt; // @synthesize excerpt=_excerpt;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(copy, nonatomic) NSString *headlineTitle; // @synthesize headlineTitle=_headlineTitle;
@property(copy, nonatomic) NSString *headlineIdentifier; // @synthesize headlineIdentifier=_headlineIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

