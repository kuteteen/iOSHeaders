//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface ARHWFaceDetection : NSObject <NSSecureCoding>
{
    long long _ID;
    double _rollAngleInDegrees;
    long long _detectionOrientation;
    CDStruct_1b6d18a9 _time;
    struct CGRect _boundingBox;
}

+ (id)faceDetectionFromDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(nonatomic) long long detectionOrientation; // @synthesize detectionOrientation=_detectionOrientation;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) double rollAngleInDegrees; // @synthesize rollAngleInDegrees=_rollAngleInDegrees;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (_Bool)isEqualToFaceDetection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

