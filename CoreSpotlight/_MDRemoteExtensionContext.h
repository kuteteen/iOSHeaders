//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/_MDExtensionContext.h>

#import <CoreSpotlight/_MDRemoteExtensionContextProtocol-Protocol.h>

@class CSIndexExtensionRequestHandler, NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol>
{
    CSIndexExtensionRequestHandler *_requestHandler;
}

@property(retain, nonatomic) CSIndexExtensionRequestHandler *requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (void)getLastUpdateTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (id)hostContext;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

