//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKFidgetResolver : NSObject
{
    double _fidgetThreshold;
    id *_values;
    double *_times;
    unsigned long long _head;
}

@property(nonatomic) double fidgetThreshold; // @synthesize fidgetThreshold=_fidgetThreshold;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1;
- (void)p_advanceHead;
- (void)pushValue:(id)arg1 withTime:(double)arg2;
- (void)pushValue:(id)arg1;
@property(readonly, nonatomic) id nonFidgetValue;
- (void)dealloc;
- (id)init;

@end
