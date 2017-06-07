//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject
{
    NSHTTPCookieStorageInternal *_internal;
}

+ (id)_csfi:(id)arg1;
+ (id)_csff:(id)arg1;
+ (id)sharedCookieStorageForGroupContainerIdentifier:(id)arg1;
+ (id)sharedHTTPCookieStorage;
+ (void)_setSharedHTTPCookieStorage:(id)arg1;
+ (id)_sharedCookieStorageLock;
+ (id)_groupContainerCookieStorages;
+ (id)_groupContainerStoragesLock;
- (void)_testingOfStoringOfCookie:(id)arg1;
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getCookieStoragePartitionsCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getCookiesForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeCookies:(id)arg1 forTask:(id)arg2;
- (id)sortedCookiesUsingDescriptors:(id)arg1;
- (id)description;
@property unsigned long long cookieAcceptPolicy;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;
- (id)cookiesForURL:(id)arg1;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (void)removeCookiesSinceDate:(id)arg1;
- (void)deleteCookie:(id)arg1;
- (void)setCookie:(id)arg1;
@property(readonly, copy) NSArray *cookies;
- (struct OpaqueCFHTTPCookieStorage *)_CFHTTPCookieStorage;
- (void)dealloc;
- (id)init;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)_saveCookies;
- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;
- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;

@end

