//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger
{
    CLRegion *_region;
}

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithRegion:(id)arg1 repeats:(_Bool)arg2;
@property(readonly, copy, nonatomic) CLRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithRegion:(id)arg1 repeats:(_Bool)arg2;

@end

