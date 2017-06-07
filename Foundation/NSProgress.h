//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressPublisher-Protocol.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface NSProgress : NSObject <NSProgressPublisher>
{
    NSProgress *_parent;
    long long _reserved4;
    id _values;
    CDUnknownBlockType _resumingHandler;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _pausingHandler;
    CDUnknownBlockType _prioritizationHandler;
    unsigned long long _flags;
    id _userInfoProxy;
    NSString *_publisherID;
    id _reserved5;
    long long _reserved6;
    long long _reserved7;
    long long _reserved8;
    NSMutableDictionary *_acknowledgementHandlersByLowercaseBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    NSLock *_lock;
    NSMutableSet *_children;
}

+ (id)_serverConnection;
+ (id)_registrarInterface;
+ (id)_subscriberInterface;
+ (id)_publisherInterface;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(CDUnknownBlockType)arg2;
+ (void)_removeSubscriber:(id)arg1;
+ (void)removeSubscriber:(id)arg1;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(CDUnknownBlockType)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(CDUnknownBlockType)arg2;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1 parent:(id)arg2 pendingUnitCount:(long long)arg3;
+ (id)discreteProgressWithTotalUnitCount:(long long)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)currentProgress;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(_Bool)arg3;
- (id)_initWithValues:(id)arg1;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (oneway void)prioritize;
- (CDUnknownBlockType)prioritizationHandler;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (_Bool)isPrioritizable;
- (void)setPrioritizable:(_Bool)arg1;
- (id)_publishingAppBundleIdentifier;
@property(readonly, getter=isOld) _Bool old;
- (void)acknowledgeWithSuccess:(_Bool)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(_Bool)arg2;
- (CDUnknownBlockType)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (CDUnknownBlockType)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_setAcknowledgementHandler:(CDUnknownBlockType)arg1 forAppBundleIdentifier:(id)arg2;
- (void)setAcknowledgementHandler:(CDUnknownBlockType)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_unpublish;
- (void)unpublish;
- (void)_publish;
- (void)publish;
@property(copy) NSString *kind;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (id)ownedDictionaryKeyEnumerator;
- (unsigned long long)ownedDictionaryCount;
@property(readonly, copy) NSDictionary *userInfo;
- (void)resume;
- (void)pause;
- (void)cancel;
@property(readonly) double fractionCompleted;
@property(readonly, getter=isIndeterminate) _Bool indeterminate;
@property(readonly, copy) NSString *description;
- (id)_indentedDescription:(unsigned long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(_Bool)arg3;
@property(copy) CDUnknownBlockType resumingHandler;
@property(copy) CDUnknownBlockType pausingHandler;
@property(copy) CDUnknownBlockType cancellationHandler;
@property(readonly, getter=isPaused) _Bool paused;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(getter=isPausable) _Bool pausable;
@property(getter=isCancellable) _Bool cancellable;
- (_Bool)isFinished;
@property(copy) NSString *localizedAdditionalDescription;
@property(copy) NSString *localizedDescription;
@property long long completedUnitCount;
- (void)_updateChild:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_addCompletedUnitCount:(long long)arg1;
@property long long totalUnitCount;
- (void)_updateFractionCompleted:(id)arg1;
- (id)_setValueForKeys:(CDUnknownBlockType)arg1 settingBlock:(CDUnknownBlockType)arg2;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(_Bool)arg2;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(_Bool)arg2;
- (void)set_adoptChildUserInfo:(_Bool)arg1;
- (_Bool)_adoptChildUserInfo;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)resignCurrent;
- (void)_addImplicitChild:(id)arg1;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (id)_parent;
- (void)_setParent:(id)arg1 portion:(long long)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_receiveProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

