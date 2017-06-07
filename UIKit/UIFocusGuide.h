//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILayoutGuide.h>

#import <UIKit/_UIFocusGuideRegionDelegate-Protocol.h>
#import <UIKit/_UIFocusRegionContainer-Protocol.h>
#import <UIKit/_UILegacyFocusRegion-Protocol.h>

@class NSArray, NSString, UIView;
@protocol UIFocusEnvironment;

@interface UIFocusGuide : UILayoutGuide <_UILegacyFocusRegion, _UIFocusRegionContainer, _UIFocusGuideRegionDelegate>
{
    _Bool _didSetPreferredFocusedEnvironments;
    _Bool _enabled;
    _Bool _automaticallyPreferOwningView;
    _Bool _automaticallyDisableWhenIntersectingFocus;
    NSArray *_preferredFocusEnvironments;
}

@property(nonatomic, getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:) _Bool automaticallyDisableWhenIntersectingFocus; // @synthesize automaticallyDisableWhenIntersectingFocus=_automaticallyDisableWhenIntersectingFocus;
@property(nonatomic, getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:) _Bool automaticallyPreferOwningView; // @synthesize automaticallyPreferOwningView=_automaticallyPreferOwningView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2;
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic, getter=_parentFocusEnvironment) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (_Bool)_isTransparentFocusRegion;
- (id)_fulfillPromisedFocusRegion;
- (_Bool)_isPromiseFocusRegion;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_legacy_isEligibleForFocusInteraction;
- (struct CGRect)_focusRegionFrame;
- (id)_focusRegionFocusSystem;
- (void)_didUpdateFocusToPreferredFocusedView;
@property(nonatomic) __weak UIView *preferredFocusedView;
@property(copy, nonatomic) NSArray *preferredFocusEnvironments; // @synthesize preferredFocusEnvironments=_preferredFocusEnvironments;
- (id)_encodablePreferredFocusEnvironments;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly) Class superclass;

@end

