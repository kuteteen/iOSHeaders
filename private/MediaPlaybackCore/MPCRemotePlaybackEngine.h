//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlaybackEngine.h>

@class MPCPlayerPath, NSXPCConnection;

@interface MPCRemotePlaybackEngine : MPCPlaybackEngine
{
    MPCPlayerPath *_playerPath;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)playerPath;
- (void).cxx_destruct;
- (void)_updatePlayerPath;
- (void)setWantsReverseProcessAssertion:(_Bool)arg1;
- (void)becomeActive;
- (void)start;
- (void)dealloc;
- (void)_initializePlaybackStack;

@end

