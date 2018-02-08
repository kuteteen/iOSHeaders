//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MRProtocolMessageQueueDataSource.h"
#import "MRProtocolMessageQueueDelegate.h"
#import "MSVMessageParserDelegate.h"
#import "NSStreamDelegate.h"

@class MRProtocolMessageQueue, MSVMessageParser, NSInputStream, NSOutputStream, NSRunLoop, NSString;

@interface MRProtocolClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate, MRProtocolMessageQueueDelegate, MRProtocolMessageQueueDataSource>
{
    MSVMessageParser *_parser;
    NSRunLoop *_runLoop;
    MRProtocolMessageQueue *_messageQueue;
    _Bool _disconnected;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    id <MRProtocolClientConnectionDelegate> _delegate;
}

@property(nonatomic) __weak id <MRProtocolClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void).cxx_destruct;
- (void)_closeStream:(id)arg1;
- (void)closeAllStreams;
- (void)_openStream:(id)arg1;
- (void)_notifyDelegateClientDidRecieveMessage:(id)arg1;
- (void)_notifyDelegateClientDidDisconnect;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_disconnectClient;
- (void)_adjustTimestamp:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_parseMessageData:(id)arg1;
- (void)_flush;
- (void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)messageQueue:(id)arg1 dataForMessage:(id)arg2;
- (unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)decryptData:(id)arg1 error:(id *)arg2;
- (id)encryptDataForMessage:(id)arg1;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1;
@property(readonly, nonatomic) _Bool streamsAreValid;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

