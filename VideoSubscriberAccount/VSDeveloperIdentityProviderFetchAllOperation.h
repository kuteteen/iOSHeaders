//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

#import <VideoSubscriberAccount/VSIdentityProviderFetchAllResult-Protocol.h>

@class NSString, VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation <VSIdentityProviderFetchAllResult>
{
    VSOptional *_result;
    VSDeveloperServiceConnection *_connection;
}

@property(retain, nonatomic) VSDeveloperServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)executionDidBegin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

