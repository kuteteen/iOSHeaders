//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface _SFDialog : NSObject
{
    _Bool _completed;
}

+ (id)permanentlyAcceptCertificateDialogWithAcceptanceHandler:(CDUnknownBlockType)arg1;
+ (id)blockedPopupWindowDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)userMediaPermissionDialogWithHost:(id)arg1 devices:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)downloadBlockedDialogWithFileType:(long long)arg1 initiatingURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)pageLoadErrorWithMessage:(id)arg1;
+ (id)genericErrorDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(_Bool)arg3;
+ (id)printBlockedDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)continuePrintingDialogWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)redirectDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)noFeedAppDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)formSubmissionDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_dialogWithTitle:(id)arg1 message:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 applicationModal:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)dialogWithWebUIAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)telephonyNavigationDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)mailNavigationDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)javaScriptPromptDialogWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)javaScriptConfirmDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)javaScriptAlertDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)authenticationDialogWithAuthenticationChallenge:(id)arg1 committedURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didCompleteWithResponse:(id)arg1;
- (id)newViewControllerRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)newDialogViewRepresentation;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, copy, nonatomic) NSArray *additionalCancellationExemptions;
- (void)completeWithResponse:(id)arg1;
@property(readonly, nonatomic) _Bool completionHandlerBlocksWebProcess;
@property(readonly, nonatomic) _Bool canceledOnCommittedNavigation;
@property(readonly, nonatomic) _Bool canceledOnProvisionalNavigation;

@end

