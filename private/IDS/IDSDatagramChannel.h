//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSDataChannelLinkContext, NSArray, _IDSDatagramChannel;

@interface IDSDatagramChannel : NSObject
{
    _IDSDatagramChannel *_internal;
}

- (void).cxx_destruct;
- (void)optoutStreamIDs:(id)arg1;
- (void)optinStreamIDs:(id)arg1;
- (unsigned short)generateMetadata:(char *)arg1 maxSize:(unsigned long long)arg2 withDatagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_d008d4b8 *)arg4;
- (void)setChannelPreferences:(id)arg1;
- (void)_setNeedEncryptionInfoPreference:(_Bool)arg1;
- (void)sendMetadata;
- (void)readyToRead;
- (void)setReadHandlerWithOptions:(CDUnknownBlockType)arg1;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_d008d4b8 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_54fea20c)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_d008d4b8 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)writeDatagrams:(const void **)arg1 datagramSizes:(unsigned int *)arg2 datagramInfo:(CDStruct_54fea20c)arg3 datagramCount:(int)arg4 options:(CDStruct_d008d4b8 *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)start;
- (void)invalidate;
- (void)close;
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processMetadataForDatagram:(char *)arg1 size:(unsigned long long)arg2 datagramInfo:(CDStruct_54fea20c *)arg3 options:(CDStruct_d008d4b8 *)arg4;
- (void)sendMediaMembershipChangedInfo:(unsigned char)arg1;
- (void)sendMediaEncryptionInfoWithMKM:(id)arg1 MKS:(id)arg2 MKI:(unsigned int)arg3;
- (void)selectDefaultLink:(BOOL)arg1;
- (void)addNewIDSDataChannelLinkWithAttributes:(char *)arg1 linkAttributesLength:(unsigned short)arg2;
- (void)removeIDSDataChannelLinkContext:(BOOL)arg1 linkUUID:(id)arg2;
- (void)sendEventConnectedWithDummyLinkInfo;
- (int)underlyingFileDescriptor;
- (void)_logReceivingStats:(unsigned long long)arg1;
- (void)_logSendingStats:(unsigned long long)arg1;
- (id)description;
- (void)dealloc;
- (id)cachedMetadata;
- (id)initWithDestination:(id)arg1;
- (id)initWithSocketDescriptor:(int)arg1;
@property(readonly) IDSDataChannelLinkContext *defaultLink;
@property(readonly) NSArray *connectedLinks;

@end

