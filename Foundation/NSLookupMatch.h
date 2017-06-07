//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTextCheckingResult;

@interface NSLookupMatch : NSObject
{
    unsigned long long _matchType;
    struct _NSRange _range;
    double _score;
    NSTextCheckingResult *_dataDetectorResult;
    NSString *_languageIdentifier;
}

+ (id)matchesInString:(id)arg1 types:(unsigned long long)arg2 range:(struct _NSRange)arg3;
@property(retain) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
@property(retain) NSTextCheckingResult *dataDetectorResult; // @synthesize dataDetectorResult=_dataDetectorResult;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) struct _NSRange range; // @synthesize range=_range;
@property(readonly) unsigned long long matchType; // @synthesize matchType=_matchType;
- (id)description;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 range:(struct _NSRange)arg2 score:(double)arg3;

@end

