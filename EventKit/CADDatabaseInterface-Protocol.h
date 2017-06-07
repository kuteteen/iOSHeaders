//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;

@protocol CADDatabaseInterface
- (void)CADDatabaseSetAutomaticLocationGeocodingAllowed:(_Bool)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseIsAutomaticLocationGeocodingAllowed:(void (^)(int, _Bool))arg1;
- (void)CADDatabaseCanModifyCalendarDatabase:(void (^)(int, _Bool))arg1;
- (void)CADDatabaseResetWithReply:(void (^)(int))arg1;
- (void)CADDatabaseRollbackWithReply:(void (^)(int))arg1;
- (void)CADDatabaseCommitWithReply:(void (^)(int, _Bool, NSDictionary *))arg1;
- (void)CADDatabaseSaveWithReply:(void (^)(int))arg1;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(void (^)(int))arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseImportICSData:(NSData *)arg1 intoCalendarWithID:(int)arg2 optionsMask:(unsigned long long)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseSetSourceAccountManagement:(int)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseGetNextAssignableColorWithReply:(void (^)(int, NSString *))arg1;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(void (^)(int, _Bool, NSArray *, double))arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(void (^)(int, NSDictionary *))arg2;
- (void)CADDatabaseGetSequenceNumber:(void (^)(int, int))arg1;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(void (^)(int, _Bool, long long, NSArray *, NSArray *, NSArray *))arg2;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(void (^)(int))arg1;
- (void)CADDatabaseGetUUID:(void (^)(int, NSString *))arg1;
- (void)CADDatabaseSetInitializationOptions:(int)arg1 reply:(void (^)(int))arg2;
@end

