//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFServiceState.h>

@interface HFIrrigationSystemServiceState : HFServiceState
{
    unsigned long long _type;
}

+ (unsigned long long)_typeForActiveState:(_Bool)arg1 usageState:(long long)arg2 programMode:(long long)arg3;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (long long)priority;
- (long long)primaryState;
- (id)stateTypeIdentifier;
- (id)initWithBatchReadResponse:(id)arg1;

@end

