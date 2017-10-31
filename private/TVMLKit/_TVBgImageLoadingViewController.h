//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVAppTemplateController.h"

@class IKViewElement, NSString, TVImageProxy, UIView;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController>
{
    TVImageProxy *_bgImageProxy;
    _Bool _loaded;
    UIView *_rightLargeTitleButton;
    struct {
        _Bool respondsToBackroundImageProxy;
        _Bool respondsToBackgroundImageRequiresBlur;
        _Bool respondsToBackdropNeeded;
        _Bool respondsToImageProxySize;
        _Bool respondsToBlurEffectStyle;
        _Bool respondsToPurgeBgImages;
        _Bool respondsToConfigureBgImageBackdropImage;
    } _bgImageLoadingOptions;
    _Bool _appliedNavigationItem;
    IKViewElement *_navigationItemElement;
}

+ (id)_decorateImage:(id)arg1 decorator:(id)arg2;
@property(nonatomic) _Bool appliedNavigationItem; // @synthesize appliedNavigationItem=_appliedNavigationItem;
@property(retain, nonatomic) IKViewElement *navigationItemElement; // @synthesize navigationItemElement=_navigationItemElement;
- (void).cxx_destruct;
- (void)_updateNavigationItem;
- (void)_updateNavigationBarPadding;
- (void)_reparentNavigationItem:(id)arg1;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_dismissViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateNavigationItem:(id)arg1;
- (void)loadFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureAppearanceTransition;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateWithViewElement:(id)arg1;
- (long long)preferredStatusBarStyle;
- (long long)_blurEffectStyle;
- (struct CGSize)_backgroundImageProxySize;
- (_Bool)_isBackdropNeeded;
- (_Bool)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

