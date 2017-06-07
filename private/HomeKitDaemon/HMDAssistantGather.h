//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHomeManager, NSArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantGather : NSObject <HMFLogging>
{
    HMDHomeManager *_manager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSArray *_currentHomekitObjects;
}

+ (id)logCategory;
@property(retain, nonatomic) NSArray *currentHomekitObjects; // @synthesize currentHomekitObjects=_currentHomekitObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHomeManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)getSyncEntityObjectsWithValidity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *homeKitObjects;
- (void)_gatherHomeKitObjects;
- (void)gatherHomeKitObjects;
@property(readonly, nonatomic) NSUUID *currentHomeUUID;
@property(readonly, nonatomic) NSString *currentHomeName;
@property(readonly, nonatomic) NSUUID *primaryHomeUUID;
@property(readonly, nonatomic) NSString *primaryHomeName;
@property(readonly, nonatomic) long long homeCount;
- (id)_getCurrentHome;
- (id)_getPrimaryHome;
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
