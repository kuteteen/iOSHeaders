//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, _SFSafeBrowsingController;

@protocol _SFSafeBrowsingControllerDelegate <NSObject>
- (NSURL *)safeBrowsingControllerExpectedOrCurrentURL:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingControllerDidShowSecurityWarningPage:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingControllerClosePage:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingControllerGoBack:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingController:(_SFSafeBrowsingController *)arg1 didIgnoreWarningWithURL:(NSURL *)arg2;
@end

