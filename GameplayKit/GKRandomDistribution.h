//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKRandom-Protocol.h>

@protocol GKRandom;

@interface GKRandomDistribution : NSObject <GKRandom>
{
    id <GKRandom> _source;
    long long _lowest;
    long long _highest;
}

+ (id)d20;
+ (id)d6;
+ (id)distributionForDieWithSideCount:(long long)arg1;
+ (id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2;
@property(readonly, nonatomic) long long highestValue; // @synthesize highestValue=_highest;
@property(readonly, nonatomic) long long lowestValue; // @synthesize lowestValue=_lowest;
- (void).cxx_destruct;
- (_Bool)nextBool;
- (float)nextUniform;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (long long)nextInt;
@property(readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (id)init;

@end

