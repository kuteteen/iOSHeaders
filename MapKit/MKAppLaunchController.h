//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, SSLookupRequest;

@interface MKAppLaunchController : NSObject
{
    SSLookupRequest *_request;
    NSString *_webURLString;
    NSURL *webURL;
}

+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 mapItem:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 mapItem:(id)arg3;
+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedController;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL;
@property(retain, nonatomic) SSLookupRequest *storeRequest; // @synthesize storeRequest=_request;
- (void).cxx_destruct;
- (void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

