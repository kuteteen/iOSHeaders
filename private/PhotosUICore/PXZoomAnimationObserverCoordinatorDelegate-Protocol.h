//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXZoomAnimationObserverCoordinator;
@protocol PXZoomAnimationContext;

@protocol PXZoomAnimationObserverCoordinatorDelegate <NSObject>

@optional
- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationDidEndWithContext:(id <PXZoomAnimationContext>)arg2;
- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationWillBeginWithContext:(id <PXZoomAnimationContext>)arg2;
@end
