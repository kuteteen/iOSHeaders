//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ReplayKit/RPBroadcastActivityCommunicationHostProtocol-Protocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>
{
    RPBroadcastActivityViewController *_broadcastActivityViewController;
}

@property(nonatomic) __weak RPBroadcastActivityViewController *broadcastActivityViewController; // @synthesize broadcastActivityViewController=_broadcastActivityViewController;
- (void).cxx_destruct;
- (oneway void)presentationInfoWithCompletion:(CDUnknownBlockType)arg1;
- (long long)modalPresentationStyle;
- (unsigned long long)popoverArrowDirection;
- (struct CGRect)popoverControllerSourceRect;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(_Bool)arg4;
- (void)viewDidLoad;

@end

