//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItem.h"

@class HULocationDeviceManager;

@interface HUPersonalRequestsDescriptionFooterItem : HFItem
{
    HULocationDeviceManager *_locationDeviceManager;
}

@property(readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
- (void).cxx_destruct;
- (id)_locationDeviceTextForDeviceNameString:(id)arg1;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;

@end

