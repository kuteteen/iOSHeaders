//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNiOSAddressBook, CNiOSAddressBookDataMapper;

@interface CNContactStore : NSObject
{
}

+ (id)standardLabelsForPropertyWithKey:(id)arg1;
+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (id)internalIdentifierFromContactIdentifier:(id)arg1;
+ (id)storeIdentifierFromContactIdentifier:(id)arg1;
+ (id)contactIdentifierFromInternalIdentifier:(id)arg1;
+ (id)storeInfoClasses;
+ (Class)storeClassWithIdentifier:(id)arg1;
+ (id)storeIdentifier;
+ (id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
+ (id)storeWithOptions:(unsigned long long)arg1;
+ (void)initialize;
+ (_Bool)eraseAllDataAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)eraseAllDataAtLocationWithName:(id)arg1 error:(id *)arg2;
+ (id)contactStoreForPublicAddressBook:(void *)arg1;
+ (id)_contactStoreForPublicAddressBook:(void *)arg1;
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)identifierWithError:(id *)arg1;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)executeFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)defaultContainerIdentifier;
- (_Bool)supportsSaveRequest:(id)arg1;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)_ios_meContactIdentifierWithError:(id *)arg1;
- (id)meContactIdentifierWithError:(id *)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)requestAccessForEntityType:(long long)arg1;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithEnvironment:(id)arg1;
- (id)init;
- (id)synchronousRemoteObjectProxyForContactsXPCService;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
@property(readonly, nonatomic) CNiOSAddressBook *addressBook;
@property(readonly, nonatomic) CNiOSAddressBookDataMapper *iOSMapper;
@property(readonly, nonatomic) _Bool hasMultipleGroupsOrAccounts;
- (_Bool)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)labeledValueFromMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (int)multiValueIdentifierFromLabeledValue:(id)arg1;
- (void *)personFromContact:(id)arg1;
- (id)contactIdentifierFromPersonID:(int)arg1;
- (id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(_Bool)arg3;
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2;
- (id)contactFromPersonID:(int)arg1;
- (id)contactFromPerson:(void *)arg1 mutable:(_Bool)arg2;
- (id)contactFromPerson:(void *)arg1;
- (id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (int)publicMultiValueIdentifierFromLabeledValue:(id)arg1;
- (void *)publicABPersonFromContact:(id)arg1 publicAddressBook:(const void **)arg2;
- (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;
- (id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1;
- (id)_labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3;
- (int)_publicMultiValueIdentifierFromLabeledValue:(id)arg1;
- (void *)_publicABPersonFromContact:(id)arg1 publicAddressBook:(const void **)arg2;
- (id)_contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;

@end

