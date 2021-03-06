//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMAccessorySettings, HMHome, NSMutableDictionary, NSSet;

@interface HFMediaProfileContainerSettingsValueManager : NSObject
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HMAccessorySettings *_settings;
    HMHome *_home;
    NSMutableDictionary *_transactionStacks;
}

@property(retain, nonatomic) NSMutableDictionary *transactionStacks; // @synthesize transactionStacks=_transactionStacks;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessorySettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) __weak id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (void)_clearTransaction:(id)arg1;
- (void)_dispatchDidWriteValueForSettings:(id)arg1 failedSettings:(id)arg2;
- (void)_dispatchWillWriteValueForSettings:(id)arg1;
@property(readonly, nonatomic) NSSet *pendingWrites;
- (id)valueForSettingAtKeyPath:(id)arg1;
- (id)_valueForSetting:(id)arg1 logRead:(_Bool)arg2;
- (id)valueForSetting:(id)arg1;
- (void)_executeNextPendingWriteForSetting:(id)arg1;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2 changeType:(unsigned long long)arg3;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2;
- (id)initWithSettings:(id)arg1 mediaProfileContainer:(id)arg2;

@end

