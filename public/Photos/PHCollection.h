//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSDate, NSString;

@interface PHCollection : PHObject
{
    _Bool _customSortAscending;
    int _customSortKey;
    unsigned long long _estimatedPhotosCount;
    unsigned long long _estimatedVideosCount;
    NSDate *_creationDate;
    NSString *_localizedSubtitle;
}

+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
@property(readonly, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;
@property(readonly, nonatomic) unsigned long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
@property(readonly, nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property(readonly, nonatomic) _Bool customSortAscending; // @synthesize customSortAscending=_customSortAscending;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)collectionFixedOrderPriority;
- (_Bool)collectionHasFixedOrder;
@property(readonly, nonatomic) _Bool hasLocationInfo;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (_Bool)canPerformEditOperation:(long long)arg1;
@property(readonly, nonatomic) _Bool canContainCollections;
@property(readonly, nonatomic) _Bool canContainAssets;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

