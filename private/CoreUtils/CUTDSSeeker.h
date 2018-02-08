//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CUTDSSeeker : NSObject
{
    struct NSMutableSet *_endpoints;
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    _Bool _passive;
    int _dataLinkType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    unsigned long long _tdsHashSeek;
}

@property(nonatomic) unsigned long long tdsHashSeek; // @synthesize tdsHashSeek=_tdsHashSeek;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool passive; // @synthesize passive=_passive;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) int dataLinkType; // @synthesize dataLinkType=_dataLinkType;
- (void).cxx_destruct;
- (void)updateEndpointsForDevices:(struct NSMutableDictionary *)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

