//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUQuickControlControllerCoordinator, NSString;
@protocol HFIconDescriptor;

@protocol HUQuickControlControllerCoordinatorDelegate <NSObject>
- (void)controllerCoordinator:(HUQuickControlControllerCoordinator *)arg1 didUpdateReachability:(_Bool)arg2;
- (void)controllerCoordinator:(HUQuickControlControllerCoordinator *)arg1 didUpdateStatusWithPrimaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (void)controllerCoordinator:(HUQuickControlControllerCoordinator *)arg1 didUpdateIconDescriptor:(id <HFIconDescriptor>)arg2 showOffState:(_Bool)arg3;
@end
