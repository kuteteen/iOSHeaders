//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTAgentNotification, NSArray;

@protocol MTAgentNotificationListener <NSObject>
- (void)handleNotification:(MTAgentNotification *)arg1;
- (_Bool)handlesNotification:(MTAgentNotification *)arg1;

@optional
- (NSArray *)handledLiveDarwinNotifications;
@end

