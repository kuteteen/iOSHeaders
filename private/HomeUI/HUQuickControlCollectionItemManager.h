//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemManager.h"

@class HFItem<NSCopying>, HFItemProvider;

@interface HUQuickControlCollectionItemManager : HFItemManager
{
    HFItemProvider *_gridItemProvider;
    HFItem<NSCopying> *_supplementaryItem;
    CDUnknownBlockType _gridItemProviderCreator;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType gridItemProviderCreator; // @synthesize gridItemProviderCreator=_gridItemProviderCreator;
@property(readonly, copy, nonatomic) HFItem<NSCopying> *supplementaryItem; // @synthesize supplementaryItem=_supplementaryItem;
@property(retain, nonatomic) HFItemProvider *gridItemProvider; // @synthesize gridItemProvider=_gridItemProvider;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (_Bool)isGridItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 gridItemProviderCreator:(CDUnknownBlockType)arg2 supplementaryItem:(id)arg3;

@end
