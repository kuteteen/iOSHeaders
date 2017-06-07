//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface NLArcSegmentLayer : CAShapeLayer
{
    double _radius;
    long long _numberOfSegments;
    double _arcLineWidth;
    double _percentageFull;
}

@property(nonatomic) double percentageFull; // @synthesize percentageFull=_percentageFull;
@property(nonatomic) double arcLineWidth; // @synthesize arcLineWidth=_arcLineWidth;
@property(nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)actionForKey:(id)arg1;
- (void)_regeneratePath;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;

@end
