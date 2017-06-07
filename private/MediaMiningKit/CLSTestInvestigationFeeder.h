//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder
{
    NSArray *_items;
}

- (void).cxx_destruct;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)endDateComponents;
- (id)startDateComponents;
- (unsigned long long)numberOfItems;
- (id)initWithItems:(id)arg1;

@end
