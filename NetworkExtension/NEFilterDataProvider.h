//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterProvider.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface NEFilterDataProvider : NEFilterProvider <NSExtensionRequestHandling>
{
}

- (id)handleRemediationForFlow:(id)arg1;
- (void)handleRulesChanged;
- (id)handleOutboundDataCompleteForFlow:(id)arg1;
- (id)handleInboundDataCompleteForFlow:(id)arg1;
- (id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleNewFlow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

