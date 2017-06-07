//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding>
{
    _Bool _constrainSize;
    _Bool _flipped;
    _Bool _precisionMode;
    unsigned long long _itemIndex;
    NSArray *_imageComponents;
    double _rotation;
    struct CGPoint _center;
    struct CGVector _velocity;
    struct CGVector _targetVelocity;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) _Bool precisionMode; // @synthesize precisionMode=_precisionMode;
@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property(nonatomic) _Bool constrainSize; // @synthesize constrainSize=_constrainSize;
@property(nonatomic) struct CGVector targetVelocity; // @synthesize targetVelocity=_targetVelocity;
@property(nonatomic) struct CGVector velocity; // @synthesize velocity=_velocity;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic) NSArray *imageComponents; // @synthesize imageComponents=_imageComponents;
@property(nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
