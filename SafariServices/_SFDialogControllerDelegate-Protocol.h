//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFDialog, _SFDialogController;

@protocol _SFDialogControllerDelegate <NSObject>

@optional
- (void)dialogController:(_SFDialogController *)arg1 didDismissDialog:(_SFDialog *)arg2;
- (void)dialogController:(_SFDialogController *)arg1 willPresentDialog:(_SFDialog *)arg2;
- (long long)dialogController:(_SFDialogController *)arg1 presentationPolicyForDialog:(_SFDialog *)arg2;
@end

