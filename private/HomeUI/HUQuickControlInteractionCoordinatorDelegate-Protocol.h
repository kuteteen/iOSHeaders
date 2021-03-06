//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HUQuickControlInteractionCoordinator, UIView<HUQuickControlAuxiliaryView>;

@protocol HUQuickControlInteractionCoordinatorDelegate <NSObject>
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)hideAuxiliaryViewForInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)interactionCoordinatorWantsDismissal:(HUQuickControlInteractionCoordinator *)arg1;
- (_Bool)hasModelValueChangedForInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 interactionStateDidChange:(_Bool)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 viewValueDidChange:(id)arg2;
@end

