//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <IntentsUI/_INUIRemoteViewControllerServing-Protocol.h>

@class INInteraction, NSString;
@protocol INUIHostedViewControlling;

@interface _INUIServiceViewController : UIViewController <_INUIRemoteViewControllerServing>
{
    UIViewController<INUIHostedViewControlling> *_hostedViewController;
    INInteraction *_currentInteraction;
    unsigned long long _currentContext;
}

+ (_Bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (struct CGSize)_constrainedSizeForDesiredSize:(struct CGSize)arg1;
- (void)requestDesiredSize;
- (void)queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_errorHandlingRemoteViewControllerProxy;
- (void)viewWillLayoutSubviews;
- (void)addChildViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

