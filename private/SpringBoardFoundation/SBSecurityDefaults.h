//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSNumber;

@interface SBSecurityDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)setDeviceLockDefault:(id)arg1 forKey:(id)arg2;
- (id)deviceLockDefaultForKey:(id)arg1;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(readonly, nonatomic) _Bool allowLockAndUnlockWithCase; // @dynamic allowLockAndUnlockWithCase;
@property(retain, nonatomic) NSNumber *blockStateGeneration; // @dynamic blockStateGeneration;
@property(retain, nonatomic, getter=isBlockedForPasscode) NSNumber *blockedForPasscode; // @dynamic blockedForPasscode;
@property(nonatomic, getter=isBlockedForThermal) _Bool blockedForThermal; // @dynamic blockedForThermal;
@property(readonly, nonatomic, getter=isDeviceWipeEnabled) _Bool deviceWipeEnabled; // @dynamic deviceWipeEnabled;
@property(readonly, nonatomic) _Bool dontLockEver; // @dynamic dontLockEver;
@property(retain, nonatomic) NSNumber *numberOfFailedPasscodeAttempts; // @dynamic numberOfFailedPasscodeAttempts;
@property(retain, nonatomic, getter=isPendingDeviceWipe) NSNumber *pendingDeviceWipe; // @dynamic pendingDeviceWipe;
@property(retain, nonatomic) NSNumber *unblockTimeFromReferenceDate; // @dynamic unblockTimeFromReferenceDate;

@end
