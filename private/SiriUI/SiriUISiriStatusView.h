//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SUICFlamesViewDelegate.h"
#import "SiriUISiriStatusViewProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class AVAudioSession, AVPlayerItem, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, NSObject<OS_dispatch_group>, NSString, SUICFlamesView, SiriUIConfiguration, UIButton, UILongPressGestureRecognizer, UIScreen;

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol>
{
    UIButton *_button;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_flamesContainerView;
    SUICFlamesView *_flamesView;
    UIView *_glyphView;
    AVPlayerLayer *_glyphLayer;
    AVPlayerLooper *_glyphPlayerLooper;
    AVQueuePlayer *_glyphQueuePlayer;
    AVPlayerItem *_glyphPlayerItem;
    NSObject<OS_dispatch_group> *_glyphConfigurationGroup;
    AVAudioSession *_glyphAuxiliaryAudioSession;
    double _lastStateChangeTime;
    UIScreen *_screen;
    int _deferredFlamesViewState;
    SiriUIConfiguration *_configuration;
    _Bool _flamesViewDeferred;
    _Bool _inUITrackingMode;
    _Bool _paused;
    long long _mode;
    double _disabledMicOpacity;
    id <SiriUISiriStatusViewDelegate> _delegate;
    double _flamesViewWidth;
    id <SiriUISiriStatusViewAnimationDelegate> _animationDelegate;
}

@property(nonatomic) __weak id <SiriUISiriStatusViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isInUITrackingMode) _Bool inUITrackingMode; // @synthesize inUITrackingMode=_inUITrackingMode;
@property(nonatomic) _Bool flamesViewDeferred; // @synthesize flamesViewDeferred=_flamesViewDeferred;
@property(nonatomic) double flamesViewWidth; // @synthesize flamesViewWidth=_flamesViewWidth;
@property(nonatomic) __weak id <SiriUISiriStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double disabledMicOpacity; // @synthesize disabledMicOpacity=_disabledMicOpacity;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)_createLooperIfNeeded;
- (void)_configureGlyph;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardDidShowNotification:(id)arg1;
- (struct CGRect)_adjustedInsetRectForRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)safeAreaInsetsDidChange;
@property(readonly, nonatomic) double statusViewHeight;
- (struct CGRect)_siriGlyphTappableRect;
- (struct CGRect)_flamesFrame;
- (void)_animateSiriGlyphHidden:(_Bool)arg1;
- (void)_layoutFlamesViewIfNeeded;
- (void)_attachFlamesViewIfNeeded;
- (void)_setFlamesViewState:(int)arg1;
- (id)_flamesView;
- (void)_micButtonHeld:(id)arg1;
- (void)_micButtonTapped:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)_flamesViewFrame;
- (void)layoutSubviews;
- (void)fadeOutCurrentAura;
- (void)forceMicVisible:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIView *flamesContainerView;
- (void)dealloc;
- (void)configureGlyphWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 textInputEnabled:(_Bool)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

