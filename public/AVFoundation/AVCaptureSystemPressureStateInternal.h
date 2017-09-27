//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFrameRateRange, NSString;

@interface AVCaptureSystemPressureStateInternal : NSObject
{
    NSString *_level;
    unsigned long long _factors;
    AVFrameRateRange *_recommendedFrameRateRangeForPortrait;
}

@property(readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;
@property(readonly) unsigned long long factors;
@property(readonly) NSString *level;
- (void)dealloc;
- (id)initWithLevel:(id)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;

@end

