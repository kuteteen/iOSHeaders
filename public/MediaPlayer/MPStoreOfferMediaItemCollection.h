//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItemCollection.h>

@class MPMediaQuery, MPStoreCompletionOfferResponse, MPStoreOfferContentRating, NSArray;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection
{
    MPStoreCompletionOfferResponse *_storeOfferResponse;
    NSArray *_unmergedStoreMediaItems;
    MPMediaQuery *_localItemsQuery;
    MPMediaItemCollection *_localCollection;
    _Bool _hasHiddenRestrictedContent;
    long long _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_collectionContentRating;
}

+ (id)defaultPropertyValues;
+ (_Bool)supportsSecureCoding;
+ (id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1;
+ (long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
- (void).cxx_destruct;
- (void)_loadLocalCollection;
- (id)_lookupOfferDictionaries;
- (_Bool)hasPurchasableStoreOfferItemsForVariant:(long long)arg1;
- (_Bool)hasDownloadableStoreOfferItemsForVariant:(long long)arg1;
- (_Bool)_hasRestrictedContent;
@property(readonly, nonatomic) _Bool isCollectionOfferPresentable;
- (_Bool)isCheaperToPurchaseIndividualItems;
@property(readonly, nonatomic) NSArray *itemsByRemovingLocalItems;
- (long long)countOfItemsByRemovingLocalItems;
@property(readonly, nonatomic) NSArray *itemsByRemovingStoreOffers;
- (id)buyOfferForVariant:(long long)arg1;
- (_Bool)_offeredItemAlreadyExists;
- (id)title;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (unsigned long long)persistentID;
- (id)mediaLibrary;
- (long long)preferredStoreOfferVariant;
- (_Bool)isDownloadable;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4;
- (_Bool)_checkIsUsableOffer;

// Remaining properties
@property(readonly, nonatomic) NSArray *items; // @dynamic items;

@end

