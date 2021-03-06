//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _AUStaticParameterInfo : NSObject <NSSecureCoding>
{
    float _minValue;
    float _maxValue;
    unsigned int _unit;
    unsigned int _flags;
    unsigned int _clumpID;
    NSString *_unitName;
    NSArray *_valueStrings;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int clumpID; // @synthesize clumpID=_clumpID;
@property(retain, nonatomic) NSArray *valueStrings; // @synthesize valueStrings=_valueStrings;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *unitName; // @synthesize unitName=_unitName;
@property(nonatomic) unsigned int unit; // @synthesize unit=_unit;
@property(nonatomic) float maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) float minValue; // @synthesize minValue=_minValue;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

