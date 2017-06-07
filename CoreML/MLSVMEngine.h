//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSArray;

@interface MLSVMEngine : NSObject <MLModelSpecificationLoader>
{
    _Bool _freeModelOnDealloc;
    _Bool _isInputSizeLowerBoundOnly;
    struct svm_model *_model;
    unsigned long long _inputSize;
    NSArray *_classLabels;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property unsigned long long inputSize; // @synthesize inputSize=_inputSize;
@property _Bool isInputSizeLowerBoundOnly; // @synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly;
@property _Bool freeModelOnDealloc; // @synthesize freeModelOnDealloc=_freeModelOnDealloc;
@property struct svm_model *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)predictProbabilities:(id)arg1 probabilities:(double *)arg2;
- (_Bool)hasProbabilityPredictionEnabled;
- (id)predict:(id)arg1;
- (void)deallocSVMNodeVector:(struct svm_node *)arg1;
- (void)fillSVMNodeVector:(struct svm_node *)arg1 values:(double *)arg2 count:(unsigned long long)arg3;
- (struct svm_node *)allocSVMNodeVector:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfClasses;
- (void)dealloc;
- (id)initWithSVMModel:(struct svm_model *)arg1 freeOnDealloc:(_Bool)arg2 isInputSizeLowerBoundOnly:(_Bool)arg3 inputSize:(unsigned long long)arg4 classLabels:(id)arg5;
- (id)initWithLibSVMFile:(id)arg1 classLabels:(id)arg2;

@end

