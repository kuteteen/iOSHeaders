//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@interface VNHorizonObservation : VNObservation
{
    struct CGAffineTransform _transform;
    double _angle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

