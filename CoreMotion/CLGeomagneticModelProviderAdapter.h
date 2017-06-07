//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceAdapter.h>

#import <CoreMotion/CLGeomagneticModelProviderProtocol-Protocol.h>

@class NSString;

@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>
{
}

+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1;
+ (_Bool)isSupported;
- (void)fetchGeomagneticModelData:(CDUnknownBlockType)arg1;
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)doAsync:(CDUnknownBlockType)arg1;
- (struct CLGeomagneticModelProvider *)adaptee;
- (void)endService;
- (void)beginService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

