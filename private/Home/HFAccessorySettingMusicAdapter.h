//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFAccessorySettingAdapter.h>

#import "HFAccessorySettingAdapterDisplayArbitrating.h"

@class NSString;

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
}

- (void)configureSection:(id)arg1 forEntity:(id)arg2;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

