//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLSlalomRangeMapper : NSObject
{
    NSMutableArray *_originalLengths;
    NSMutableArray *_scaledLengths;
    NSMutableArray *_scaledRegions;
}

- (void)enumerateScaledRegionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;
- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;
- (float)originalTimeForScaledTime:(float)arg1;
- (float)scaledTimeForOriginalTime:(float)arg1;
- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;
- (void)dealloc;
- (id)init;

@end

