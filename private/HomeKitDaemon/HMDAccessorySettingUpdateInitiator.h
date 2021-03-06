//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessorySettingUpdateBase.h>

#import "HMDAccessorySettingUpdateDelegate.h"

@class HMDAccessorySettingUpdateSecondarySender, NSString;

@interface HMDAccessorySettingUpdateInitiator : HMDAccessorySettingUpdateBase <HMDAccessorySettingUpdateDelegate>
{
    HMDAccessorySettingUpdateSecondarySender *_secondarySender;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDAccessorySettingUpdateSecondarySender *secondarySender; // @synthesize secondarySender=_secondarySender;
- (void).cxx_destruct;
- (void)settingUpdate:(id)arg1 didCompleteWithError:(id)arg2;
- (void)createSecondarySender:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

