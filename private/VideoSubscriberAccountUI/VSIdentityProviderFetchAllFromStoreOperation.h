//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

#import <VideoSubscriberAccountUI/VSIdentityProviderFetchAllResult-Protocol.h>

@class NSString, VSOptional, VSStoreRequestOperation;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation <VSIdentityProviderFetchAllResult>
{
    VSStoreRequestOperation *_requestOperation;
    VSOptional *_result;
}

@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) VSStoreRequestOperation *requestOperation; // @synthesize requestOperation=_requestOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_handleResult:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
