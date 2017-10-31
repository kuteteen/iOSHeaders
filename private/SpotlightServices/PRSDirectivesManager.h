//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableIndexSet, PRSL2FeatureVectorProcessingContext;

@interface PRSDirectivesManager : NSObject
{
    int indexOfAsIs;
    int indexOfAsIsRange;
    int indexOfReplaceIf;
    int indexOfReplaceThenMin;
    int indexOfIsPopulated;
    int indexOfIdMapping;
    int indexOfResultSetIdMapping;
    int indexOfResultSetIdScoreMapping;
    int indexOfValueIfNotExist;
    int indexOfOneSidedInverse;
    int indexOfQuantize;
    int indexOfFanOutValue;
    int sizeOfAsIs;
    int sizeOfAsIsRange;
    int sizeOfReplaceIf;
    int sizeOfReplaceThenMin;
    int sizeOfIsPopulated;
    int sizeOfIdMapping;
    int sizeOfResultSetIdMapping;
    int sizeOfResultSetIdScoreMapping;
    int sizeOfValueIfNotExist;
    int sizeOfOneSidedInverse;
    int sizeOfQuantize;
    int sizeOfFanOutValue;
    struct _as_is {
        unsigned long long _field1;
        unsigned long long _field2;
    } *directive_as_is;
    struct _as_is_range {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned long long _field3;
    } *directive_as_is_range;
    struct _replace_if {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3[2];
        float _field4[2];
        unsigned long long _field5;
    } *directive_replace_if;
    struct _replace_then_min {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3[5];
        float _field4[5];
        float _field5;
        unsigned long long _field6;
    } *directive_replace_then_min;
    struct _value_if_not_exist {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3;
    } *directive_value_if_not_exist;
    struct _is_populated {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3[5];
        float _field4[5];
        unsigned long long _field5;
    } *directive_is_populated;
    struct _id_mapping {
        unsigned long long _field1;
        unsigned long long _field2;
        CDUnion_fc2819da _field3;
        char *_field4;
    } *directive_id_mapping;
    struct _resultset_id_mapping {
        unsigned long long _field1;
        unsigned long long _field2;
        CDUnion_fc2819da _field3;
        char *_field4;
        float *_field5;
    } *directive_resultset_id_mapping;
    struct _resultset_id_score_mapping {
        unsigned long long _field1;
        unsigned long long _field2;
        CDUnion_fc2819da _field3;
        struct __CFDictionary *_field4;
        char *_field5;
        float *_field6;
    } *directive_resultset_id_score_mapping;
    struct _one_sided_inverse {
        unsigned long long _field1;
        unsigned long long _field2;
    } *directive_one_sided_inverse;
    struct _quantize {
        unsigned long long _field1;
        unsigned long long _field2;
        float *_field3;
        unsigned long long _field4;
    } *directive_quantize;
    struct fan_out_value *directive_fan_out;
    struct _local_resultset_id_values_mapping {
        unsigned long long start_idx;
        unsigned long long end_idx;
        struct __CFDictionary *mapping;
        unsigned long long numPRSRankingBundleFeatures;
        unsigned long long *PRSRankingBundleFeatureOrder;
        float *score_vector;
        unsigned long long mapSize;
    } directive_local_resultset_id_values_mapping;
    struct _parsec_resultset_id_values_mapping {
        unsigned long long start_idx;
        unsigned long long end_idx;
        unsigned long long numFeatures;
        struct __CFDictionary *mapping;
        float *score_vector;
        unsigned long long mapSize;
    } directive_parsec_resultset_id_values_mapping;
    NSMutableIndexSet *disabledFeatureIndices;
    NSMutableDictionary *mapInflatedIndexToSize;
    PRSL2FeatureVectorProcessingContext *_processingContext;
    double _weightX;
    double _weightY;
}

+ (id)descriptorsForModelInputScore;
@property(nonatomic) double weightY; // @synthesize weightY=_weightY;
@property(nonatomic) double weightX; // @synthesize weightX=_weightX;
@property(retain, nonatomic) PRSL2FeatureVectorProcessingContext *processingContext; // @synthesize processingContext=_processingContext;
- (void).cxx_destruct;
- (float)processOutput:(float)arg1;
- (void)processL2FeatureVector:(id)arg1 populatingValues:(float *)arg2 useExperimental:(_Bool)arg3 scoreValue:(char *)arg4 count:(int)arg5;
- (void)processFeatureVector:(id)arg1 featureValues:(float *)arg2 maxCount:(unsigned long long)arg3 useExperimental:(_Bool)arg4;
- (void)cleanup;
- (void)processResultSetValuesWithMap:(id)arg1 serverFeatures:(id)arg2;
- (void)processDirectives:(id)arg1 isL2:(_Bool)arg2;
- (unsigned long long)getDirectiveTypeFromString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

