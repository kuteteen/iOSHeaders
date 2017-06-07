//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/UIActivityExtensionItemDataSource-Protocol.h>
#import <UIKit/UIActivityExtensionItemDataTarget-Protocol.h>

@class NSDate, NSExtension, NSExtensionItem, NSString, UIImage, UIViewController, _UIActivityBundleHelper;

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget>
{
    NSExtension *_applicationExtension;
    NSExtensionItem *__injectedExtensionItem;
    UIViewController *_extensionViewController;
    id _extensionContextIdentifier;
    UIViewController *_presenterViewController;
    CDUnknownBlockType _presenterCompletion;
    _UIActivityBundleHelper *_activityBundleHelper;
    NSString *_localizedExtensionBundleName;
    UIImage *_renderedActivityImage;
    UIImage *_renderedActivitySettingsImage;
    CDUnknownBlockType _extensionRequestCleanupCompletion;
    NSDate *_installationDate;
}

+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (long long)activityCategory;
+ (id)_applicationExtensionActivitiesForItems:(id)arg1;
@property(readonly, nonatomic) NSDate *installationDate; // @synthesize installationDate=_installationDate;
@property(copy, nonatomic) CDUnknownBlockType extensionRequestCleanupCompletion; // @synthesize extensionRequestCleanupCompletion=_extensionRequestCleanupCompletion;
@property(retain, nonatomic) UIImage *renderedActivitySettingsImage; // @synthesize renderedActivitySettingsImage=_renderedActivitySettingsImage;
@property(retain, nonatomic) UIImage *renderedActivityImage; // @synthesize renderedActivityImage=_renderedActivityImage;
@property(copy, nonatomic) NSString *localizedExtensionBundleName; // @synthesize localizedExtensionBundleName=_localizedExtensionBundleName;
@property(retain, nonatomic) _UIActivityBundleHelper *activityBundleHelper; // @synthesize activityBundleHelper=_activityBundleHelper;
@property(copy, nonatomic) CDUnknownBlockType presenterCompletion; // @synthesize presenterCompletion=_presenterCompletion;
@property(nonatomic) UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(copy, nonatomic) id extensionContextIdentifier; // @synthesize extensionContextIdentifier=_extensionContextIdentifier;
@property(retain, nonatomic) UIViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(retain, nonatomic) NSExtensionItem *_injectedExtensionItem; // @synthesize _injectedExtensionItem=__injectedExtensionItem;
@property(retain, nonatomic) NSExtension *applicationExtension; // @synthesize applicationExtension=_applicationExtension;
- (void).cxx_destruct;
- (void)_presentExtensionViewControllerIfPossible;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (void)_cleanup;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)_isServiceExtension;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (_Bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (long long)_defaultSortGroup;
- (id)activityType;
- (void)_injectedJavaScriptResult:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithApplicationExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

