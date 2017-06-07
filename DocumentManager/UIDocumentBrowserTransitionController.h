//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManager/UIViewControllerAnimatedTransitioning-Protocol.h>

@class FPItem, NSOperationQueue, NSProgress, NSString, NSURL, UIView;
@protocol DOCServiceBrowserViewControllerProxy, DOCServiceTransitionProtocol;

@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSURL *_itemURL;
    FPItem *_item;
    id <DOCServiceBrowserViewControllerProxy> _serviceBrowserProxy;
    UIView *_referenceView;
    _Bool _transitionDidFinish;
    id <DOCServiceTransitionProtocol> _transitionController;
    NSOperationQueue *_transitionControllerQueue;
    NSProgress *_loadingProgress;
    UIView *_targetView;
}

@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) NSProgress *loadingProgress; // @synthesize loadingProgress=_loadingProgress;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_commonInit;
- (id)initWithItemURL:(id)arg1 browserProxy:(id)arg2 referenceView:(id)arg3;
- (id)initWithItem:(id)arg1 browserProxy:(id)arg2 referenceView:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

