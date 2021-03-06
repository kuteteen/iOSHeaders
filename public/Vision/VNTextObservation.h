//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNDetectedObjectObservation.h>

@class NSArray, NSString;

@interface VNTextObservation : VNDetectedObjectObservation
{
    NSArray *_characterBoxes;
    NSString *_text;
}

+ (_Bool)supportsSecureCoding;
+ (id)textObservationWithBoundingBox:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
@property(readonly, copy, nonatomic) NSString *text;
- (void)setCharacterBoxes:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *characterBoxes;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

