//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>

#import <NetworkExtension/NEFilterControlExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterControlExtensionProviderProtocol-Protocol.h>

@class NSString;
@protocol NEFilterControlExtensionProviderHostDelegate;

@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>
{
    id <NEFilterControlExtensionProviderHostDelegate> _control_delegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property __weak id <NEFilterControlExtensionProviderHostDelegate> control_delegate; // @synthesize control_delegate=_control_delegate;
- (void).cxx_destruct;
- (void)startedWithError:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)provideRemediationMap:(id)arg1;
- (void)notifyRulesChanged;
- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

