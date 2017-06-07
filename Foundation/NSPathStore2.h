//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)arg1;
+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)stringByResolvingSymlinksInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;
- (id)stringByStandardizingPath;
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;
- (id)stringByExpandingTildeInPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingPathExtension;
- (id)pathExtension;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)lastPathComponent;
- (_Bool)isAbsolutePath;
- (id)pathComponents;
- (_Bool)isEqualToString:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;

@end

