//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/SPCompanionAppServerProtocol-Protocol.h>

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>
{
}

- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;
- (void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

