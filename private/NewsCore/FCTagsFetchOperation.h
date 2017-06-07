//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCAssetManager, FCHeldRecords, FCTagRecordSource, NSArray;
@protocol FCTagsFetchOperationDelegate;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation
{
    _Bool _includeChildren;
    _Bool _overrideParentCachePolicy;
    _Bool _overrideChildrenCachePolicy;
    unsigned long long _parentCachePolicy;
    double _parentMaximumCachedAge;
    unsigned long long _childrenCachePolicy;
    double _childrenMaximumCachedAge;
    NSArray *_tagIDs;
    FCHeldRecords *_heldTagRecords;
    FCHeldRecords *_heldChildTagRecords;
    FCTagRecordSource *_tagRecordSource;
    FCAssetManager *_assetManager;
    id <FCTagsFetchOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <FCTagsFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(retain, nonatomic) FCHeldRecords *heldChildTagRecords; // @synthesize heldChildTagRecords=_heldChildTagRecords;
@property(retain, nonatomic) FCHeldRecords *heldTagRecords; // @synthesize heldTagRecords=_heldTagRecords;
@property(copy, nonatomic) NSArray *tagIDs; // @synthesize tagIDs=_tagIDs;
@property double childrenMaximumCachedAge; // @synthesize childrenMaximumCachedAge=_childrenMaximumCachedAge;
@property unsigned long long childrenCachePolicy; // @synthesize childrenCachePolicy=_childrenCachePolicy;
@property _Bool overrideChildrenCachePolicy; // @synthesize overrideChildrenCachePolicy=_overrideChildrenCachePolicy;
@property double parentMaximumCachedAge; // @synthesize parentMaximumCachedAge=_parentMaximumCachedAge;
@property unsigned long long parentCachePolicy; // @synthesize parentCachePolicy=_parentCachePolicy;
@property _Bool overrideParentCachePolicy; // @synthesize overrideParentCachePolicy=_overrideParentCachePolicy;
@property(nonatomic) _Bool includeChildren; // @synthesize includeChildren=_includeChildren;
- (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)fetchChildTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 assetManager:(id)arg3 delegate:(id)arg4;

@end
