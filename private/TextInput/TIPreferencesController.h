//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIPreferencesControllerActions.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer;

@interface TIPreferencesController : NSObject <TIPreferencesControllerActions>
{
    NSMutableDictionary *_configuredDomains;
    NSMutableDictionary *_configuredPreferences;
    NSTimer *_synchronizePreferencesTimer;
    double _lastSynchronizePreferencesTime[5];
    _Bool isInternalInstall;
    _Bool _inhibitGlobalNotification;
    _Bool _ignoreNextSyncNotification;
}

+ (void)registerPreferredLanguagesForInputModes:(id)arg1 replacingInputModes:(id)arg2;
+ (id)sharedPreferencesController;
@property(nonatomic) _Bool ignoreNextSyncNotification; // @synthesize ignoreNextSyncNotification=_ignoreNextSyncNotification;
@property(nonatomic) _Bool inhibitGlobalNotification; // @synthesize inhibitGlobalNotification=_inhibitGlobalNotification;
@property(nonatomic) _Bool isInternalInstall; // @synthesize isInternalInstall;
- (void)updateLastUsedDictationLanguages:(id)arg1;
- (void)updateEnabledDictationLanguages:(id)arg1;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)updateKeyboardHandBias:(id)arg1;
- (void)updateKeyboardIsFloating:(_Bool)arg1;
- (void)updateKeyboardIsSplit:(_Bool)arg1 locked:(_Bool)arg2;
@property(nonatomic) struct CGPoint keyboardPosition;
- (void)didUnseeHardwareKeyboard:(id)arg1;
- (void)didSeeHardwareKeyboard:(id)arg1;
@property(nonatomic) _Bool keyboardShownByTouch;
@property(nonatomic) _Bool automaticMinimizationEnabled;
@property(nonatomic) _Bool predictionEnabled;
@property(copy, nonatomic) NSArray *inputModeSelectionSequence;
- (void)updateLastUsedKeyboards:(id)arg1;
- (void)updateLastUsedLayout:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)didTriggerOneTimeAction:(id)arg1;
- (_Bool)oneTimeActionCompleted:(id)arg1;
- (_Bool)_isOneTimeAction:(id)arg1;
- (_Bool)allEnabledInputModesAreValid;
- (void)updateInputModes:(id)arg1;
- (void)updateEnabledDictationLanguagesForInputModes:(id)arg1;
- (_Bool)isKeyLockedDown:(int)arg1;
- (_Bool)isPreferenceKeyLockedDown:(id)arg1;
- (void)setValue:(id)arg1 forManagedPreferenceKey:(id)arg2;
- (int)MCValueForManagedPreferenceKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)synchronizeDomainIfNeedsGet:(id)arg1;
- (void)clearSynchronizePreferencesTimer;
- (_Bool)boolForKey:(int)arg1;
- (id)valueForKey:(int)arg1;
- (void)performWithWriteability:(_Bool)arg1 operations:(CDUnknownBlockType)arg2;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (_Bool)boolForPreferenceKey:(id)arg1;
- (id)valueForPreferenceKey:(id)arg1;
- (void)_configureKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;
- (void)_configureDomain:(id)arg1 notification:(id)arg2;
- (void)_configurePreferences;
- (void)_configureDomains;
- (void)dealloc;
- (id)init;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (void)preferencesChangedCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

