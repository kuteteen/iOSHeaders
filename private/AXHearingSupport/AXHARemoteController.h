//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUtilities/AXIDCRemoteController.h>

#import <AXHearingSupport/AXHARemoteControllerProtocol-Protocol.h>

@class AXHADispatchTimer, NSString;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol>
{
    _Bool didValidateHIID;
    AXHADispatchTimer *_communicationTimer;
}

@property(retain, nonatomic) AXHADispatchTimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) _Bool didValidateHIID; // @synthesize didValidateHIID;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendDataChunk;
- (_Bool)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1;
- (_Bool)outputStreamReady;
- (void)didCommunicate;
- (void)validatePairedAid;
- (void)closeConnectionWithError:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
