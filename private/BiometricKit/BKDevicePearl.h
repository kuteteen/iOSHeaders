//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BiometricKit/BKDevice.h>

@class NSObject<OS_dispatch_queue>;

@interface BKDevicePearl : BKDevice
{
    id <BKDevicePearlDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _pearlState;
}

@property(readonly, nonatomic) long long pearlState; // @synthesize pearlState=_pearlState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKDevicePearlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id *)arg3;

@end
