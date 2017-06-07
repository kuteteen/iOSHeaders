//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HomeKit/HMSetupRemoteHost-Protocol.h>

@protocol HMSetupRemoteHost;

@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost>
{
    id <HMSetupRemoteHost> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <HMSetupRemoteHost> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accessorySetupDidFinishPairing;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishWithError:(id)arg1;
- (void)accessorySetupDidLoad;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

