//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HUQuickControlInteractiveViewController.h"

@class HUQuickControlViewProfile, NSString, UIView<HUQuickControlInteractiveView>;

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController>
{
    HUQuickControlViewProfile *_profile;
    UIViewController *_contraption;
}

@property(readonly, nonatomic) UIViewController *contraption; // @synthesize contraption=_contraption;
@property(readonly, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewController:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView<HUQuickControlInteractiveView> *view;

@end

