//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet
{
    NSDate *_addedDate;
}

+ (id)propertiesToFetch;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@property(readonly, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
