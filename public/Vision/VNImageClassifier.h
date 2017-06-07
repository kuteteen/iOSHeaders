//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNImageClassifier : NSObject
{
}

+ (id)classifyImageHierarchicallyWithDescriptors:(const struct ImageDescriptorBufferAbstract *)arg1 usingImageClassifier:(struct ImageClassifierAbstract *)arg2 andHierarchicalClassifier:(struct ImageClassifier_HierarchicalModel *)arg3 andMinConfidenceForClassification:(float)arg4 andMinConfidenceRatioForClassification:(float)arg5 andMaxLabelsToReturn:(int)arg6 outputDebugDictionary:(id)arg7 options:(id)arg8 metalContext:(id)arg9 error:(id *)arg10;
+ (id)classifyImageWithDescriptors:(const struct ImageDescriptorBufferAbstract *)arg1 usingImageClassifier:(struct ImageClassifierAbstract *)arg2 andMinConfidenceForClassification:(float)arg3 outputDebugDictionary:(id)arg4 options:(id)arg5 metalContext:(id)arg6 error:(id *)arg7;
+ (_Bool)computeSoftmaxLabelsAndConfidence:(struct ImageClassifierAbstract *)arg1 andUsingDescriptorBuffer:(struct ImageDescriptorBufferAbstract *)arg2 andPopulateSoftmaxLabelsAndConfidence:(vector_dcc19312 *)arg3 options:(id)arg4 metalContext:(id)arg5 error:(id *)arg6;
+ (_Bool)computeImageDescriptorsWithImage:(id)arg1 regionOfInterest:(struct CGRect)arg2 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract *)arg3 withTileCount:(int)arg4 andScaleImage:(_Bool)arg5 andAugmentationMode:(unsigned int)arg6 andPopulateTheBuffer:(struct ImageDescriptorBufferAbstract *)arg7 debugIntermediatesDumpPath:(id)arg8 outputDebugDictionary:(id)arg9 options:(id)arg10 metalContext:(id)arg11 error:(id *)arg12;

@end
