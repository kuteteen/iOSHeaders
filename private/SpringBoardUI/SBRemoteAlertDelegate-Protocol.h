//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SBRemoteAlertDelegate <NSObject>
- (void)remoteAlert:(id <SBRemoteAlert>)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteAlertDidRequestInvalidation:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidRequestDismissal:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidDeactivate:(id <SBRemoteAlert>)arg1;
- (void)remoteAlertDidActivate:(id <SBRemoteAlert>)arg1;
@end

