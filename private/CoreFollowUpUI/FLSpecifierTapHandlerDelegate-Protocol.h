//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLSpecifierTapHandler, UIViewController;

@protocol FLSpecifierTapHandlerDelegate <NSObject>
- (void)startPresentingForHandler:(FLSpecifierTapHandler *)arg1 withRemoteController:(UIViewController *)arg2;

@optional
- (void)preflightNetworkConnectivityForHandler:(FLSpecifierTapHandler *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

