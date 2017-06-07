//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString, UNNotificationContent, UNNotificationTrigger;

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding>
{
    UNNotificationContent *_content;
    UNNotificationTrigger *_trigger;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3;
+ (id)requestWithPushPayload:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) UNNotificationTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, copy, nonatomic) UNNotificationContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;

@end

