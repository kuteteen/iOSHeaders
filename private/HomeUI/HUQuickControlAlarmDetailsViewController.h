//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

#import "HUQuickControlDetailsViewControllerVendor.h"

@class NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlSingleControlViewController <HUQuickControlDetailsViewControllerVendor>
{
}

+ (Class)controlItemClass;
- (_Bool)shouldShowControlWhenUnreachable;
- (id)secondaryQuickControlPresentationStyle;
- (id)createInteractionCoordinator;
- (id)createDetailsViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

