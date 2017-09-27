//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, NSUndoManager, NSUserDefaults, VSDevice;

@interface VSPreferences : NSObject
{
    NSUndoManager *_undoManager;
    NSUserDefaults *_userDefaults;
    VSDevice *_device;
}

@property(retain, nonatomic) VSDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (void)noteDesiredApp:(id)arg1;
- (_Bool)hasChosenDesiredApp;
- (void)noteDidSendWelcomeMessage;
@property(readonly, nonatomic) _Bool hasSentWelcomeMessage;
@property(nonatomic) long long cachedStoreProviderStatus;
@property(nonatomic) long long cachedDeveloperProviderStatus;
@property(nonatomic) long long cachedAvailabilityStatus;
- (void)noteShouldSkipSetup;
- (void)_updateShouldSkipSetupWithNumber:(id)arg1;
- (void)_updateValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool shouldSkipSetup;
@property(readonly, nonatomic) _Bool shouldAlwaysAllowRemoteInspection;
@property(readonly, nonatomic) _Bool shouldDisableRequestTimeouts;
@property(readonly, copy, nonatomic) NSURL *overridingAppBootURL;

@end

