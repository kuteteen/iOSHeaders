//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRPasscodeCredentials, NSArray, NSData, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, _MRDeviceInfoMessageProtobuf;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession
{
    MRPasscodeCredentials *_credentials;
    struct PairingSessionPrivate *_pairingSession;
    CDStruct_1af33fde _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasExchangedMessage;
    unsigned int _pairingFlags;
    unsigned long long _state;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property(retain, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property(retain, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property(retain, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property(retain, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property(nonatomic) unsigned int pairingFlags; // @synthesize pairingFlags=_pairingFlags;
@property(readonly, nonatomic) _Bool hasExchangedMessage; // @synthesize hasExchangedMessage=_hasExchangedMessage;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_onQueueDeriveEncryptionKeys;
- (void)_handleSetupExchangeComplete;
- (void)_delegateDidEnterPasscode:(id)arg1;
- (id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id *)arg2;
- (id)_onQueueInitializePairingSessionWithState:(unsigned long long)arg1;
- (void)_handlePairingCompleteWithError:(id)arg1;
- (void)_handlePairingFailureWithError:(id)arg1;
- (int)_promptForSetupCodeWithDelay:(double)arg1;
- (void)_hideSetupCode;
- (int)_displaySetupCode:(id)arg1;
- (id)_generateSetupCodeWithMaximumLength:(unsigned long long)arg1;
- (id)extendedPeerInfo;
- (void *)_createDeviceFromPeer:(id)arg1;
- (id)_createPeerDeviceFromPeer:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *mediaRemotePairedDevices;
@property(readonly, nonatomic) NSArray *pairedPeerDevices;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *pairedPeerDevice;
@property(readonly, nonatomic) NSString *peerIdentifier;
- (id)updatePeer;
- (id)removePeer;
- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;
- (void)retry;
- (_Bool)shouldAutoRetry;
- (_Bool)shouldAutoRetryPairingExchange:(id)arg1;
- (void)openInState:(unsigned long long)arg1;
- (_Bool)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)open;
- (id)pairedDevices;
- (_Bool)isPaired;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;

@end

