//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerItem, AVQueuePlayer, AVWeakReference, NSError, NSMutableArray;
@protocol AVCallbackCancellation, OS_dispatch_queue;

@interface AVPlayerLooperInternal : NSObject
{
    AVQueuePlayer *loopingPlayer;
    AVPlayerItem *loopingItem;
    NSMutableArray *loopingItemCopies;
    CDStruct_e83c9415 loopRange;
    long long loopCount;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long playerOriginalActionAtItemEnd;
    CDStruct_1b6d18a9 forwardPlaybackStartTime;
    AVPlayerItem *lastEnqueuedLoopingItem;
    _Bool waitingForLastLoopingCopyToFinish;
    long long status;
    NSError *error;
    id <AVCallbackCancellation> playerCurrentItemKVOInvoker;
    NSMutableArray *loopingItemStatusKVOInvokers;
    AVWeakReference *weakReference;
    _Bool listeningForItemFailedToPlayToEndTime;
}

@end

