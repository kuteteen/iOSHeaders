//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSMutableArray, NSString;
@protocol NSObject><NSCopying, OS_dispatch_queue;

@interface AVChapterMetadataItemInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigAsset *figAsset;
    long long chapterGroupIndex;
    long long chapterIndex;
    NSString *chapterType;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    NSString *chapterDataType;
    id <NSObject><NSCopying> value;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    long long valueStatus;
    int valueErrorCode;
    NSMutableArray *completions;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end

