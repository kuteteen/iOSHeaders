//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@class MLFeatureValue;

@interface VNCoreMLFeatureValueObservation : VNObservation
{
    MLFeatureValue *_featureValue;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) MLFeatureValue *featureValue; // @synthesize featureValue=_featureValue;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureValue:(id)arg1;

@end

