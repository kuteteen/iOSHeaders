//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMNumberRange : NSObject
{
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

+ (id)numberRangeWithMinValue:(id)arg1 maxValue:(id)arg2;
+ (id)numberRangeWithMinValue:(id)arg1;
+ (id)numberRangeWithMaxValue:(id)arg1;
@property(readonly, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2;

@end

