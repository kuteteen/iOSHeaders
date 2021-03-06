//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface WLKSettingsStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    _Bool _privateModeEnabled;
    _Bool _sportsScoreSpoilersAllowed;
    NSString *_pushToken;
    NSString *_accountID;
    NSNumber *_optedInVal;
    _Bool _optedIn;
    _Bool _migratediOS;
    _Bool _migratedtvOS;
    NSMutableArray *_apps;
    int _didChangeNotificationToken;
    NSXPCConnection *_connection;
    _Bool _hasOutstandingChanges;
    int _ignoreChangesCount;
    NSDate *_lastSyncDate;
    NSDate *_lastSyncToCloudDate;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)sharedSettings;
@property _Bool hasOutstandingChanges; // @synthesize hasOutstandingChanges=_hasOutstandingChanges;
@property int ignoreChangesCount; // @synthesize ignoreChangesCount=_ignoreChangesCount;
@property(readonly, copy, nonatomic) NSDate *lastSyncToCloudDate; // @synthesize lastSyncToCloudDate=_lastSyncToCloudDate;
@property(readonly, copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(retain, nonatomic) NSNumber *optedInVal; // @synthesize optedInVal=_optedInVal;
- (void).cxx_destruct;
- (id)_connection;
- (void)endIgnoringChanges;
- (void)beginIgnoringChanges;
- (void)_tickleKVO;
- (void)_removeWatchListApp:(id)arg1;
- (id)_appsForChannelID:(id)arg1;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)_updateDisplayNamesForUI:(CDUnknownBlockType)arg1;
- (void)_attemptCullingOfObsoleteApp:(id)arg1;
- (_Bool)synchronize:(unsigned long long)arg1;
- (void)synchronize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceUpdate;
- (id)_supportPath;
- (void)_dictionaryOnDisk:(CDUnknownBlockType)arg1;
- (void)_writeToDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryOnDisk;
- (void)_writeToDisk;
- (void)_readFromDisk;
- (id)_dictionaryRepresentationDataOnly;
- (id)_dictionaryRepresentation;
- (void)refresh;
- (id)description;
@property(retain, nonatomic) NSString *pushToken;
- (void)setLastSyncToCloudDate:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
@property(nonatomic) _Bool migratedtvOS;
@property(nonatomic) _Bool migratediOS;
@property(nonatomic) _Bool optedIn;
@property(nonatomic) _Bool sportsScoreSpoilersAllowed;
@property(nonatomic) _Bool privateModeEnabled;
- (void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (void)setStatus:(unsigned long long)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (id)settingsForChannelID:(id)arg1 externalID:(id)arg2;
- (id)deniedBrands;
- (id)consentedBrands;
- (id)watchListAppsFiltered;
- (id)watchListApps;
- (void)dealloc;
- (id)init;

@end

