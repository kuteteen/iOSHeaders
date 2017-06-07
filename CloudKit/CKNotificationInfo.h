//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldBadge;
    _Bool _shouldSendContentAvailable;
    NSString *_alertBody;
    NSString *_alertLocalizationKey;
    NSArray *_alertLocalizationArgs;
    NSString *_alertActionLocalizationKey;
    NSString *_alertLaunchImage;
    NSString *_soundName;
    NSArray *_desiredKeys;
    NSString *_category;
}

+ (_Bool)supportsSecureCoding;
+ (id)notificationInfo;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy, nonatomic) NSString *alertLaunchImage; // @synthesize alertLaunchImage=_alertLaunchImage;
@property(copy, nonatomic) NSString *alertActionLocalizationKey; // @synthesize alertActionLocalizationKey=_alertActionLocalizationKey;
@property(copy, nonatomic) NSArray *alertLocalizationArgs; // @synthesize alertLocalizationArgs=_alertLocalizationArgs;
@property(copy, nonatomic) NSString *alertLocalizationKey; // @synthesize alertLocalizationKey=_alertLocalizationKey;
@property(copy, nonatomic) NSString *alertBody; // @synthesize alertBody=_alertBody;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

