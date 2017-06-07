//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVContentKeySessionInternal, NSData, NSString, NSURL;
@protocol AVContentKeySessionDelegate, OS_dispatch_queue;

@interface AVContentKeySession : NSObject
{
    AVContentKeySessionInternal *_session;
}

+ (id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (id)contentKeySessionWithKeySystem:(id)arg1;
+ (void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
- (void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewExpiringResponseDataForContentKeyRequest:(id)arg1;
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;
@property(readonly) NSData *contentProtectionSessionIdentifier;
- (void)expire;
@property(readonly) NSString *keySystem;
- (id)contentKeyRecipients;
- (void)removeContentKeyRecipient:(id)arg1;
- (void)addContentKeyRecipient:(id)arg1;
@property(readonly, nonatomic, getter=isInternal) _Bool internal;
@property(readonly) NSURL *storageURL;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly) __weak id <AVContentKeySessionDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (void)_willDeallocOrFinalize;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
- (id)initWithStorageDirectoryAtURL:(id)arg1;
- (id)init;
- (id)delegateStorage;
- (void)setHLSMethod:(id)arg1;
- (void)issueContentKeyRequestWithCustomURLHandler:(struct OpaqueFigCustomURLHandler *)arg1 identifier:(id)arg2 requestInfo:(struct __CFDictionary *)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(_Bool)arg5;
- (void)issueContentKeyRequestWithCustomURLProviderContext:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(_Bool)arg4;
- (_Bool)clientCanReceivePersistableContentKeyRequest;
- (id)createProtectorSessionIdentifierIfNecessary;
- (int)decodeKeyRequestInitializationData:(id)arg1 IntoSinfs:(id *)arg2 CodecType:(id *)arg3 MediaType:(id *)arg4 ContainerType:(id *)arg5;
- (id)setAppIdentifier:(id)arg1;
- (int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(struct OpaqueFigCustomURLHandler **)arg2;
- (void)_handleRequest:(struct __CFDictionary *)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(struct OpaqueFigCustomURLHandler *)arg3 willHandleRequest:(_Bool *)arg4;
- (const struct OpaqueFigContentKeySession *)_figContentKeySession;
- (id)_weakReference;
- (const struct OpaqueFigCPECryptor *)copyDecryptorForIdentifier:(id)arg1 initializationData:(id)arg2;
- (const struct OpaqueFigCPECryptor *)createDecryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 error:(id *)arg4;
- (id)createCryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3;
- (id)issueContentKeyRequestForInitializationData:(id)arg1;
- (_Bool)hasProtector;
- (void)setDelegate:(id)arg1;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(_Bool)arg3;

@end

