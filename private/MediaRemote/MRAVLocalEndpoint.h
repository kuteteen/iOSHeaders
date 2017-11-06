//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVConcreteEndpoint.h>

@class MRAVOutputContext, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MRAVLocalEndpoint : MRAVConcreteEndpoint
{
    MRAVOutputContext *_outputContext;
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
}

- (void)_reloadOutputDevicesFromContext;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isLocalEndpoint;
- (id)instanceIdentifier;
- (id)uniqueIdentifier;
@property(copy, nonatomic) NSArray *outputDevices;
- (void)dealloc;
- (id)initWithOutputDevices:(id)arg1;
- (id)initWithOutputContext:(id)arg1;

@end

