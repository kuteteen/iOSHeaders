//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class FLFollowUpNotification, NSArray, NSData, NSDictionary, NSString;

@interface FLFollowUpItem : NSObject <NSSecureCoding>
{
    _Bool _showInSettings;
    _Bool _shouldPersistWhenActivated;
    _Bool _shouldPersistWhenDismissed;
    NSString *_uniqueIdentifier;
    NSString *_groupIdentifier;
    FLFollowUpNotification *_notification;
    NSString *_title;
    NSString *_informativeText;
    unsigned long long _displayStyle;
    NSString *_extensionIdentifier;
    NSArray *_actions;
    NSDictionary *_userInfo;
    unsigned long long _sqlID;
    NSString *_clientIdentifier;
    NSString *_delegateMachServiceName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *delegateMachServiceName; // @synthesize delegateMachServiceName=_delegateMachServiceName;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) unsigned long long sqlID; // @synthesize sqlID=_sqlID;
@property _Bool shouldPersistWhenDismissed; // @synthesize shouldPersistWhenDismissed=_shouldPersistWhenDismissed;
@property _Bool shouldPersistWhenActivated; // @synthesize shouldPersistWhenActivated=_shouldPersistWhenActivated;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSArray *actions; // @synthesize actions=_actions;
@property(copy) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showInSettings; // @synthesize showInSettings=_showInSettings;
@property(retain, nonatomic) FLFollowUpNotification *notification; // @synthesize notification=_notification;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSData *_userInfoData;
- (id)redirectURLWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (_Bool)isHSA2PasswordResetItem;
- (_Bool)isHSA2LoginItem;

@end

