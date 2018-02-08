//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"
#import "HDDiagnosticObject.h"

@class BBDataProviderConnection, BBDataProviderProxy, HDProfile, NSDate, NSHashTable, NSObject<OS_dispatch_queue>, NSString, UNUserNotificationCenter;

@interface HDNotificationManager : NSObject <BBRemoteDataProvider, HDDiagnosticObject>
{
    HDProfile *_profile;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    BBDataProviderConnection *_dataProviderConnection;
    UNUserNotificationCenter *_userNotificationCenter;
    NSDate *_lastNotificationDate;
    BBDataProviderProxy *_providerProxy;
}

@property(retain, nonatomic) BBDataProviderProxy *providerProxy; // @synthesize providerProxy=_providerProxy;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (void)_postBadgesDidUpdateNotification;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)_resourceQueue_updateApplicationBadge;
- (id)_resourceQueue_coaleseDomainBadges;
- (_Bool)_resourceQueue_setBadge:(id)arg1 domain:(long long)arg2 error:(out id *)arg3;
- (id)_resourceQueue_badgeForDomain:(long long)arg1 error:(out id *)arg2;
- (id)_resourceQueue_badgeForDomain:(long long)arg1;
- (id)_aggregateBadge;
- (id)_badgeForDomain:(long long)arg1 error:(out id *)arg2;
- (void)_resourceQueue_notifyObserversWithBadge:(id)arg1 domain:(long long)arg2;
- (void)_resourceQueue_notifyObserversWithNotification:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (void)addNotificationObserver:(id)arg1;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(out id *)arg3;
- (void)badgeForDomain:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupBulletinBoardSettings;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

