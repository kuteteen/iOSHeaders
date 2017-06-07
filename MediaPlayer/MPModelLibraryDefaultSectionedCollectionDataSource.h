//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPLazySectionedCollectionDataSource-Protocol.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>
{
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    MPModelLibraryRequest *_request;
    shared_ptr_8b9a1f72 _itemIdentifierQueryResults;
    shared_ptr_274c5e8b _itemQueryResults;
}

@property(readonly, nonatomic) shared_ptr_274c5e8b itemQueryResults; // @synthesize itemQueryResults=_itemQueryResults;
@property(readonly, nonatomic) shared_ptr_8b9a1f72 itemIdentifierQueryResults; // @synthesize itemIdentifierQueryResults=_itemIdentifierQueryResults;
@property(readonly, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_usesSections;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (struct _NSRange)optionalSectionIndexTitlesRange;
- (id)sectionIndexTitles;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)hasSameContentAsDataSource:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithRequest:(id)arg1 itemQueryResults:(shared_ptr_274c5e8b)arg2 itemIdentifierQueryResults:(shared_ptr_8b9a1f72)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

