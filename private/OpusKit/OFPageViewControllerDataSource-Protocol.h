//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class OFPageViewController, OFUIViewController;

@protocol OFPageViewControllerDataSource <NSObject>
- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerAfterViewController:(OFUIViewController *)arg2;
- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerBeforeViewController:(OFUIViewController *)arg2;

@optional
- (long long)presentationIndexForPageViewController:(OFPageViewController *)arg1;
- (long long)presentationCountForPageViewController:(OFPageViewController *)arg1;
@end
