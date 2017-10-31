//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXWebContentMessageHandlerManager.h"
#import "WKScriptMessageHandler.h"

@class NSMutableDictionary, NSString;

@interface SXWebContentMessageHandlerManager : NSObject <WKScriptMessageHandler, SXWebContentMessageHandlerManager>
{
    NSMutableDictionary *_messageHandlers;
}

@property(readonly, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)addMessageHandler:(id)arg1 name:(id)arg2;
- (id)initWithUserContentController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

