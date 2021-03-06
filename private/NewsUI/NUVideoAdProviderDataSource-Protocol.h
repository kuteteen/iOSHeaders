//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NUVideoAdProvider, UIViewController;

@protocol NUVideoAdProviderDataSource <NSObject>
- (double)aspectRatioOfPlayerForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (unsigned long long)numberOfVideosPlayedSinceLastAdForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (unsigned long long)numberOfVideosPlayedInSessionForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (long long)onboardingVersionForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (UIViewController *)viewControllerForVideoAdProvider:(NUVideoAdProvider *)arg1;
@end

