//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/NSURLSessionDataDelegate-Protocol.h>
#import <MapKit/NSURLSessionDelegate-Protocol.h>
#import <MapKit/NSURLSessionTaskDelegate-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession;

@interface MKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSCache *_iconCache;
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
}

+ (id)sharedImageManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)cancelLoadAppImageAtURL:(id)arg1;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearImageCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

