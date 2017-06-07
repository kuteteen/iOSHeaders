//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFBrowserRemoveViewControllerDelegate-Protocol.h>
#import <SafariServices/SFInteractiveDismissControllerDelegate-Protocol.h>
#import <SafariServices/_SFQueueingBrowserServiceViewControllerProxyDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SFBrowserRemoteViewController, SFInteractiveDismissController, UIColor, _SFQueueingBrowserServiceViewControllerProxy, _UIAsyncInvocation, _WKActivatedElementInfo;
@protocol SFSafariViewControllerDelegate;

@interface SFSafariViewController : UIViewController <SFBrowserRemoveViewControllerDelegate, SFInteractiveDismissControllerDelegate, _SFQueueingBrowserServiceViewControllerProxyDelegate>
{
    SFBrowserRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _Bool _hasBeenDisplayedAtLeastOnce;
    long long _preferredStatusBarStyle;
    _Bool _showingLinkPreview;
    NSArray *_previewActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    NSArray *_customActivities;
    NSMutableDictionary *_activitiesMap;
    _Bool _swipeGestureEnabled;
    SFInteractiveDismissController *_interactiveDismissController;
    id <SFSafariViewControllerDelegate> _delegate;
    UIColor *_preferredBarTintColor;
    UIColor *_preferredControlTintColor;
    _SFQueueingBrowserServiceViewControllerProxy *_serviceProxy;
    NSURL *_initialURL;
}

@property(readonly, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(readonly, nonatomic) _SFQueueingBrowserServiceViewControllerProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) UIColor *preferredControlTintColor; // @synthesize preferredControlTintColor=_preferredControlTintColor;
@property(retain, nonatomic) UIColor *preferredBarTintColor; // @synthesize preferredBarTintColor=_preferredBarTintColor;
@property(nonatomic) __weak id <SFSafariViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)interactiveDismissControllerDidCancel:(id)arg1;
- (void)interactiveDismissControllerDidEnd:(id)arg1;
- (void)interactiveDismissControllerDidBegin:(id)arg1;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(_Bool)arg2;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(_Bool)arg2;
- (void)remoteViewController:(id)arg1 willUpdateStatusBarStyle:(long long)arg2;
- (void)remoteViewController:(id)arg1 fetchHostAppCustomActivitiesForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)_connectToService;
- (void)_removeRemoteView;
- (void)_setEdgeSwipeDismissalEnabled:(_Bool)arg1;
- (void)_addRemoteView;
- (void)_forwardNotificationToViewService:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(_Bool)arg2;
- (id)previewActionItems;
@property(retain, nonatomic, setter=_setActivatedElementInfo:) _WKActivatedElementInfo *_activatedElementInfo;
@property(retain, nonatomic, setter=_setPreviewActions:) NSArray *_previewActions;
@property(nonatomic, setter=_setShowingLinkPreview:) _Bool _showingLinkPreview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

