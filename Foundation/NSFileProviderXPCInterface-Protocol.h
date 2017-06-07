//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileCoordinationDebugInfoXPCInteface-Protocol.h>

@class NSString, NSURL;

@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
- (oneway void)observeEndOfWriteAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(NSString *)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 url:(NSURL *)arg4 newURL:(NSURL *)arg5;
- (void)providePhysicalItemForURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *))arg2;
- (oneway void)cancelProvidingItemAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2;
- (void)provideItemAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 completionHandler:(void (^)(NSString *, NSError *))arg5;
- (void)checkInProviderWithReply:(void (^)(_Bool))arg1;
@end

