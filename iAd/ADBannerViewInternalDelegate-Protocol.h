//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iAd/ADBannerViewDelegate-Protocol.h>

@class ADBannerView, UIViewController;

@protocol ADBannerViewInternalDelegate <ADBannerViewDelegate>

@optional
- (void)bannerViewShouldResumeMedia:(ADBannerView *)arg1;
- (void)bannerViewShouldPauseMedia:(ADBannerView *)arg1;
- (UIViewController *)viewControllerForStoryboardPresentationFromBannerView:(ADBannerView *)arg1;
@end

