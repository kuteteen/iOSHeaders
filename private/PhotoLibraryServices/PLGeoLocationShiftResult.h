//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PLGeoLocationShiftResult : NSObject
{
    NSMutableDictionary *_shiftedLocations;
    NSArray *_shiftedAssetIDs;
    _Bool _encounteredErrors;
}

@property(nonatomic, setter=_setEncounteredErrors:) _Bool encounteredErrors; // @synthesize encounteredErrors=_encounteredErrors;
- (void)_setCoordinate:(CDStruct_c3b9c2ee)arg1 ForAssetID:(id)arg2;
- (struct CLLocationCoordinate2D)shiftedLocationForAssetID:(id)arg1;
- (_Bool)hasShiftedLocationForAssetID:(id)arg1;
@property(readonly, nonatomic) NSArray *assetIDs;
- (void)dealloc;
- (id)initWithAssetIDs:(id)arg1;

@end

