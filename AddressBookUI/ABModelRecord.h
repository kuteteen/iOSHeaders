//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface ABModelRecord : NSObject
{
    int _recordID;
    struct __CFString *_sortKey;
    long long _highlightIndex;
    _Bool _isGroup;
    NSArray *_namePieces;
}

- (struct __CFString *)sortKey;
- (id)namePieces;
- (_Bool)isGroup;
- (long long)highlightIndex;
- (int)recordID;
- (void)dealloc;
- (id)initWithRecordID:(int)arg1 highlightIndex:(long long)arg2 group:(_Bool)arg3 namePieces:(id)arg4 sortKey:(struct __CFString *)arg5;

@end

