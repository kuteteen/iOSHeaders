//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, TRTransferServer;

@protocol TRTransferServerDelegate <NSObject>

@optional
- (void)server:(TRTransferServer *)arg1 didFailToReceiveData:(NSError *)arg2;
- (void)server:(TRTransferServer *)arg1 didReceiveData:(NSData *)arg2 replyHandler:(void (^)(NSData *))arg3;
- (void)serverWillReceiveData:(TRTransferServer *)arg1;
@end

