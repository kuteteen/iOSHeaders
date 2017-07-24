//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSVCookieStorage;
@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject
{
    SSVCookieStorage *_ssvCookieStorage;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCookieStore;
- (void).cxx_destruct;
- (void)removeAllCookies;
- (void)saveGlobalAccountCookies:(id)arg1 forURL:(id)arg2;
- (void)saveCookies:(id)arg1 forURL:(id)arg2 userIdentifier:(id)arg3;
- (void)saveCookies:(id)arg1 forURL:(id)arg2;
- (id)getCookiesHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)getGlobalAccountCookiesForURL:(id)arg1;
- (id)getCookie:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesForUserIdentifier:(id)arg1;
- (id)getCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesForURL:(id)arg1;
- (id)init;

@end
