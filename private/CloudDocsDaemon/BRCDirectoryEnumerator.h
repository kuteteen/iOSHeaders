//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCDirectoryEnumerator : NSObject
{
    NSMutableArray *_stack;
    _Bool _recursive;
    int *_err;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(_Bool)arg2 error:(int *)arg3;

@end
