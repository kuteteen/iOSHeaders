//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/__NSCFType.h>

__attribute__((visibility("hidden")))
@interface __NSCFString : __NSCFType
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)setString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (_Bool)_isCString;
- (Class)classForCoder;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (_Bool)hasSuffix:(id)arg1;
- (_Bool)hasPrefix:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (_Bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)cStringLength;
- (const char *)UTF8String;
- (const char *)cString;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const unsigned short *)_fastCharacterContents;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (_Bool)isNSString__;

@end

