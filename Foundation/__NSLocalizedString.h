//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString
{
    NSMutableString *original;
    NSDictionary *config;
}

- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)setString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const unsigned short *)_fastCharacterContents;
- (_Bool)isEqualToString:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (void)dealloc;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)baseString;
- (id)formatConfiguration;
- (id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2;

@end

