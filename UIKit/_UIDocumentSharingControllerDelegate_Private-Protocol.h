//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIDocumentSharingController;

@protocol _UIDocumentSharingControllerDelegate_Private <NSObject>

@optional
- (void)_documentSharingControllerPerformAuxiliaryAction:(UIDocumentSharingController *)arg1 completion:(void (^)(void))arg2;
- (void)_documentSharingControllerDidStopSharing:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidModifyShare:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidDismiss:(UIDocumentSharingController *)arg1;
@end

