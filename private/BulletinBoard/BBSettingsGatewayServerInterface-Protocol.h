//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBSectionInfo, NSArray, NSDate, NSSet, NSString;

@protocol BBSettingsGatewayServerInterface <NSObject>
- (void)requestQuietModeOverrideAssertionWithCompletion:(void (^)(BSAction *))arg1;
- (void)getSectionOrderRuleWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(_Bool)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(_Bool)arg1;
- (void)setActiveBehaviorOverrideTypesChangeAssertionCountUpdatesEnabled:(_Bool)arg1;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(NSString *)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(NSDate *)arg2 source:(unsigned long long)arg3;
- (void)setBehaviorOverrides:(NSArray *)arg1 source:(unsigned long long)arg2;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2 withHandler:(void (^)(void))arg3;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2;
- (void)setOrderedSectionIDs:(NSArray *)arg1;
- (void)setSectionOrderRule:(long long)arg1;
- (void)getBehaviorOverridesEnabledAndEffectiveDateWithHandler:(void (^)(long long, NSDate *))arg1;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getPrivilegedSenderTypesWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getBehaviorOverridesEnabledWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getBehaviorOverridesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionInfoForSectionIDs:(NSSet *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)getSectionInfoForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionInfo *))arg2;
- (void)getSectionInfoForActiveSectionsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionInfoWithHandler:(void (^)(NSArray *, NSError *))arg1;
@end
