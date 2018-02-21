//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

#import "PKPaymentServiceDelegate.h"
#import "SBSHardwareButtonEventConsuming.h"

@class CLInUseAssertion, NSArray, NSObject<OS_dispatch_group>, NSString, PKAssertion, PKFieldDetectEducationViewController, PKFieldProperties, PKPassGroupsViewController, PKPaymentService, SBSAssertion;

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming>
{
    PKPassGroupsViewController *_passGroupsViewController;
    PKPaymentService *_paymentService;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
    NSString *_passUniqueIdentifier;
    CLInUseAssertion *_passbookForegroundAssertion;
    id <BSInvalidatable> _lockButtonObserver;
    SBSAssertion *_lockButtonAssertion;
    PKAssertion *_notificationSuppressionAssertion;
    NSObject<OS_dispatch_group> *_fieldPropertiesLookupGroup;
    long long _presentationSource;
    unsigned long long _presentationStartTime;
    _Bool _backlightActive;
    _Bool _deviceUILocked;
    _Bool _processHomeButtonEvents;
    PKFieldDetectEducationViewController *_educationVC;
    _Bool _appearedOnce;
    _Bool _insertedGroupsVC;
    _Bool _shouldInsertGroupsVC;
    long long _invalidationStatus;
}

+ (_Bool)_isSecureForRemoteViewService;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)groupsControllerWithSource:(long long)arg1;
- (void).cxx_destruct;
- (void)linkedApplicationOpen:(id)arg1;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)arg1;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)arg1;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (_Bool)_notificationIsFromChildViewController:(id)arg1;
- (void)_dismissForSource:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissIfRestricted;
- (void)_presentHomeButtonDoubleTapAlertIfNecessary;
- (void)_presentPassAnimated:(_Bool)arg1;
- (void)_insertGroupController;
- (void)_setupGroupController;
- (void)handleHomeButtonPressed;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserInfo:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_appearIfNecessary;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)_willAppearInRemoteViewController;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)_invalidateForType:(long long)arg1;
- (void)_invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

