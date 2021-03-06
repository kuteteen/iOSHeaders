//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CLSDataClustering : NSObject
{
    CDUnknownBlockType _distanceBlock;
    NSArray *_numericValueKeypaths;
}

+ (id)clusteringWithNumericValueKeypaths:(id)arg1;
+ (id)clusteringWithDistanceBlock:(CDUnknownBlockType)arg1;
+ (id)clustering;
@property(readonly, nonatomic) NSArray *numericValueKeypaths; // @synthesize numericValueKeypaths=_numericValueKeypaths;
@property(readonly, copy, nonatomic) CDUnknownBlockType distanceBlock; // @synthesize distanceBlock=_distanceBlock;
- (void).cxx_destruct;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)freeDistancesMatrix:(double **)arg1 forDataset:(id)arg2;
- (id)initWithNumericValueKeypaths:(id)arg1;
- (id)initWithDistanceBlock:(CDUnknownBlockType)arg1;
- (double **)createDistancesMatrixForDataset:(id)arg1;

@end

