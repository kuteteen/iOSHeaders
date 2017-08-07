//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/CRCarPlayPreferencesDelegate-Protocol.h>
#import <PreferencesUI/DevicePINControllerDelegate-Protocol.h>
#import <PreferencesUI/PSListControllerTestableSpecifiers-Protocol.h>
#import <PreferencesUI/PSUIHomeButtonCustomizeControllerDelegate-Protocol.h>
#import <PreferencesUI/SFAirDropDiscoveryControllerDelegate-Protocol.h>

@class CRCarPlayPreferences, NSString, NSTimer, PSSpecifier, PSUITVOutManager, SFAirDropDiscoveryController;

@interface PSUIGeneralController : PSListController <CRCarPlayPreferencesDelegate, PSUIHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers>
{
    NSTimer *_usageTimer;
    PSUITVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    PSSpecifier *_airDropSpecifier;
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    CRCarPlayPreferences *_carPreferences;
}

+ (id)booleanCapabilitiesToTest;
@property(retain, nonatomic) CRCarPlayPreferences *carPreferences; // @synthesize carPreferences=_carPreferences;
- (void).cxx_destruct;
- (void)shutDown:(id)arg1;
- (void)handleURL:(id)arg1;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)soundEffects:(id)arg1;
- (void)setSoundEffects:(id)arg1 specifier:(id)arg2;
- (void)enableEdge:(id)arg1;
- (id)EDGEEnabled:(id)arg1;
- (id)init;
- (void)profileNotification:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)parentalControlsEnabled:(id)arg1;
- (void)dealloc;
- (void)handleCarPlayAllowedDidChange;
- (_Bool)_hasCarPlayContent;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)homeButtonCustomizeControllerDidFinish:(id)arg1;
- (void)loadHomeButtonSettings:(id)arg1;
- (id)specifiers;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1;
- (void)handleTVOutChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

