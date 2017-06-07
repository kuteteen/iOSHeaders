//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContactMatchSummarizer, CNContactStoreDataSource, CNContactStoreFilter, NSArray, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CNContactStoreSnapshot : NSObject
{
    unsigned long long _contactsCount;
    NSMapTable *_contactsCache;
    NSObject<OS_dispatch_semaphore> *_cacheAccessSemaphore;
    struct _NSRange _currentlyLoadingBackgroundRange;
    NSArray *_sections;
    NSArray *_indexSections;
    CNContactMatchSummarizer *_summarizer;
    NSMutableAttributedString *_emptyExcerptInstanceMarker;
    unsigned long long _lastRequestedIndex;
    CNContactStoreDataSource *_dataSource;
    CNContactStoreFilter *_filter;
    NSMutableDictionary *_contactMatchInfos;
    NSMapTable *_identifiersToIndexPath;
    NSMutableArray *_batchContactIdentifiers;
}

@property(readonly, nonatomic) NSMutableArray *batchContactIdentifiers; // @synthesize batchContactIdentifiers=_batchContactIdentifiers;
@property(readonly, nonatomic) NSMapTable *identifiersToIndexPath; // @synthesize identifiersToIndexPath=_identifiersToIndexPath;
@property(readonly, nonatomic) NSMutableDictionary *contactMatchInfos; // @synthesize contactMatchInfos=_contactMatchInfos;
@property(retain, nonatomic) CNContactStoreFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak CNContactStoreDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *indexSections;
@property(readonly, nonatomic) NSArray *sections;
- (void)prepareAllContacts;
- (void)prepareEnoughContacts;
- (void)_loadAllContacts;
- (void)_generateExcerptsInRange:(struct _NSRange)arg1;
- (void)_loadContactsInRange:(struct _NSRange)arg1 inBackground:(_Bool)arg2;
- (id)_keysToFetch;
- (id)objectIn_contactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOf_contacts;
@property(readonly, nonatomic) NSArray *contacts;
- (id)init;

@end

