//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HUQuickControlInteractiveView.h"

@class HUCircleView, HUIconView, HUQuickControlViewProfile, NSString, UIColor;

@interface HUQuickControlValveToggleView : UIView <HUQuickControlInteractiveView>
{
    _Bool _open;
    _Bool _userInteractionActive;
    id _value;
    HUQuickControlViewProfile *_profile;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    HUIconView *_iconView;
    HUCircleView *_circleView;
}

+ (id)intrinsicSizeDescriptor;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) HUCircleView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void)_updateIconDescriptor;
- (void)_updateAppearance;
- (struct CGSize)intrinsicContentSize;
- (void)_handleTap:(id)arg1;
- (void)updateConstraints;
- (void)_setupIconView;
@property(readonly, nonatomic) UIColor *backgroundOffColor;
@property(readonly, nonatomic) UIColor *backgroundOnColor;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end
