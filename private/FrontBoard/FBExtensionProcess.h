//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBProcess.h>

@class FBExtensionInfo, NSString;

@interface FBExtensionProcess : FBProcess
{
    _Bool _XPCBundle;
    int _hostPID;
    FBExtensionInfo *_extensionInfo;
    NSString *_hostBundleID;
}

@property(readonly, nonatomic, getter=isXPCBundle) _Bool XPCBundle; // @synthesize XPCBundle=_XPCBundle;
@property(readonly, nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(readonly, copy, nonatomic) NSString *hostBundleID; // @synthesize hostBundleID=_hostBundleID;
@property(readonly, retain, nonatomic) FBExtensionInfo *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
- (id)succinctDescriptionBuilder;
- (_Bool)isExtensionProcess;
@property(readonly, nonatomic) FBProcess *hostProcess; // @dynamic hostProcess;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;

@end

