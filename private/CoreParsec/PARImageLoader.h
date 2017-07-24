//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURLSession, PARSearchClient;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PARImageLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_pendingQueue;
    NSMutableDictionary *_pendingRequests;
    NSURLSession *_urlSession;
    PARSearchClient *_client;
    NSObject<OS_dispatch_queue> *_mapQueue;
    NSDictionary *_imageMap;
}

- (void).cxx_destruct;
- (id)_fetchImageData:(id)arg1 timeoutInterval:(double)arg2;
- (id)fetchImageData:(id)arg1 timeoutInterval:(double)arg2;
- (id)initWithClient:(id)arg1;

@end
