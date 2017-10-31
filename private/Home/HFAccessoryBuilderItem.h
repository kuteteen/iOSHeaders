//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "HFItemBuilderItem.h"
#import "HFServiceLikeItem.h"

@class HFAccessoryBuilder, HFItem<HFServiceLikeItem>, NSString;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>
{
    HFAccessoryBuilder *_accessoryBuilder;
    HFItem<HFServiceLikeItem> *_accessoryItem;
}

@property(retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem; // @synthesize accessoryItem=_accessoryItem;
@property(retain, nonatomic) HFAccessoryBuilder *accessoryBuilder; // @synthesize accessoryBuilder=_accessoryBuilder;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)accessories;
- (id)services;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

