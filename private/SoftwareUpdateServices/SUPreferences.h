//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SUPreferences : NSObject
{
    _Bool _disableManagedRequest;
    _Bool _disableUserWiFiOnlyPeriod;
    _Bool _disableBuildNumberComparison;
    _Bool _allowSameBuildUpdates;
    _Bool _disableAvailabilityAlerts;
    _Bool _disableAutoDownload;
    _Bool _simulateAutoDownload;
    _Bool _disableAutoSU;
    _Bool _scanWeeklyInternally;
    _Bool _forceFullReplacement;
    _Bool _disableFullReplacementFallback;
    NSNumber *_updateDelayInterval;
    _Bool _shouldDelayUpdates;
    _Bool _shouldDelayInMinutes;
    NSNumber *_unmetConstraints;
    NSNumber *_mandatorySUFlags;
    NSString *_requestedPMV;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *requestedPMV; // @synthesize requestedPMV=_requestedPMV;
@property(readonly, nonatomic) NSNumber *mandatorySUFlags; // @synthesize mandatorySUFlags=_mandatorySUFlags;
@property(readonly, nonatomic) _Bool shouldDelayInMinutes; // @synthesize shouldDelayInMinutes=_shouldDelayInMinutes;
@property(readonly, nonatomic) NSNumber *unmetConstraints; // @synthesize unmetConstraints=_unmetConstraints;
@property(readonly, nonatomic) _Bool shouldDelayUpdates; // @synthesize shouldDelayUpdates=_shouldDelayUpdates;
@property(readonly, nonatomic) NSNumber *updateDelayInterval; // @synthesize updateDelayInterval=_updateDelayInterval;
@property(readonly, nonatomic) _Bool disableFullReplacementFallback; // @synthesize disableFullReplacementFallback=_disableFullReplacementFallback;
@property(readonly, nonatomic) _Bool forceFullReplacement; // @synthesize forceFullReplacement=_forceFullReplacement;
@property(readonly, nonatomic) _Bool scanWeeklyInternally; // @synthesize scanWeeklyInternally=_scanWeeklyInternally;
@property(readonly, nonatomic, getter=isAutoSUDisabled) _Bool disableAutoSU; // @synthesize disableAutoSU=_disableAutoSU;
@property(readonly, nonatomic) _Bool simulateAutoDownload; // @synthesize simulateAutoDownload=_simulateAutoDownload;
@property(readonly, nonatomic, getter=isAutoDownloadDisabled) _Bool disableAutoDownload; // @synthesize disableAutoDownload=_disableAutoDownload;
@property(readonly, nonatomic) _Bool disableAvailabilityAlerts; // @synthesize disableAvailabilityAlerts=_disableAvailabilityAlerts;
@property(readonly, nonatomic) _Bool allowSameBuildUpdates; // @synthesize allowSameBuildUpdates=_allowSameBuildUpdates;
@property(readonly, nonatomic) _Bool disableBuildNumberComparison; // @synthesize disableBuildNumberComparison=_disableBuildNumberComparison;
@property(readonly, nonatomic) _Bool disableUserWiFiOnlyPeriod; // @synthesize disableUserWiFiOnlyPeriod=_disableUserWiFiOnlyPeriod;
@property(readonly, nonatomic) _Bool disableManagedRequest; // @synthesize disableManagedRequest=_disableManagedRequest;
- (void *)_copyPreferenceForKey:(struct __CFString *)arg1 ofType:(unsigned long long)arg2;
- (id)_copyNumberPreferenceForKey:(id)arg1;
- (id)_copyStringPreferenceForKey:(id)arg1;
- (_Bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (void)_loadPreferences;
- (void)reload;
- (id)_mandatorySUFlagsForPreferences;
- (void)dealloc;
- (id)init;

@end

