//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUSearchResultsValueDelegate-Protocol.h>

@class NSArray, NSSet, NSString, PLPhotoLibrary, PLSearchIndexDateFormatter, PSIDatabase, PSIQuery;
@protocol OS_dispatch_queue, PUSearchResultsDataSourceChangeObserver;

__attribute__((visibility("hidden")))
@interface PUSearchResultsDataSource : NSObject <PUSearchResultsValueDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queryTag;
    unsigned long long _unprocessedSearchResultsCount;
    PSIQuery *_query;
    _Bool _ignorePastResults;
    PLPhotoLibrary *_photoLibrary;
    NSSet *_cachedAllAlbumUUIDs;
    NSSet *_cachedAllMemoryUUIDs;
    NSArray *_results;
    unsigned long long _maxGroupedResultsCount;
    NSArray *_uncommittedResults;
    unsigned long long _uncommittedMaxGroupedResultsCount;
    PLSearchIndexDateFormatter *_dateFormatter;
    unsigned long long _assetFetchIndex;
    // Error parsing type: AB, name: _didMerge
    _Bool _needsAggdSearchLogging;
    id <PUSearchResultsDataSourceChangeObserver> _changeObserver;
    PSIDatabase *_searchIndex;
    double _searchTime;
    unsigned long long _searchResultsCount;
}

@property(nonatomic) unsigned long long searchResultsCount; // @synthesize searchResultsCount=_searchResultsCount;
@property(nonatomic) double searchTime; // @synthesize searchTime=_searchTime;
@property(nonatomic) _Bool needsAggdSearchLogging; // @synthesize needsAggdSearchLogging=_needsAggdSearchLogging;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(nonatomic) __weak id <PUSearchResultsDataSourceChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void).cxx_destruct;
- (void)performAggdSearchLogIfNeeded;
- (id)dateFormatter;
- (_Bool)searchIsFinished:(id)arg1;
- (void)cancel;
- (void)_inqCancel;
- (void)mergePendingChanges;
- (_Bool)hasPendingChanges;
- (void)setSearchString:(id)arg1;
- (void)setSearchString:(id)arg1 withWildcardSearch:(_Bool)arg2 andEarlyNotifyOfResults:(CDUnknownBlockType)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)setSearchString:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_asyncFetchAssetsWithQueryTag:(unsigned long long)arg1;
- (void)_inqBackgroundProcessSearchResults:(id)arg1 withTag:(unsigned long long)arg2 searchString:(id)arg3;
- (id)_fetchObjectsWithEntityName:(id)arg1 uuids:(id)arg2;
- (_Bool)_shouldCancel:(unsigned long long)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSearchResults;
- (id)initWithSearchIndex:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

