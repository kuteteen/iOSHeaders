//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCVirtualTTYDeviceDelegate.h"

@class AVCVirtualTTYDevice, NSObject<OS_dispatch_queue>, NSString, TTYConversation, TUCall;

@interface TTYCall : NSObject <AVCVirtualTTYDeviceDelegate>
{
    NSObject<OS_dispatch_queue> *_callQueue;
    id <TTYCallDelegate> _delegate;
    TTYConversation *_conversation;
    TUCall *_call;
    AVCVirtualTTYDevice *_ttyDevice;
}

@property(retain, nonatomic) AVCVirtualTTYDevice *ttyDevice; // @synthesize ttyDevice=_ttyDevice;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(retain, nonatomic) TTYConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) id <TTYCallDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)deviceDidStop:(id)arg1;
- (void)device:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)sendCharacter:(unsigned short)arg1;
- (void)stop;
- (void)start;
- (void)recreateTTYDevice:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)mediaServerDied;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)registerNotifications;
- (void)dealloc;
- (id)initWithCall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

