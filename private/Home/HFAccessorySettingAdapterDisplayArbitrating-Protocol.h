//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFAccessorySettingsEntity, HFMutableItemSection;

@protocol HFAccessorySettingAdapterDisplayArbitrating <NSObject>
- (_Bool)shouldShowSettingsEntity:(HFAccessorySettingsEntity *)arg1;

@optional
- (void)configureSection:(HFMutableItemSection *)arg1 forEntity:(HFAccessorySettingsEntity *)arg2;
@end

