//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TSBonjourAdvertiseDelegate;

@interface TSBonjourAdvertise : NSObject
{
    struct _DNSServiceRef_t *_sdRef;
    NSObject<OS_dispatch_queue> *_queue;
    id <TSBonjourAdvertiseDelegate> _delegate;
}

@property(nonatomic) id <TSBonjourAdvertiseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (_Bool)stopAdvertising;
- (_Bool)startAdvertisingWithError:(id *)arg1;
- (void)registeredServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 withFlags:(unsigned int)arg4;
- (id)init;

@end
