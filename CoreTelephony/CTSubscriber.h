//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface CTSubscriber : NSObject
{
    // Error parsing type: ^{__CTServerConnection={__CFRuntimeBase=QAQ}^{dispatch_queue_s}^{CTServerState}CCI^{_xpc_connection_s}CC}, name: _server
    struct vector<dispatch::block<void (^)(NSDictionary *)>, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)>>> _authCallbacks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authenticateWithInfo:(id)arg1 handleResult:(CDUnknownBlockType)arg2;
- (void)handleAuthCallback:(id)arg1;
- (_Bool)refreshCarrierToken;
@property(readonly, retain, nonatomic) NSData *carrierToken; // @dynamic carrierToken;
- (void)dealloc;
- (id)init;

@end

