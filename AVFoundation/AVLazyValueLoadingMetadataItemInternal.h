//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVMetadataItemValueRequest, NSError, NSMutableArray, NSString;
@protocol NSObject><NSCopying, OS_dispatch_queue;

@interface AVLazyValueLoadingMetadataItemInternal : NSObject
{
    id <NSObject><NSCopying> value;
    NSString *dataType;
    AVMetadataItemValueRequest *valueRequest;
    CDUnknownBlockType valueLoadingHandler;
    long long valueStatus;
    NSError *valueLoadingError;
    NSMutableArray *loadingCompletionHandlers;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end

