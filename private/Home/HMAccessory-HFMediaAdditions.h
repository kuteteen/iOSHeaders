//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMAccessory.h"

@class NSString;

@interface HMAccessory (HFMediaAdditions)
- (id)hf_fixSymptom;
- (_Bool)hf_shouldAutoFixSymptom:(id)arg1;
- (_Bool)hf_shouldDisplayManualFixOption;
- (_Bool)hf_shouldShowSoftwareUpdateInfo;
@property(readonly, nonatomic) NSString *hf_editingNameForMediaAccessories;
@property(readonly, nonatomic) _Bool hf_isDumbSpeaker;
@property(readonly, nonatomic) _Bool hf_isAirPortExtremeSpeaker;
@property(readonly, nonatomic) _Bool hf_isAppleTV;
@property(readonly, nonatomic) _Bool hf_isHomePod;
@property(readonly, nonatomic) _Bool hf_isMediaAccessory;
@end

