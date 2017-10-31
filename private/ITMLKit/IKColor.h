//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, UIColor;

@interface IKColor : NSObject <NSCopying>
{
    UIColor *_color;
    NSArray *_gradientColors;
    long long _colorType;
    long long _gradientType;
    long long _gradientDirectionType;
    NSString *_colorMapKey;
    NSArray *_gradientPoints;
}

+ (id)colorMap;
+ (void)registerColorNameMap:(id)arg1;
@property(nonatomic) long long gradientDirectionType; // @synthesize gradientDirectionType=_gradientDirectionType;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(readonly, copy, nonatomic) NSArray *gradientPoints; // @synthesize gradientPoints=_gradientPoints;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(copy, nonatomic) NSString *colorMapKey; // @synthesize colorMapKey=_colorMapKey;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)setGradientColors:(id)arg1 andPoints:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithColor:(id)arg1;
- (id)initWithColorMapKey:(id)arg1;

@end

