//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreML/MLRegressor.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@interface MLGLMRegression : MLRegressor <MLModelSpecificationLoader>
{
    struct vector<double, std::__1::allocator<double>> intercept;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> weights;
    int postEvalTransForm;
    struct shared_ptr<CoreML::Specification::Model> m_spec;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithLRSpec:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;

@end

