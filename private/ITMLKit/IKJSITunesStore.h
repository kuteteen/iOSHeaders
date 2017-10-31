//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSITunesStore.h"
#import "NSObject.h"
#import "_IKJSITunesStore.h"
#import "_IKJSITunesStoreProxy.h"

@class IKURLBagCache, NSDictionary, NSNumber, NSString, SSMetricsController;

@interface IKJSITunesStore : IKJSObject <NSObject, IKJSITunesStore, _IKJSITunesStoreProxy, _IKJSITunesStore>
{
    NSNumber *_lastAccountDSID;
    NSDictionary *_lastKnownStatusDictionary;
    SSMetricsController *_metricsController;
    NSString *_storeFrontSuffix;
    id _ssAccountStoreChangedToken;
    id _subscriptionStatusDidChangeToken;
    id _urlBagCacheUpdateToken;
    NSString *_cookieURL;
    IKURLBagCache *_bagCache;
}

+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (void)setITunesStoreHeaders:(id)arg1;
@property(retain, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property(retain, nonatomic) NSString *cookieURL; // @synthesize cookieURL=_cookieURL;
- (void).cxx_destruct;
- (void)_updateWithBag:(id)arg1;
- (void)invalidateBag;
- (id)getBag;
- (void)_subscriptionStatusDidChanged:(id)arg1;
- (id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(_Bool)arg2;
- (void)_accountStoreChanged;
- (void)signOut;
- (void)authenticate:(id)arg1:(id)arg2;
@property(readonly, nonatomic) NSDictionary *accountInfo;
@property(readonly, nonatomic, getter=isManagedAppleID) _Bool managedAppleID;
@property(readonly, nonatomic) NSString *DSID;
- (void)updateServiceEligibility:(id)arg1;
- (void)evaluateScripts:(id)arg1:(id)arg2;
- (void)loadStoreContent:(id)arg1:(id)arg2;
- (void)clearCookies;
@property(retain, nonatomic) id cookie;
- (void)flushUnreportedEvents;
- (void)recordEvent:(id)arg1:(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (void)getServiceEligibility:(id)arg1:(id)arg2;
- (id)eligibilityForService:(id)arg1;
@property(retain, nonatomic) NSString *storefront;
@property(readonly, nonatomic) NSString *networkConnectionType;
@property(readonly, nonatomic) NSString *userAgent;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (id)asPrivateIKJSITunesStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

