//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSURL;
@protocol OS_dispatch_queue;

@interface _LSDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSURL *_systemContainerURL;
    NSURL *_systemGroupContainerURL;
    NSURL *_userContainerURL;
    NSData *_hmacSecret;
    _Bool _inSyncBubble;
    _Bool _inXCTestRigInsecure;
    _Bool _appleInternal;
    _Bool _isServer;
    _Bool _hasServer;
    _Bool _inEducationMode;
    _Bool _hasPersistentPreferences;
    long long _currentDisplayGamut;
}

+ (_Bool)hasPersistentPreferences;
+ (_Bool)hasServer;
+ (_Bool)appleInternal;
+ (_Bool)inXCTestRigInsecure;
+ (_Bool)inSyncBubble;
+ (id)userContainerURL;
+ (id)systemGroupContainerURL;
+ (id)systemContainerURL;
+ (id)sharedInstance;
@property(readonly) _Bool hasPersistentPreferences; // @synthesize hasPersistentPreferences=_hasPersistentPreferences;
@property(readonly, getter=isInEducationMode) _Bool inEducationMode; // @synthesize inEducationMode=_inEducationMode;
@property(getter=isServer) _Bool server; // @synthesize server=_isServer;
@property(readonly, nonatomic, getter=isAppleInternal) _Bool appleInternal; // @synthesize appleInternal=_appleInternal;
@property(readonly, nonatomic, getter=isInXCTestRigInsecure) _Bool inXCTestRigInsecure; // @synthesize inXCTestRigInsecure=_inXCTestRigInsecure;
@property(readonly, getter=isInSyncBubble) _Bool inSyncBubble; // @synthesize inSyncBubble=_inSyncBubble;
- (id)debugDescription;
@property(readonly) NSData *HMACSecret;
@property(readonly) NSArray *preferredLocalizations; // @dynamic preferredLocalizations;
@property(readonly) double databaseSaveLatency;
@property(readonly) double databaseSaveInterval;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesUpdateNotificationName;
- (id)databaseUpdateNotificationName;
- (id)darwinNotificationNameForCurrentUser:(id)arg1;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (unsigned int)proxyUIDForUID:(unsigned int)arg1;
@property(readonly, getter=isSimulator) _Bool simulator;
- (id)serviceNameForConnectionType:(unsigned short)arg1;
@property(readonly, nonatomic) _Bool issueSandboxExceptionsIfMayNotMapDatabase;
@property(readonly, nonatomic) _Bool abortIfMayNotMapDatabase;
@property(readonly, nonatomic) _Bool allowsAlternateIcons;
@property _Bool hasServer; // @synthesize hasServer=_hasServer;
- (id)classesWithNameForXCTests:(const char *)arg1;
@property(readonly) NSURL *dbRecoveryFileURL;
@property(readonly) NSURL *dbSentinelFileURL;
@property(readonly) NSURL *identifiersFileURL;
@property(readonly) NSURL *queriedSchemesMapFileURL;
@property(readonly) NSURL *securePeferencesFileURL;
@property(readonly) NSURL *preferencesFileURL;
@property(readonly) NSURL *databaseStoreFileURL;
@property(readonly) unsigned short databaseStoreFileMode;
- (id)userPreferencesURL;
@property(readonly) NSURL *systemGroupContainerURL;
@property(readonly) NSURL *userContainerURL;
@property(readonly) NSURL *systemContainerURL;
@property(readonly) unsigned int currentSchemaVersion;
- (void)dealloc;
- (id)init;

@end

