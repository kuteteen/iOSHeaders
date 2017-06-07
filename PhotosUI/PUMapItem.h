//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface PUMapItem : NSObject
{
    NSObject<NSCopying> *_itemId;
    CLLocation *_location;
    NSDate *_dateCreated;
}

+ (id)stringForItemId:(id)arg1;
+ (CDUnknownBlockType)mapItemSortingComparatorOldestToNewest;
+ (CDUnknownBlockType)mapItemSortingComparatorNewestToOldest;
@property(copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSObject<NSCopying> *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (long long)_mapItemSortingCompareWithMapItem:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

