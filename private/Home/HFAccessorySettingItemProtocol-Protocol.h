//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFHomeKitItemProtocol.h"

@class HFAccessorySettingsEntity, NSString;

@protocol HFAccessorySettingItemProtocol <HFHomeKitItemProtocol>
@property(readonly, nonatomic) NSString *settingKeyPath;
@property(readonly, nonatomic) HFAccessorySettingsEntity *entity;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer;
@end

