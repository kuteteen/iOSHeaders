//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PDCloudStoreManager;

@protocol PDCloudStoreManagerDelegate <NSObject>
- (void)cloudStoreManagerShouldUnscheduleAllBackgroundActivities:(PDCloudStoreManager *)arg1;
- (void)cloudStoreManager:(PDCloudStoreManager *)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreManager:(PDCloudStoreManager *)arg1 createdZoneWithName:(NSString *)arg2;
@end

