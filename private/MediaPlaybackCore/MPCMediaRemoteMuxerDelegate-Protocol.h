//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPCMediaRemoteMuxer, MPRemoteCommandCenter;

@protocol MPCMediaRemoteMuxerDelegate <NSObject>
- (void)updateSupportedCommandsForCommandCenter:(MPRemoteCommandCenter *)arg1 muxer:(MPCMediaRemoteMuxer *)arg2 action:(SEL)arg3;
@end

