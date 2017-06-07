//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDirectoryEnumerator.h>

@class NSArray, NSFileAttributes, NSString;

__attribute__((visibility("hidden")))
@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator
{
    NSString *path;
    NSArray *contents;
    unsigned long long idx;
    NSString *prepend;
    NSAllDescendantPathsEnumerator *under;
    NSFileAttributes *directoryAttributes;
    NSString *pathToLastReportedItem;
    unsigned long long depth;
    _Bool cross;
    char _padding[3];
}

+ (id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(_Bool)arg4 depth:(unsigned long long)arg5;
- (void)dealloc;
- (void)skipDescendants;
- (void)skipDescendents;
- (id)_under;
- (unsigned long long)level;
- (id)currentSubdirectoryAttributes;
- (id)directoryAttributes;
- (id)fileAttributes;
- (id)nextObject;

@end

