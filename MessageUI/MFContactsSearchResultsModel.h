//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/_MFSearchResultsConsumer-Protocol.h>

@class NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface MFContactsSearchResultsModel : NSObject <_MFSearchResultsConsumer>
{
    NSOperationQueue *_queue;
    NSArray *_recentSearchResults;
    NSArray *_infrequentRecentSearchResults;
    NSMutableDictionary *_localSearchResultsByAddress;
    NSMutableDictionary *_serverSearchResultsByAddress;
    NSMutableDictionary *_recentRecipientsByAddress;
    struct __CFArray *_resultTypesSortOrder;
    struct __CFArray *_resultTypesPriorityOrder;
    struct __CFSet *_finishedResultTypes;
    unsigned long long _preferredType;
    _Bool _favorMobileNumbers;
    int _resetCount;
    NSArray *_enteredRecipients;
}

@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
- (id)_dictionaryForResultType:(unsigned long long)arg1;
- (void)processAddedResultsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(id)arg2 toResults:(id)arg3;
- (void)_addBestRecipientsForRecipients:(id)arg1 excluding:(id)arg2 toArray:(id)arg3;
- (id)_bestRecipientForAddress:(id)arg1 fallback:(id)arg2;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_didFinishSearchForType:(unsigned long long)arg1;
- (_Bool)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;
- (void)_finishSearchOfType:(unsigned long long)arg1;
- (void)addResults:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_addResults:(id)arg1 ofType:(unsigned long long)arg2;
- (_Bool)_isResetting;
- (void)reset;
- (void)dealloc;
- (id)initWithResultTypeSortOrderComparator:(CDUnknownFunctionPointerType)arg1 resultTypePriorityComparator:(CDUnknownFunctionPointerType)arg2 favorMobileNumbers:(_Bool)arg3;
- (id)initWithFavorMobileNumbers:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

