//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject
{
    void *_impl;
}

- (void)dealloc;
- (void)loadFactoryReverbPreset:(long long)arg1;
@property(readonly, nonatomic) AVAudioUnitEQFilterParameters *filterParameters;
@property(nonatomic) float level;
@property(nonatomic) _Bool enable;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl *)arg1;
- (id)init;

@end

