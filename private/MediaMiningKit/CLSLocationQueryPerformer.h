//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSQueryPerformerProtocol.h"

@class NSArray, NSString;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol>
{
    id <GEOMapServiceTicket> _ticket;
    NSArray *_geoLocations;
    NSArray *_regions;
    _Bool _isCancelled;
    double _precision;
    CDStruct_dd9df0da _statitics;
}

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
@property(nonatomic) double precision; // @synthesize precision=_precision;
@property(nonatomic) CDStruct_dd9df0da statistics; // @synthesize statistics=_statitics;
- (void).cxx_destruct;
- (_Bool)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
@property(readonly) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)cacheItems:(id)arg1;
- (id)regions;
- (id)initWithRegions:(id)arg1 precision:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

