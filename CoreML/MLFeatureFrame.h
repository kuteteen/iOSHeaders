//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureFrame-Protocol.h>

@class NSDictionary;

@interface MLFeatureFrame : NSObject <MLFeatureFrame>
{
}

+ (id)featureFrameFromFeatureDictionary:(id)arg1 frameDescription:(id)arg2 error:(id *)arg3;
+ (id)featureFrameFromFeatureArrayMap:(id)arg1 frameDescription:(id)arg2 error:(id *)arg3;
+ (id)featureFrameFromDictionary:(id)arg1 error:(id *)arg2;
- (id)featureFrameByAddingFrame:(id)arg1 error:(id *)arg2;
- (id)subsetWithFeaturesNamed:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *description;
@property(readonly) unsigned long long sampleCount;
@property(readonly) unsigned long long featureCount;
- (id)featureFrameByAddingFeatureArray:(id)arg1 featureDescription:(id)arg2 error:(id *)arg3;

@end

