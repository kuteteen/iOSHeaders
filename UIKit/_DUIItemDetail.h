//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class NSArray, _DUIPreview;

@interface _DUIItemDetail : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _scalable;
    _Bool _rotatable;
    double _scale;
    double _rotationAngle;
    _DUIPreview *_preview;
    NSArray *_lastKnownImageComponents;
    struct CGPoint _anchorPoint;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *lastKnownImageComponents; // @synthesize lastKnownImageComponents=_lastKnownImageComponents;
@property(retain, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool rotatable; // @synthesize rotatable=_rotatable;
@property(nonatomic) _Bool scalable; // @synthesize scalable=_scalable;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

