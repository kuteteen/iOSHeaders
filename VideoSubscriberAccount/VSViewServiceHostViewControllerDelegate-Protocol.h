//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, NSString, VSViewServiceHostViewController, VSViewServiceRequest, VSViewServiceResponse;

@protocol VSViewServiceHostViewControllerDelegate <NSObject>
- (_Bool)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 shouldAuthenticateAccountProviderWithIdentifier:(NSString *)arg2;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 didCancelRequest:(VSViewServiceRequest *)arg2;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 didChooseAdditionalProvidersForRequest:(VSViewServiceRequest *)arg2;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 request:(VSViewServiceRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 request:(VSViewServiceRequest *)arg2 didFinishWithResponse:(VSViewServiceResponse *)arg3;
- (void)dismissViewServiceHostViewController:(VSViewServiceHostViewController *)arg1;
- (void)presentViewServiceHostViewController:(VSViewServiceHostViewController *)arg1;
@end

