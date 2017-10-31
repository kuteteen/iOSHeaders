//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NPHSOSPersistentTimerLocationManagerDelegate.h"
#import "NSXPCListenerDelegate.h"
#import "SOSInternalServerProtocol.h"
#import "SOSServerProtocol.h"

@class CLLocation, FKFriendsManager, NPHSOSPersistentTimerLocationManager, NSDate, NSMutableArray, NSString, SOSContactsManager;

@interface SOSEngine : NSObject <NPHSOSPersistentTimerLocationManagerDelegate, SOSInternalServerProtocol, SOSServerProtocol, NSXPCListenerDelegate>
{
    NPHSOSPersistentTimerLocationManager *_sosPersistentTimerLocationManager;
    NSDate *_timeToStopSendingMessages;
    NSDate *_timeLastMessageSent;
    CLLocation *_lastLocationSent;
    SOSContactsManager *_contactsManager;
    FKFriendsManager *_friendsManager;
    NSMutableArray *_clientConnections;
}

+ (_Bool)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;
+ (id)additionalTextForCallbackNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3;
+ (id)additionalTextForCallbackNumber:(id)arg1;
+ (id)GPSCoordinatesURLForLocation:(id)arg1;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(_Bool)arg2 withMMS:(_Bool)arg3 myFullName:(id)arg4 myFirstName:(id)arg5 callbackNumber:(id)arg6;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(_Bool)arg2 withMMS:(_Bool)arg3 callbackNumber:(id)arg4;
+ (id)firstNameForContact:(id)arg1;
+ (id)fullNameForContact:(id)arg1;
+ (id)meContact;
+ (id)_myNumber;
+ (_Bool)_isBasebandDevice;
+ (void)_sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 useStandalone:(_Bool)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)_sendMessageToRecipients:(id)arg1 withLocation:(id)arg2 isFirstMessage:(_Bool)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain, nonatomic) FKFriendsManager *friendsManager; // @synthesize friendsManager=_friendsManager;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)contactStoreDidChange;
- (_Bool)locationIsValidToSend:(id)arg1;
- (void)isSendingLocationUpdate:(CDUnknownBlockType)arg1;
- (void)mostRecentLocationSentWithCompletion:(CDUnknownBlockType)arg1;
- (long long)currentSOSInitiationState;
- (_Bool)isSendingLocationUpdate;
- (void)stopSendingLocationUpdate;
- (void)startSendingLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)willStartSendingLocationUpdate;
- (_Bool)notificationEnabledAndContactsExist;
- (void)sosPersistentTimerLocationMangerTimerFired:(id)arg1 location:(id)arg2;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)dismissSOSWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)SOSSendingLocationUpdateChanged:(id)arg1;
- (id)contactsManager;
- (void)dealloc;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

