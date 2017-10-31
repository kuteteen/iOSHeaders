//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACUIViewController.h"

#import "FAAddFamilyMemberDelegate.h"
#import "FAChildAccountCreationDelegate.h"
#import "FASharedSubscriptionSpecifierProviderDelegeate.h"
#import "RemoteUIControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AAFamilyDetailsResponse, AAFamilyMember, AAGrandSlamSigner, AAUIProfilePictureStore, AAUIRemoteUIController, AAUIServerUIHookHandler, ACAccount, ACAccountStore, CNMonogrammer, FAChildAccountCreationController, FACircleRemoteUIDelegate, FAFamilyCreditCard, FAFamilyNotificationObserver, FARequestConfigurator, FASharedSubscriptionSpecifierProvider, NSArray, NSMutableDictionary, NSMutableURLRequest, NSObject, NSOperationQueue, NSString, NSURL, PSSpecifier, SSAccount, UINavigationController, UITableViewCell;

@interface FAFamilySettingsViewController : ACUIViewController <FAAddFamilyMemberDelegate, FAChildAccountCreationDelegate, UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderDelegeate>
{
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    SSAccount *_itunesAccount;
    ACAccountStore *_accountStore;
    AAFamilyDetailsResponse *_familyDetailsResponse;
    NSOperationQueue *_networkingQueue;
    PSSpecifier *_familyMembersGroup;
    PSSpecifier *_addFamilyMemberCell;
    AAUIProfilePictureStore *_profilePictureStore;
    CNMonogrammer *_monogrammer;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    UITableViewCell *_activeCell;
    NSURL *_activeURL;
    AAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_memberDetailsPageSurrogatesByOM;
    FAChildAccountCreationController *_childAccountCreationController;
    UINavigationController *_childAccountCreationNavController;
    NSObject *_profilePictureStoreDidChangeObserver;
    FAFamilyNotificationObserver *_notificationObserver;
    _Bool _fetchingPaymentInfo;
    FAFamilyCreditCard *_paymentMethod;
    NSArray *_paymentInfoSpecifiers;
    _Bool _fetchingPaymentMethodImage;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverUIHookHandler;
    FACircleRemoteUIDelegate *_faCircleRemoteUIDelegate;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    id <FAFamilySettingsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FAFamilySettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectSpecifier:(id)arg1;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(_Bool)arg3;
- (void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg1;
- (id)_itunesAccount;
- (void)_showConnectivityAlert;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)_handleFamilySubscriptionChanged;
- (void)_handleMemberUpdate:(id)arg1;
- (void)_handleMemberDeletion:(id)arg1;
- (void)_handleFamilyDeletion;
- (void)_handleFamilyStatusChange:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (_Bool)_hasActiveCell;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)arg1;
- (void)_fetchFamilyPaymentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchUpdatedFamilyDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)childAccountCreationController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)childAccountCreationController:(id)arg1 didLoadRemoteUIWithSuccess:(_Bool)arg2;
- (id)navigationItemToShowInitialLoadingForChildAccountCreationController:(id)arg1;
- (void)_createChildAccountWithContinuationData:(id)arg1;
- (void)_createChildAccountButtonWasTapped:(id)arg1;
- (void)addFamilyFamilyMemberViewControllerWantsChildAccountFlow:(id)arg1;
- (void)addFamilyFamilyMemberViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)_addMemberWithEventType:(id)arg1;
- (void)_addMemberInline;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (void)_setFresnoRemoteUIDelgate:(id)arg1;
- (void)_loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 specifier:(id)arg3 type:(long long)arg4;
- (void)_loadRemoteUIWithRequest:(id)arg1 specifier:(id)arg2 type:(long long)arg3;
- (void)_paymentMethodCellWasTapped:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (id)_createSpecifiersForPaymentInfo;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (void)_learnMoreLinkButtonWasTapped:(id)arg1;
- (id)_createSpecifierForFamilyMemberGroup;
- (void)_reloadPaymentInfoSpecifiersAnimated:(_Bool)arg1;
- (id)_imageFromBundle:(id)arg1;
- (id)_sharedSubscriptionSpecifierProvider;
- (id)_sharedSubscriptionSpecifiers;
- (void)traitCollectionDidChange:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_requestConfigurator;
- (id)_appleIDGrandSlamSigner;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyDetailsResponse:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

