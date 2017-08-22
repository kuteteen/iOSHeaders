//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID, SFPasswordSharingInfo, SFService, SFUserNotification;
@protocol OS_dispatch_queue, SFPasswordSharingServiceDelegate;

@interface SFPasswordSharingService : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFUserNotification *_notification;
    NSUUID *_peer;
    SFPasswordSharingInfo *_promptedInfo;
    SFService *_service;
    int _serviceState;
    NSDate *_shareClock;
    double _shareTime;
    id <SFPasswordSharingServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_networkName;
}

+ (unsigned int)passwordSharingAvailability;
@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <SFPasswordSharingServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)__testReceivedObject:(id)arg1 withFlags:(unsigned int)arg2;
- (_Bool)__invalidateCalled;
- (_Bool)__activateCalled;
- (id)messageForDisplayName:(id)arg1 deviceName:(id)arg2 info:(id)arg3;
- (void)_promptUserWithInfo:(id)arg1 message:(id)arg2;
- (void)_passInfoToDelegate:(id)arg1;
- (void)_sendPasswordDeclinedWithError:(int)arg1;
- (void)_sendPasswordReceived;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_handleUserNotificationResponse:(int)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleReceivedPassword:(id)arg1;
- (int)_runServiceStart;
- (void)_run;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

