//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem
{
    HMAccessory *_accessory;
    unsigned long long _infoType;
}

@property(nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2;
- (id)init;

@end

