//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

#import <UIKit/NSFastEnumeration-Protocol.h>

@class NSHashTable, NSMutableArray;

@interface _UISettingsGroup : _UISettings <NSFastEnumeration>
{
    NSMutableArray *_internal_group;
    NSHashTable *_internal_groupObservers;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_sendMove:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)_sendRemove:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_sendInsert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)_stopObservingPropertiesAndChildren;
- (void)_startObservingPropertiesAndChildren;
- (_Bool)_hasObservers;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
- (id)archiveDictionary;
- (void)removeGroupObserver:(id)arg1;
- (void)addGroupObserver:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)enumerateSettingsUsingBlock:(CDUnknownBlockType)arg1;
- (void)moveSettingsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveSettings:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeSettingsAtIndex:(unsigned long long)arg1;
- (void)removeSettings:(id)arg1;
- (void)insertSettings:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSettings:(id)arg1;
- (unsigned long long)indexOfSettings:(id)arg1;
- (_Bool)containsSettings:(id)arg1;
- (id)settingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (id)_startInit;

@end

