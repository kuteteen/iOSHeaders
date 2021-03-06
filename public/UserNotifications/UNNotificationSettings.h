//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface UNNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    long long _authorizationStatus;
    long long _soundSetting;
    long long _badgeSetting;
    long long _alertSetting;
    long long _notificationCenterSetting;
    long long _lockScreenSetting;
    long long _carPlaySetting;
    long long _alertStyle;
    long long _showPreviewsSetting;
}

+ (_Bool)supportsSecureCoding;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 alertStyle:(long long)arg8 showPreviewsSetting:(long long)arg9;
+ (id)emptySettings;
@property(readonly, nonatomic) long long showPreviewsSetting; // @synthesize showPreviewsSetting=_showPreviewsSetting;
@property(readonly, nonatomic) long long alertStyle; // @synthesize alertStyle=_alertStyle;
@property(readonly, nonatomic) long long carPlaySetting; // @synthesize carPlaySetting=_carPlaySetting;
@property(readonly, nonatomic) long long lockScreenSetting; // @synthesize lockScreenSetting=_lockScreenSetting;
@property(readonly, nonatomic) long long notificationCenterSetting; // @synthesize notificationCenterSetting=_notificationCenterSetting;
@property(readonly, nonatomic) long long alertSetting; // @synthesize alertSetting=_alertSetting;
@property(readonly, nonatomic) long long badgeSetting; // @synthesize badgeSetting=_badgeSetting;
@property(readonly, nonatomic) long long soundSetting; // @synthesize soundSetting=_soundSetting;
@property(readonly, nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 alertStyle:(long long)arg8 showPreviewsSetting:(long long)arg9;

@end

