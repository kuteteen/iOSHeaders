//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreBluetooth/CBService.h>

@class NSArray, NSNumber;

@interface CBMutableService : CBService
{
    NSNumber *_ID;
}

@property(retain) NSNumber *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)description;
- (void)handlePowerNotOn;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(id)arg1 primary:(_Bool)arg2;

// Remaining properties
@property(retain) NSArray *characteristics; // @dynamic characteristics;
@property(retain) NSArray *includedServices; // @dynamic includedServices;

@end

