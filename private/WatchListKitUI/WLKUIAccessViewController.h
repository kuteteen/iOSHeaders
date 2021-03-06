//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString;

@interface WLKUIAccessViewController : UINavigationController <UIViewControllerTransitioningDelegate>
{
    CDUnknownBlockType _completionHandler;
}

+ (void)resolveBundleIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)eligibleBundleIDs;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

