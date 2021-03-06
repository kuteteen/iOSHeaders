//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLModeling.h"

@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLModel : NSObject <MLModeling>
{
    MLModelInterface *_interface;
    MLModelMetadata *_metadata;
    MLModelDescription *_modelDescription;
}

+ (id)modelWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (_Bool)serializeInterfaceAndMetadata:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)predictionFromFeatures:(id)arg1 model:(id)arg2 error:(id *)arg3;
+ (id)batchPredict:(id)arg1 model:(id)arg2 error:(id *)arg3;
+ (id)compileModelAtURL:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(readonly) MLModelMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) MLModelInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (id)description;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)batchPredict:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
- (id)initWithInterface:(id)arg1 metadata:(id)arg2;
- (id)initWithDescription:(id)arg1;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
- (id)initInterfaceAndMetadataWithCompiledArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
- (id)debugQuickLookObject;
- (id)vectorizeInput:(id)arg1 error:(id *)arg2;

@end

