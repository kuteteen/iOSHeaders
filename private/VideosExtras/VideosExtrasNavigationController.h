//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "IKAppNavigationController.h"
#import "VideosExtrasLoadingViewDelegate.h"

@class NSString, UIViewController, VideosExtrasContext, VideosExtrasLoadingView, VideosExtrasMainTemplateViewController;

@interface VideosExtrasNavigationController : UINavigationController <VideosExtrasLoadingViewDelegate, IKAppNavigationController>
{
    VideosExtrasLoadingView *_loadingView;
    UIViewController *_emptyViewController;
    VideosExtrasContext *_context;
    _Bool _clearStackOnPush;
}

@property(readonly, nonatomic) __weak VideosExtrasContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_installBackButtonOnNavigationItem:(id)arg1 withTitle:(id)arg2;
- (void)_popViewControllerFromBackButton;
- (void)_installDoneButtonOnNavigationItem:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)loadingView:(id)arg1 documentDidUpdate:(id)arg2 options:(id)arg3;
- (void)_presentDialogTemplate:(id)arg1;
- (void)_dismissViewController:(id)arg1;
- (id)documents;
- (id)_viewControllerForDocument:(id)arg1 index:(long long *)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)setClearsStackOnNextPush;
@property(readonly) VideosExtrasMainTemplateViewController *mainTemplateViewController;
- (void)finalizeMainTemplateOffset:(_Bool)arg1;
- (void)applyMainTemplateOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

