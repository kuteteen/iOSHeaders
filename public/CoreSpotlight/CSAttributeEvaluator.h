//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CSAttributeEvaluator : NSObject
{
    _Bool _matchOncePerTerm;
    _Bool _fuzzyMatching;
    unsigned long long _attributeTokenCount;
    unsigned long long _matcherCount;
    const void **_matchers;
    unsigned long long _queryTermCount;
    void *_tokenizer;
    NSMutableArray *_tokenizedQueryTerms;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableArray *tokenizedQueryTerms; // @synthesize tokenizedQueryTerms=_tokenizedQueryTerms;
@property(nonatomic) void *tokenizer; // @synthesize tokenizer=_tokenizer;
@property(nonatomic) unsigned long long queryTermCount; // @synthesize queryTermCount=_queryTermCount;
@property(nonatomic) const void **matchers; // @synthesize matchers=_matchers;
@property(nonatomic) unsigned long long matcherCount; // @synthesize matcherCount=_matcherCount;
@property(nonatomic) _Bool fuzzyMatching; // @synthesize fuzzyMatching=_fuzzyMatching;
@property(nonatomic) unsigned long long attributeTokenCount; // @synthesize attributeTokenCount=_attributeTokenCount;
@property(nonatomic) _Bool matchOncePerTerm; // @synthesize matchOncePerTerm=_matchOncePerTerm;
- (void).cxx_destruct;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(_Bool)arg2 withFuzzyHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *queryTerms;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 language:(id)arg2 fuzzyThreshold:(unsigned char)arg3 options:(unsigned long long)arg4;

@end

