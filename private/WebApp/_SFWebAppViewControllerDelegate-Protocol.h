//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebApp/NSObject-Protocol.h>

@class _SFWebAppViewController;

@protocol _SFWebAppViewControllerDelegate <NSObject>
- (void)webAppViewControllerDidFinishInitialLoad:(_SFWebAppViewController *)arg1;
- (void)webAppViewController:(_SFWebAppViewController *)arg1 didChangeLoadingState:(_Bool)arg2;
@end
