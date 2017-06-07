//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WebBookmarkCollection, WebBookmarkListQuery;

@interface WebBookmarkList : NSObject
{
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    WebBookmarkListQuery *_query;
    WebBookmarkCollection *_collection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int folderID;
- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (id)bookmarkArray;
- (unsigned int)bookmarkCount;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)initWithQuery:(id)arg1 skipOffset:(unsigned int)arg2 collection:(id)arg3;

@end
