//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

#import "HDDatumRendering.h"

@class NSDate, NSNumber;

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering>
{
    NSNumber *_instantaneousSpeed;
    NSNumber *_averageSpeed;
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
@property(retain, nonatomic) NSNumber *averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property(retain, nonatomic) NSNumber *instantaneousSpeed; // @synthesize instantaneousSpeed=_instantaneousSpeed;
- (void).cxx_destruct;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id *)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end

