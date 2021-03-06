//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet;

@interface PSITokenizer : NSObject
{
    NSCharacterSet *_excludedSingleCharacterSet;
    void *_tokenizer;
    struct __CFStringTokenizer *_nameTokenizer;
}

- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id *)arg3;
- (void)tokenizePersonName:(id)arg1 tokenOutput:(struct tokenOutput_t *)arg2;
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t *)arg3;
- (id)normalizeString:(id)arg1 includeWildcard:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

