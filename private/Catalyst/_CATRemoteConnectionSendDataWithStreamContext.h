//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Catalyst/_CATRemoteConnectionSendContext-Protocol.h>

@class NSData, NSInputStream, NSMutableData, NSString;

@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext>
{
    NSMutableData *mBuffer;
    NSData *mHeaderData;
    unsigned long long mBytesRead;
    NSInputStream *_stream;
    unsigned long long _dataLength;
    unsigned long long _bufferSize;
    id _userInfo;
    unsigned long long _bytesWritten;
}

@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, copy, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (id)bufferedDataWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool hasBytesRemaining;
- (void)dealloc;
- (id)initWithStream:(id)arg1 length:(unsigned long long)arg2 bufferSize:(unsigned long long)arg3 userInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
