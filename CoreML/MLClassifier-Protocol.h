//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreML/MLModeling-Protocol.h>

@class MLClassifierResult, MLPredictionOptions, NSArray;
@protocol MLFeatureProvider;

@protocol MLClassifier <MLModeling>
- (MLClassifierResult *)classify:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (NSArray *)classLabels;
@end

