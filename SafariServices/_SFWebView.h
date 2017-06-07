//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import <SafariServices/_SFDialogViewPresenting-Protocol.h>
#import <SafariServices/_SFKillWebContentProcessUIActivityDelegate-Protocol.h>

@class NSString, NSTimer, UIImageView, _SFDialogView;
@protocol _SFWebViewDelegate;

@interface _SFWebView : WKWebView <_SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate>
{
    _SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    long long _navigationGesturePolicy;
    id <_SFWebViewDelegate> _delegate;
    struct UIEdgeInsets _hitTestInsets;
}

@property(nonatomic) __weak id <_SFWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long navigationGesturePolicy; // @synthesize navigationGesturePolicy=_navigationGesturePolicy;
@property(nonatomic) struct UIEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)safariKillWebContentProcessUIActivityKillWebProcess:(id)arg1;
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;
- (int)webProcessIDForDialogController:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
@property(readonly, copy, nonatomic) NSString *evOrganizationName;
- (struct __SecTrust *)_serverTrust;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_close;
- (void)_setObscuredInsets:(struct UIEdgeInsets)arg1;
- (void)setAllowsBackForwardNavigationGestures:(_Bool)arg1;
- (void)_updateNavigationGesturesAllowed;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

