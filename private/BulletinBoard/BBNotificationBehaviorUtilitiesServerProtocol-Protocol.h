//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol BBNotificationBehaviorUtilitiesServerProtocol <NSObject>
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(_Bool)arg1;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(_Bool)arg1;
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(NSString *)arg2 handler:(void (^)(NSNumber *, NSError *))arg3;
@end

