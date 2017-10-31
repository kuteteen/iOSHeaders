//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "_TVIKAppDocumentDelegate.h"
#import "_TVModalPresenterFocusing.h"
#import "_TVPagePerformanceDelegate.h"

@class IKAppDocument, NSArray, NSString, TVMediaQueryEvaluator, UITapGestureRecognizer, UIView, _TVPagePerformanceController;

@interface _TVAppDocumentController : UIViewController <_TVIKAppDocumentDelegate, UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVPagePerformanceDelegate, UIPopoverPresentationControllerDelegate>
{
    struct {
        unsigned int mediaQueryEvaluatorForAppDocumentController:1;
    } _delegateFlags;
    _Bool _shouldMarkStylesDirtyBeforeLayout;
    _Bool _opaque;
    _Bool _dismissAppOnMenu;
    _Bool _applicationDeactivatedOnMenu;
    _Bool _transitioning;
    _Bool _visualEffectDisablementNeeded;
    IKAppDocument *_appDocument;
    id <_TVAppDocumentControllerDelegate> _delegate;
    UIViewController *_templateViewController;
    CDUnknownBlockType _menuGestureHandler;
    TVMediaQueryEvaluator *_mediaQueryEvaluator;
    UITapGestureRecognizer *_menuGestureRecognizer;
    _TVPagePerformanceController *_pagePerformance;
    UIView *_pagePerformanceView;
}

@property(retain, nonatomic) UIView *pagePerformanceView; // @synthesize pagePerformanceView=_pagePerformanceView;
@property(retain, nonatomic) _TVPagePerformanceController *pagePerformance; // @synthesize pagePerformance=_pagePerformance;
@property(nonatomic, getter=isVisualEffectDisablementNeeded) _Bool visualEffectDisablementNeeded; // @synthesize visualEffectDisablementNeeded=_visualEffectDisablementNeeded;
@property(nonatomic) __weak UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) TVMediaQueryEvaluator *mediaQueryEvaluator; // @synthesize mediaQueryEvaluator=_mediaQueryEvaluator;
@property(readonly, nonatomic) _Bool applicationDeactivatedOnMenu; // @synthesize applicationDeactivatedOnMenu=_applicationDeactivatedOnMenu;
@property(nonatomic) _Bool dismissAppOnMenu; // @synthesize dismissAppOnMenu=_dismissAppOnMenu;
@property(copy, nonatomic) CDUnknownBlockType menuGestureHandler; // @synthesize menuGestureHandler=_menuGestureHandler;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
@property(retain, nonatomic) UIViewController *templateViewController; // @synthesize templateViewController=_templateViewController;
@property(nonatomic) __weak id <_TVAppDocumentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
- (void).cxx_destruct;
- (void)pagePerformanceController:(id)arg1 didUpdateMetrics:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)_menuGestureHandler:(id)arg1;
- (void)tvmlkit_handleEvent:(id)arg1 forElement:(id)arg2 andSourceView:(id)arg3;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (struct CGSize)formSize;
- (id)_mediaQueryEvaluator;
- (_Bool)_tvTabBarShouldOverlap;
- (_Bool)_isFlowcaseStack;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_updateTemplateViewController;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)_alertControllerWithError:(id)arg1;
- (void)_updateIdleModeStatus;
- (void)_markAndNotifyStylesDirty;
- (void)_darkerSystemColorStatusChanged:(id)arg1;
- (void)scrollToTop;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (struct CGSize)tv_adjustedWindowSizeForDocument:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reload;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)dealloc;
- (void)replaceAppDocumentWithAppDocument:(id)arg1;
- (id)initWithAppDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

