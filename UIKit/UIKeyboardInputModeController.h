//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIKeyboardInputMode;
@protocol UIKeyboardInputModeControllerDelegate;

@interface UIKeyboardInputModeController : NSObject
{
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSArray *_allExtensions;
    NSArray *_allowedExtensions;
    _Bool _skipExtensionInputModes;
    _Bool _excludeExtensionInputModes;
    _Bool _cacheNeedsRefresh;
    int _notifyPasscodeChangedToken;
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_userNotificationRunLoopSource;
    NSString *_newModeForUserNotification;
    NSObject *_keyboardTagForUserNotification;
    _Bool _loadingExtensions;
    _Bool _needsUpdateExtensions;
    _Bool _shouldRunContinuousDiscovery;
    NSArray *keyboardInputModes;
    NSArray *keyboardInputModeIdentifiers;
    NSArray *enabledInputModes;
    NSArray *normalizedInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultRawInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultNormalizedInputModes;
    UIKeyboardInputMode *_lastUsedInputMode;
    NSString *_inputModeContextIdentifier;
    id <UIKeyboardInputModeControllerDelegate> _delegate;
    UIKeyboardInputMode *_nextInputModeToUse;
    UIKeyboardInputMode *_currentUsedInputMode;
    id _extensionMatchingContext;
}

+ (id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+ (id)inputModeIdentifierForPreferredLanguages:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)sharedInputModeController;
@property(retain, nonatomic) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property(retain, nonatomic) UIKeyboardInputMode *currentUsedInputMode; // @synthesize currentUsedInputMode=_currentUsedInputMode;
@property(retain, nonatomic) UIKeyboardInputMode *nextInputModeToUse; // @synthesize nextInputModeToUse=_nextInputModeToUse;
@property(nonatomic) id <UIKeyboardInputModeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldRunContinuousDiscovery; // @synthesize shouldRunContinuousDiscovery=_shouldRunContinuousDiscovery;
@property(copy, nonatomic) NSString *inputModeContextIdentifier; // @synthesize inputModeContextIdentifier=_inputModeContextIdentifier;
@property(retain, nonatomic) UIKeyboardInputMode *lastUsedInputMode; // @synthesize lastUsedInputMode=_lastUsedInputMode;
@property(readonly, nonatomic) NSArray *allowedExtensions; // @synthesize allowedExtensions=_allowedExtensions;
@property(retain) NSArray *defaultNormalizedInputModes; // @synthesize defaultNormalizedInputModes;
@property(retain) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property(copy, nonatomic) NSArray *defaultRawInputModes; // @synthesize defaultRawInputModes;
@property(retain) NSArray *defaultKeyboardInputModes; // @synthesize defaultKeyboardInputModes;
@property(retain) NSArray *normalizedInputModes; // @synthesize normalizedInputModes;
@property(retain) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property(retain) NSArray *keyboardInputModeIdentifiers; // @synthesize keyboardInputModeIdentifiers;
@property(retain) NSArray *keyboardInputModes; // @synthesize keyboardInputModes;
- (void)handleSpecificHardwareKeyboard;
- (void)releaseAddKeyboardNotification;
- (void)didAcceptAddKeyboardInputMode;
- (void)showAddKeyboardAlertForInputModeIdentifier:(id)arg1;
- (id)inputModeToAddForKeyboardLanguage:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3;
- (id)hardwareLayoutToUseForInputMode:(id)arg1;
- (void)handleLastUsedInputMode:(id)arg1 withNewInputMode:(id)arg2;
- (id)supportedInputModesFromArray:(id)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)performWithForcedExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)performWithoutExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)stopDictation;
- (void)switchToDictationInputMode;
- (void)switchToCurrentSystemInputMode;
- (void)updateCurrentAndNextInputModes;
- (void)updateLastUsedInputMode:(id)arg1;
- (id)inputModeForASCIIToggleWithTraits:(id)arg1;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeIdentifierLastUsedForLanguage:(id)arg1;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(_Bool)arg2;
- (id)nextInputModeToUseForTraits:(id)arg1;
- (id)nextInputModeToUseForTraits:(id)arg1 updatePreference:(_Bool)arg2;
- (void)_setCurrentAndNextInputModePreference;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3;
- (id)extensionInputModes;
- (_Bool)isLockscreenPasscodeKeyboard;
- (_Bool)verifyKeyboardExtensionsWithApp;
- (_Bool)deviceStateIsLocked;
- (id)_MCFilteredExtensionIdentifiers;
- (void)_removeInputModes:(id)arg1;
- (_Bool)_mayContainExtensionInputModes;
- (void)_beginContinuousDiscoveryIfNeeded;
- (id)_allExtensionsFromMatchingExtensions:(id)arg1;
- (void)_clearAllExtensionsIfNeeded;
- (void)_clearAllExtensions;
- (void)extensionsChanged;
- (void)didEnterBackground:(id)arg1;
- (void)keyboardsPreferencesChanged:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (id)suggestedInputModesForPreferredLanguages;
- (id)suggestedInputModesForCurrentLocale;
- (id)suggestedInputModesForCurrentLocale:(_Bool)arg1 fallbackToDefaultInputModes:(_Bool)arg2;
- (id)defaultEnabledInputModesForCurrentLocale:(_Bool)arg1;
- (id)appendPasscodeInputModes:(id)arg1;
- (void)updateDefaultInputModesIfNecessaryForIdiom;
- (id)filteredTVInputModesFromInputModes:(id)arg1;
- (_Bool)currentLocaleRequiresExtendedSetup;
- (void)updateCurrentInputMode:(id)arg1;
- (void)_setCurrentInputMode:(id)arg1 force:(_Bool)arg2;
@property(retain) UIKeyboardInputMode *currentInputMode;
@property(readonly, nonatomic) _Bool containsDictationSupportedInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *lastUsedInputModeForCurrentContext;
@property(readonly, nonatomic) UIKeyboardInputMode *currentLinguisticInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *currentPublicInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *currentSystemInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *hardwareInputMode;
- (id)_systemInputModePassingLanguageTest:(CDUnknownBlockType)arg1;
- (id)_systemInputModePassingTest:(CDUnknownBlockType)arg1;
@property(nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property(readonly) NSArray *activeInputModeIdentifiers;
- (id)activeInputModes;
- (id)inputModeWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (_Bool)identifierIsValidSystemInputMode:(id)arg1;
- (id)inputModesFromIdentifiers:(id)arg1;
- (id)identifiersFromInputModes:(id)arg1;
@property(readonly) NSArray *enabledInputModeLanguages;
@property(readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property(readonly) NSArray *enabledInputModeIdentifiers;
- (id)enabledInputModeIdentifiers:(_Bool)arg1;
- (void)saveDeviceUnlockPasscodeInputModes;
@property(readonly) NSArray *inputModesWithoutHardwareSupport;
@property(readonly) NSArray *supportedInputModeIdentifiers;

@end

