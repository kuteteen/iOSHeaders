//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class _HMAudioControl;

@protocol _HMAudioControlDelegate <NSObject>
- (void)audioControl:(_HMAudioControl *)arg1 didUpdateMuted:(_Bool)arg2;
- (void)audioControl:(_HMAudioControl *)arg1 didUpdateVolume:(float)arg2;
@end

