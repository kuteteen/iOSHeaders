//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLRegion, NSArray, NSDate, NSDateComponents, NSDictionary, NSNumber, NSString, NSTimeZone;

@interface UNSNotificationRecord : NSObject
{
    _Bool _hasDefaultAction;
    _Bool _fromSnooze;
    _Bool _shouldAlwaysAlertWhileAppIsForeground;
    _Bool _shouldBadgeApplicationIcon;
    _Bool _shouldIgnoreRingerSwitch;
    _Bool _shouldLockDevice;
    _Bool _shouldPauseMedia;
    _Bool _shouldPlaySound;
    _Bool _shouldPresentAlert;
    _Bool _shouldSoundRepeat;
    _Bool _snoozeable;
    _Bool _transient;
    _Bool _triggerRepeats;
    int _triggerRemainingRepeatCount;
    int _triggerTotalRepeatCount;
    NSArray *_attachments;
    NSNumber *_badge;
    NSString *_body;
    NSArray *_bodyLocalizationArguments;
    NSString *_bodyLocalizationKey;
    NSString *_categoryIdentifier;
    NSString *_threadIdentifier;
    NSArray *_peopleIdentifiers;
    NSNumber *_contentAvailable;
    NSNumber *_mutableContent;
    NSString *_darwinNotificationName;
    NSString *_darwinSnoozedNotificationName;
    NSDate *_date;
    NSString *_defaultActionTitle;
    NSString *_defaultActionTitleLocalizationKey;
    NSString *_identifier;
    NSString *_launchImageName;
    NSDate *_requestDate;
    NSString *_audioCategory;
    NSNumber *_audioVolume;
    double _soundMaximumDuration;
    NSString *_subtitle;
    NSArray *_subtitleLocalizationArguments;
    NSString *_subtitleLocalizationKey;
    NSString *_title;
    NSArray *_titleLocalizationArguments;
    NSString *_titleLocalizationKey;
    NSString *_toneAlertTopic;
    long long _toneAlertType;
    NSString *_toneFileName;
    NSString *_toneIdentifier;
    unsigned long long _toneMediaLibraryItemIdentifier;
    NSDate *_triggerDate;
    NSDateComponents *_triggerDateComponents;
    NSString *_triggerRepeatCalendarIdentifier;
    unsigned long long _triggerRepeatInterval;
    CLRegion *_triggerRegion;
    double _triggerTimeInterval;
    NSTimeZone *_triggerTimeZone;
    NSString *_triggerType;
    NSDictionary *_userInfo;
    NSString *_vibrationIdentifier;
    NSDictionary *_vibrationPattern;
}

@property(copy, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) int triggerTotalRepeatCount; // @synthesize triggerTotalRepeatCount=_triggerTotalRepeatCount;
@property(copy, nonatomic) NSTimeZone *triggerTimeZone; // @synthesize triggerTimeZone=_triggerTimeZone;
@property(nonatomic) double triggerTimeInterval; // @synthesize triggerTimeInterval=_triggerTimeInterval;
@property(copy, nonatomic) CLRegion *triggerRegion; // @synthesize triggerRegion=_triggerRegion;
@property(nonatomic) _Bool triggerRepeats; // @synthesize triggerRepeats=_triggerRepeats;
@property(nonatomic) int triggerRemainingRepeatCount; // @synthesize triggerRemainingRepeatCount=_triggerRemainingRepeatCount;
@property(nonatomic) unsigned long long triggerRepeatInterval; // @synthesize triggerRepeatInterval=_triggerRepeatInterval;
@property(copy, nonatomic) NSString *triggerRepeatCalendarIdentifier; // @synthesize triggerRepeatCalendarIdentifier=_triggerRepeatCalendarIdentifier;
@property(copy, nonatomic) NSDateComponents *triggerDateComponents; // @synthesize triggerDateComponents=_triggerDateComponents;
@property(copy, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(nonatomic) unsigned long long toneMediaLibraryItemIdentifier; // @synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *toneFileName; // @synthesize toneFileName=_toneFileName;
@property(nonatomic) long long toneAlertType; // @synthesize toneAlertType=_toneAlertType;
@property(copy, nonatomic) NSString *toneAlertTopic; // @synthesize toneAlertTopic=_toneAlertTopic;
@property(copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property(copy, nonatomic) NSArray *titleLocalizationArguments; // @synthesize titleLocalizationArguments=_titleLocalizationArguments;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subtitleLocalizationKey; // @synthesize subtitleLocalizationKey=_subtitleLocalizationKey;
@property(copy, nonatomic) NSArray *subtitleLocalizationArguments; // @synthesize subtitleLocalizationArguments=_subtitleLocalizationArguments;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) double soundMaximumDuration; // @synthesize soundMaximumDuration=_soundMaximumDuration;
@property(copy, nonatomic) NSNumber *audioVolume; // @synthesize audioVolume=_audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic, getter=isSnoozeable) _Bool snoozeable; // @synthesize snoozeable=_snoozeable;
@property(nonatomic) _Bool shouldSoundRepeat; // @synthesize shouldSoundRepeat=_shouldSoundRepeat;
@property(nonatomic) _Bool shouldPresentAlert; // @synthesize shouldPresentAlert=_shouldPresentAlert;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
@property(nonatomic) _Bool shouldPauseMedia; // @synthesize shouldPauseMedia=_shouldPauseMedia;
@property(nonatomic) _Bool shouldLockDevice; // @synthesize shouldLockDevice=_shouldLockDevice;
@property(nonatomic) _Bool shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(nonatomic) _Bool shouldBadgeApplicationIcon; // @synthesize shouldBadgeApplicationIcon=_shouldBadgeApplicationIcon;
@property(nonatomic) _Bool shouldAlwaysAlertWhileAppIsForeground; // @synthesize shouldAlwaysAlertWhileAppIsForeground=_shouldAlwaysAlertWhileAppIsForeground;
@property(copy, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(copy, nonatomic) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isFromSnooze) _Bool fromSnooze; // @synthesize fromSnooze=_fromSnooze;
@property(copy, nonatomic) NSString *defaultActionTitleLocalizationKey; // @synthesize defaultActionTitleLocalizationKey=_defaultActionTitleLocalizationKey;
@property(copy, nonatomic) NSString *defaultActionTitle; // @synthesize defaultActionTitle=_defaultActionTitle;
@property(nonatomic) _Bool hasDefaultAction; // @synthesize hasDefaultAction=_hasDefaultAction;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *darwinSnoozedNotificationName; // @synthesize darwinSnoozedNotificationName=_darwinSnoozedNotificationName;
@property(copy, nonatomic) NSString *darwinNotificationName; // @synthesize darwinNotificationName=_darwinNotificationName;
@property(copy, nonatomic) NSNumber *mutableContent; // @synthesize mutableContent=_mutableContent;
@property(copy, nonatomic) NSNumber *contentAvailable; // @synthesize contentAvailable=_contentAvailable;
@property(copy, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(copy, nonatomic) NSString *bodyLocalizationKey; // @synthesize bodyLocalizationKey=_bodyLocalizationKey;
@property(copy, nonatomic) NSArray *bodyLocalizationArguments; // @synthesize bodyLocalizationArguments=_bodyLocalizationArguments;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasPendingTrigger;
@property(readonly, nonatomic) _Bool hasSound;
@property(readonly, nonatomic) _Bool hasBadge;
@property(readonly, nonatomic) _Bool hasAlertContent;
- (_Bool)willNotifyUser;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSimilar:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

