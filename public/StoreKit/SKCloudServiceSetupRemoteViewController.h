//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKCloudServiceSetupExtensionClientInterface-Protocol.h>

@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface>
{
    id <SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak id <SKCloudServiceSetupRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissSafariViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCloudServiceSetupViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didFinishLoadingWithSuccess:(_Bool)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

