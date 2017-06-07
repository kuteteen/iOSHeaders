//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFMailSignatureController.h>

#import <MessageUI/DOMEventListener-Protocol.h>

@class NSString;

@interface MFMailSignatureControllerWK1 : MFMailSignatureController <DOMEventListener>
{
}

- (void)handleEvent:(id)arg1;
- (void)invalidateBodyField:(id)arg1;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (_Bool)_isDraftRestore:(id)arg1;
- (id)_prependSignatureForSender:(id)arg1 document:(id)arg2 node:(id)arg3;
- (id)_createSignatureForSender:(id)arg1 document:(id)arg2 prepend:(_Bool)arg3 node:(id)arg4;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(_Bool)arg3;
- (id)_domDocumentForComposeBodyField:(id)arg1;
- (id)_createSignatureElement:(id)arg1 prepend:(_Bool)arg2 node:(id)arg3 signature:(id)arg4;
- (id)_locateSignatureDiv:(id)arg1;
- (_Bool)_updateToSignature:(id)arg1 forDocument:(id)arg2;
- (id)_signatureMarkupStringForSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

