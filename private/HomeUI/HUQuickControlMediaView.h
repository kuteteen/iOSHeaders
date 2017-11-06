//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HUQuickControlInteractiveView.h"

@class HUQuickControlSimpleViewProfile, NSString, UIButton, UILabel;

@interface HUQuickControlMediaView : UIView <HUQuickControlInteractiveView>
{
    _Bool _userInteractionActive;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    id _value;
    HUQuickControlSimpleViewProfile *_profile;
    UIButton *_playPauseButton;
    UILabel *_engineeringUILabel;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *engineeringUILabel; // @synthesize engineeringUILabel=_engineeringUILabel;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(copy, nonatomic) HUQuickControlSimpleViewProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void).cxx_destruct;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)_relabelButton;
- (void)_configureConstraints;
- (void)_playPausePressed:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end

