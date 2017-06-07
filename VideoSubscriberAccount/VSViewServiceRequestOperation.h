//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

#import <VideoSubscriberAccount/VSViewServiceHostViewControllerDelegate-Protocol.h>

@class NSString, NSUUID, VSOptional, VSViewServiceHostViewController, VSViewServiceRequest;
@protocol VSViewServiceRequestOperationDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate>
{
    _Bool _isPresentingViewController;
    VSViewServiceRequest *_viewServiceRequest;
    id <VSViewServiceRequestOperationDelegate> _delegate;
    VSOptional *_result;
    VSViewServiceHostViewController *_viewServiceHostViewController;
    NSUUID *_requestID;
}

@property(copy, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) VSViewServiceHostViewController *viewServiceHostViewController; // @synthesize viewServiceHostViewController=_viewServiceHostViewController;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(nonatomic) __weak id <VSViewServiceRequestOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) VSViewServiceRequest *viewServiceRequest; // @synthesize viewServiceRequest=_viewServiceRequest;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
- (void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
- (void)dismissViewServiceHostViewController:(id)arg1;
- (void)presentViewServiceHostViewController:(id)arg1;
- (void)_dismissViewControllerIfRequired;
- (void)_dismissViewController;
- (void)_presentViewController;
- (id)initWithViewServiceRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

