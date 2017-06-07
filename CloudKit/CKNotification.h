//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKNotificationID, NSArray, NSNumber, NSString;

@interface CKNotification : NSObject <NSSecureCoding>
{
    _Bool _isPruned;
    long long _notificationType;
    CKNotificationID *_notificationID;
    NSString *_containerIdentifier;
    NSString *_alertBody;
    NSString *_alertLocalizationKey;
    NSArray *_alertLocalizationArgs;
    NSString *_title;
    NSString *_titleLocalizationKey;
    NSArray *_titleLocalizationArgs;
    NSString *_subtitle;
    NSString *_subtitleLocalizationKey;
    NSArray *_subtitleLocalizationArgs;
    NSString *_alertActionLocalizationKey;
    NSString *_alertLaunchImage;
    NSNumber *_badge;
    NSString *_soundName;
    NSString *_subscriptionID;
    NSString *_category;
}

+ (_Bool)supportsSecureCoding;
+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
+ (id)_realNotificationFromRemoteNotificationDictionary:(id)arg1;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSString *alertLaunchImage; // @synthesize alertLaunchImage=_alertLaunchImage;
@property(copy, nonatomic) NSString *alertActionLocalizationKey; // @synthesize alertActionLocalizationKey=_alertActionLocalizationKey;
@property(copy, nonatomic) NSArray *subtitleLocalizationArgs; // @synthesize subtitleLocalizationArgs=_subtitleLocalizationArgs;
@property(copy, nonatomic) NSString *subtitleLocalizationKey; // @synthesize subtitleLocalizationKey=_subtitleLocalizationKey;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSArray *titleLocalizationArgs; // @synthesize titleLocalizationArgs=_titleLocalizationArgs;
@property(copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *alertLocalizationArgs; // @synthesize alertLocalizationArgs=_alertLocalizationArgs;
@property(copy, nonatomic) NSString *alertLocalizationKey; // @synthesize alertLocalizationKey=_alertLocalizationKey;
@property(copy, nonatomic) NSString *alertBody; // @synthesize alertBody=_alertBody;
@property(nonatomic) _Bool isPruned; // @synthesize isPruned=_isPruned;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(copy, nonatomic) CKNotificationID *notificationID; // @synthesize notificationID=_notificationID;
@property(nonatomic) long long notificationType; // @synthesize notificationType=_notificationType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isRead;
- (id)description;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)init;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

