//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@class NSArray;

@interface ARCustomTechniquesConfiguration : ARConfiguration
{
    NSArray *_techniques;
}

+ (id)new;
@property(copy, nonatomic) NSArray *techniques; // @synthesize techniques=_techniques;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)configureRecordingTechnique;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (void)setCustomSensors:(id)arg1;
- (id)init;

@end

