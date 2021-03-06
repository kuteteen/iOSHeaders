//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore, NSArray, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSSet;

@interface CalendarEventLoader : NSObject
{
    EKEventStore *_store;
    NSObject<OS_dispatch_queue> *_occurrencesLock;
    NSArray *_loadedOccurrences;
    NSArray *_loadedProposedTimeOccurrences;
    NSMutableSet *_occurrencesAwaitingRefresh;
    NSMutableSet *_occurrencesAwaitingDeletion;
    NSSet *_selectedCalendars;
    unsigned int _daysOfPadding;
    unsigned int _maxDaysToCache;
    unsigned long long _componentForExpandingRequests;
    unsigned long long _componentForExpandingPadding;
    double _preferredReloadStart;
    double _preferredReloadEnd;
    NSObject<OS_dispatch_group> *_loadGroup;
    NSObject<OS_dispatch_queue> *_loadQueue;
    int _cancelSeed;
    double _loadedStart;
    double _loadedEnd;
    _Bool _loadedOccurrencesAreStale;
    double _currentlyLoadingStart;
    double _currentlyLoadingEnd;
    double _lastRequestedStart;
    double _lastRequestedEnd;
    id <CalendarEventLoaderDelegate> _delegate;
}

@property(nonatomic) __weak id <CalendarEventLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_getLoadStart:(double *)arg1 end:(double *)arg2 fromLoadedStart:(double)arg3 loadedEnd:(double)arg4 currentlyLoadingStart:(double)arg5 currentlyLoadingEnd:(double)arg6;
- (void)_getStart:(double)arg1 end:(double)arg2 paddedByDays:(int)arg3 inTimeZone:(id)arg4 resultStart:(double *)arg5 resultEnd:(double *)arg6;
- (void)_getStart:(double)arg1 end:(double)arg2 expandedToComponents:(unsigned long long)arg3 withResultStart:(double *)arg4 resultEnd:(double *)arg5;
- (void)_pruneLoadedOccurrences;
- (void)_reload;
- (void)cancelAllLoads;
- (void)_enqueueLoadForRangeStart:(double)arg1 end:(double)arg2;
- (id)_uniqueEventsFromArray:(id)arg1;
- (void)_loadIfNeededBetweenStart:(double)arg1 end:(double)arg2 loadPaddingNow:(_Bool)arg3;
- (void)loadIfNeeded;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(_Bool)arg3 waitForLoad:(_Bool)arg4;
- (void)waitForBackgroundLoad;
- (void)_eventStoreChanged:(id)arg1;
- (void)timeZoneChanged;
- (_Bool)loadIsComplete;
- (void)setSelectedCalendars:(id)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setCacheLimit:(unsigned int)arg1;
- (void)setPadding:(unsigned int)arg1;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1;

@end

