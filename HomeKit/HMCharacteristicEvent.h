//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristic;
@protocol NSCopying;

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding>
{
    id <NSCopying> _triggerValue;
    HMCharacteristic *_characteristic;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 allowWithoutNotification:(_Bool)arg3;
@property(copy, nonatomic) id <NSCopying> triggerValue; // @synthesize triggerValue=_triggerValue;

@end

