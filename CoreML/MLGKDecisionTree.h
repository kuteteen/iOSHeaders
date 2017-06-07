//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject
{
    struct TreeEnsembleClassifier *_trc;
    MLTreeEnsembleClassifier *_treeClassifier;
    NSMutableArray *__attributes;
    NSMutableOrderedSet *__objectStore;
}

@property(retain, nonatomic) NSMutableOrderedSet *_objectStore; // @synthesize _objectStore=__objectStore;
@property(retain, nonatomic) NSMutableArray *_attributes; // @synthesize _attributes=__attributes;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2;
- (void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2;
- (_Bool)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2;
- (id)_initWithFlattenedTree:(id)arg1;
- (id)_init;

@end

