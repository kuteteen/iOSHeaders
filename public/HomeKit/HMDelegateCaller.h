//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HMDelegateCaller : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 mediaSystem:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 proxiedDevice:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 snapshot:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 user:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 invitations:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 array:(id)arg2;
- (void)callCompletion:(CDUnknownBlockType)arg1 array:(id)arg2 additionalAccessoryInfo:(id)arg3 error:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 array:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 boolValue:(_Bool)arg3 array:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 actionSet:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 serviceGroup:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 zone:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 room:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 home:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 isUsingHomeKit:(_Bool)arg2 isUsingCloudServices:(_Bool)arg3 error:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 dictionary:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 errorString:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 errorString:(id)arg2;
- (void)callCompletion:(CDUnknownBlockType)arg1 value:(_Bool)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 obj:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 obj:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)invokeBlock:(CDUnknownBlockType)arg1;
- (id)_localizedError:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

