//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFMailComposeController.h>

@interface MFMailComposeControllerWK1 : MFMailComposeController
{
}

- (void)_endBlockingBodyScroll;
- (void)_beginBlockingBodyScroll;
- (void)setIsModal:(_Bool)arg1;
- (id)_selectedAttachmentURLs;
- (id)_copyMessageDataForActivityContinuation;
- (void)_setBodyFieldAutocorrectionContext:(id)arg1;
- (unsigned long long)_bodyFieldTextContentLength;
- (void)_placeCaretAtStartOfBodyField;
- (struct CGRect)_optimalRectForPresentingPopoverInBodyField;
- (void)loadView;
- (void)_bodyTextChanged:(id)arg1;
- (id)_allocateComposeView;
- (id)_composeBodyField;
- (id)_createSignatureController;
- (void)dealloc;

@end

