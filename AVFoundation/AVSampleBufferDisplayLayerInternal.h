//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVMediaDataRequester, AVWeakReference, CALayer, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AVSampleBufferDisplayLayerInternal : NSObject
{
    CALayer *contentLayer;
    struct OpaqueFigVideoQueue *videoQueue;
    _Bool outputObscured;
    long long status;
    NSError *error;
    NSString *videoGravity;
    struct CGSize presentationSize;
    struct CGRect bounds;
    _Bool isRequestingMediaData;
    AVMediaDataRequester *mediaDataRequester;
    _Bool aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> *serialQueue;
    AVWeakReference *weakReferenceToSelf;
    AVWeakReference *weakReferenceToSynchronizer;
    _Bool addedToSynchronizer;
    _Bool controlTimebaseSetByUserIsInUse;
    struct OpaqueCMTimebase *controlTimebaseSetByUser;
    struct OpaqueCMTimebase *readOnlyVideoQueueTimebase;
    struct OpaqueCMTimebase *readOnlyRenderingTimebase;
    NSObject<OS_dispatch_queue> *flushCallbackListQueue;
    NSObject<OS_dispatch_queue> *flushCallbackQueue;
    NSMutableArray *flushCallbacks;
}

@end

