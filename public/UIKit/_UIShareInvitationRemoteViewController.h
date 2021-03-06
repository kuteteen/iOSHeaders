//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "_UIShareInvitationViewControllerHost.h"

@class NSString, UIViewController<_UISharingPublicController>;

__attribute__((visibility("hidden")))
@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost>
{
    UIViewController<_UISharingPublicController> *_publicController;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak UIViewController<_UISharingPublicController> *publicController; // @synthesize publicController=_publicController;
- (void).cxx_destruct;
- (void)_requestContentSize:(struct CGSize)arg1;
- (void)_updateTraitCollectionForPopoverStatus;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (void)_dismissAndRepresentForActivity:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(_Bool)arg1;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)_shareWasMadePrivate;
- (void)_shareDidChange:(id)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_dismissViewController;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

