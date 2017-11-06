//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AAUIDeviceToDeviceEncryptionHelperDelegate.h"
#import "PKExplanationViewControllerDelegate.h"
#import "PKPaymentSetupViewControllerDelegate.h"
#import "RemoteUIControllerDelegate.h"

@class NSString, PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentWebService, PKTableHeaderView, RemoteUIController, UIImage;

@interface PKPeerPaymentPassActivationViewController : UIViewController <PKPaymentSetupViewControllerDelegate, AAUIDeviceToDeviceEncryptionHelperDelegate, PKExplanationViewControllerDelegate, RemoteUIControllerDelegate>
{
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    PKPeerPaymentCredential *_credential;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
    unsigned long long _state;
    PKPeerPaymentWebService *_peerPaymentWebService;
    RemoteUIController *_termsController;
    PKTableHeaderView *_headerView;
    UIImage *_passSnapShot;
    _Bool _presentedDeviceToDeviceEncryptionFlow;
}

@property(nonatomic) _Bool presentedDeviceToDeviceEncryptionFlow; // @synthesize presentedDeviceToDeviceEncryptionFlow=_presentedDeviceToDeviceEncryptionFlow;
- (void).cxx_destruct;
- (void)_terminateSetupFlow;
- (void)_handleNextStep;
- (void)_handleError:(id)arg1;
- (void)_presentSetupWillCompleteLaterAlertController;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_presentDeviceToDeviceEncryptionFlow;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_presentTermsAndConditionsWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_titleStringForState;
- (_Bool)_hasDebitCard;
- (void)_setState:(unsigned long long)arg1;
- (void)_presentActivationFailedErrorAlert;
- (void)_setShowCheckmark:(_Bool)arg1;
- (void)_setShowSpinner:(_Bool)arg1;
- (void)_provisionPeerPaymentPass;
- (void)_resetApplyPayManateeView;
- (void)_presentMissingTLKsAlert;
- (void)_checkCloudStoreState;
- (void)_beginSetup;
- (struct CGSize)_snapshotSize;
- (void)_processCloudStorePCSErrorWithTargetDevice:(id)arg1;
- (void)_initalizeCloudStoreWithTargetDevice:(id)arg1 ifNecessaryWithCompletion:(CDUnknownBlockType)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

