//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Social/SLComposeServiceViewController.h>

#import <Social/SLFacebookAlbumChooserViewControllerDelegate-Protocol.h>
#import <Social/SLFacebookAudienceViewControllerDelegate-Protocol.h>
#import <Social/SLFacebookVideoOptionsDelegate-Protocol.h>
#import <Social/SLPlaceDataSourceDelegate-Protocol.h>
#import <Social/SLSheetPlaceViewControllerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, ALAssetsLibrary, CLInUseAssertion, NSString, SLComposeSheetConfigurationItem, SLFacebookAlbumChooserViewController, SLFacebookAlbumManager, SLFacebookPlaceManager, SLFacebookPost, SLFacebookPostPrivacyManager, SLFacebookSession, SLFacebookVideoOptionsViewController, SLSheetPlaceViewController, SLVideoQualityOption, UIViewController;
@protocol SLFacebookAudienceViewController;

@interface SLFacebookComposeViewController : SLComposeServiceViewController <SLFacebookAudienceViewControllerDelegate, SLFacebookAlbumChooserViewControllerDelegate, SLFacebookVideoOptionsDelegate, SLPlaceDataSourceDelegate, SLSheetPlaceViewControllerDelegate>
{
    _Bool _hasAccessToAccount;
    _Bool _hasCheckedAccess;
    _Bool _hasShowedLocationDeniedAlert;
    SLFacebookSession *_session;
    ACAccountStore *_accountStore;
    _Bool _didFetchPrivilegedAccount;
    ACAccount *_privilegedAccount;
    SLSheetPlaceViewController *_placeViewController;
    UIViewController<SLFacebookAudienceViewController> *_audienceViewController;
    SLFacebookAlbumChooserViewController *_albumChooserViewController;
    SLFacebookVideoOptionsViewController *_videoOptionsViewController;
    SLFacebookPost *_post;
    SLFacebookPostPrivacyManager *_postPrivacyManager;
    SLFacebookPlaceManager *_placeManager;
    SLFacebookAlbumManager *_albumManager;
    ALAssetsLibrary *_assetsLibrary;
    SLComposeSheetConfigurationItem *_privacyConfigurationItem;
    SLComposeSheetConfigurationItem *_albumConfigurationItem;
    SLComposeSheetConfigurationItem *_placeConfigurationItem;
    SLComposeSheetConfigurationItem *_videoOptionsConfigurationItem;
    SLVideoQualityOption *_selectedVideoQualityOption;
    struct {
        unsigned int showAlbumAction:1;
        unsigned int showPrivacyAction:1;
        unsigned int showPlaceAction:1;
        unsigned int showVideoDetailAction:1;
    } _actionFlags;
    CLInUseAssertion *_locationInUseAssertion;
    CDUnknownBlockType _completionHandler;
}

+ (id)serviceBundle;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_presentFacebookDisabledAlert;
- (void)_presentNoAccountsAlert;
- (void)presentationAnimationDidFinish;
- (void)callCompletionHandlerWithResult:(long long)arg1;
- (void)setupCommonUI;
- (void)handleImagePostWithURL;
- (_Bool)hasAccountAccess;
- (void)didSelectPost;
- (_Bool)isContentValid;
- (void)placeViewController:(id)arg1 didSelectPlace:(id)arg2;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)_setPlace:(id)arg1;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (_Bool)_isLocationAuthorizationDenied;
- (void)_presentPlaceViewController;
- (void)_handlePostPrivacyResultWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)_postPrivacyManager;
- (void)audienceViewController:(id)arg1 didSelectPostPrivacySetting:(id)arg2;
- (void)_presentAudienceViewController;
- (void)albumChooserViewController:(id)arg1 didSelectAlbum:(id)arg2;
- (void)_presentAlbumViewController;
- (void)_setVideoSizeOptionIdentifier:(id)arg1;
- (id)_videoOptionIdentifer;
- (void)videoOptionsViewController:(id)arg1 didSelectVideoQualityOption:(id)arg2;
- (id)_videoQualityOption;
- (void)_presentVideoOptionsViewController;
- (id)albumManager;
@property(retain) ACAccountStore *accountStore; // @dynamic accountStore;
@property(readonly) ACAccount *privilegedAccount;
- (void)_hostApplicationWillEnterForeground;
- (void)_hostApplicationDidEnterBackground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)configurationItems;
- (id)_videoOptionsConfigurationItem;
- (void)_updateAlbumConfigurationItemWithDefaultAlbum;
- (id)_albumConfigurationItem;
- (id)_placeConfigurationItem;
- (void)_updatePrivacyConfigurationItemWithDefaultPrivacySetting;
- (id)_privacyConfigurationItem;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

