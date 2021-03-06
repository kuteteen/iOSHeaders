//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, OBPrivacyCombinedController, OBPrivacySplashController, UIViewController;

@interface OBPrivacyPresenter : NSObject
{
    _Bool _darkMode;
    _Bool _usesFullScreenPresentation;
    _Bool _animatePresentAndDismiss;
    CDUnknownBlockType _dismissHandler;
    OBPrivacySplashController *_splashController;
    OBPrivacyCombinedController *_combinedController;
    UIViewController *_presentingViewController;
    long long _modalPresentationStyle;
    unsigned long long _supportedInterfaceOrientations;
    struct UIViewController *_presentedController;
    NSArray *_presentedIdentifiers;
    CDUnknownBlockType _presentationCompletionHandler;
}

+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;
@property(nonatomic) _Bool animatePresentAndDismiss; // @synthesize animatePresentAndDismiss=_animatePresentAndDismiss;
@property(copy) CDUnknownBlockType presentationCompletionHandler; // @synthesize presentationCompletionHandler=_presentationCompletionHandler;
@property(retain) NSArray *presentedIdentifiers; // @synthesize presentedIdentifiers=_presentedIdentifiers;
@property(retain) UIViewController *presentedController; // @synthesize presentedController=_presentedController;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) _Bool usesFullScreenPresentation; // @synthesize usesFullScreenPresentation=_usesFullScreenPresentation;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) OBPrivacyCombinedController *combinedController; // @synthesize combinedController=_combinedController;
@property(retain) OBPrivacySplashController *splashController; // @synthesize splashController=_splashController;
@property(copy) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)dismiss;
- (void)presentInNavigationStack:(id)arg1;
- (void)present;
- (void)_presenterDidDismiss;

@end

