//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray, NSMutableArray, NSMutableDictionary;

@interface CNFavorites : NSObject
{
    NSMutableArray *_entries;
    _Bool _dirty;
    _Bool _postCount;
    _Bool _needsReload;
    CNContactStore *_store;
    NSMutableDictionary *_uidToEntry;
}

+ (id)favoritesPath;
+ (void)flushSingleton;
+ (id)sharedInstance;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool postCount; // @synthesize postCount=_postCount;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSMutableDictionary *uidToEntry; // @synthesize uidToEntry=_uidToEntry;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (_Bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;
- (void)_delayedLookup;
- (void)recacheIdentitiesSoon;
- (void)save;
- (_Bool)_writeFavoritesToFile:(id)arg1;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)addEntry:(id)arg1;
- (void)_entriesChangedExternally;
- (void)_postChangeNotification;
- (void)_entryIdentityChanged:(id)arg1;
- (void)saveImmediately;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (void)_addEntryToMap:(id)arg1;
- (_Bool)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;
- (_Bool)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;
- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (id)entriesForContact:(id)arg1;
- (id)entriesForContacts:(id)arg1;
@property(readonly, getter=isFull) _Bool full;
- (void)_scheduleSave;
@property(readonly, nonatomic) NSArray *entries;
- (void)loadEntriesIfNecessary;
- (id)_entryDictionaries;
- (id)synchronousRemoteObjectProxyForContactsXPCService;
- (void)clearState;
- (void)dealloc;
- (id)init;
- (id)initWithContactStore:(id)arg1;

@end

