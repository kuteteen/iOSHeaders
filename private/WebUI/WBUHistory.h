//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSHistory.h"

@interface WBUHistory : WBSHistory
{
}

- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (Class)_historyItemClass;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (id)_createHistoryStore;
- (id)init;

@end

