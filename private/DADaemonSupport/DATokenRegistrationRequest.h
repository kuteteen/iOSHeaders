//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DADaemonSupport/NSURLConnectionDelegate-Protocol.h>

@class AKAppleIDSession, DARefreshWrapper, NSData, NSMutableURLRequest, NSString, NSURLConnection;
@protocol DATokenRegistrationDelegate;

@interface DATokenRegistrationRequest : NSObject <NSURLConnectionDelegate>
{
    _Bool _shouldRetry;
    id <DATokenRegistrationDelegate> _delegate;
    DARefreshWrapper *_wrapper;
    NSString *_onBehalfOfBundleIdentifier;
    NSData *_token;
    NSString *_pushKey;
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    AKAppleIDSession *_hsa2Session;
}

+ (id)requestWithToken:(id)arg1 pushKey:(id)arg2 wrapper:(id)arg3 onBehalfOf:(id)arg4;
@property(retain, nonatomic) AKAppleIDSession *hsa2Session; // @synthesize hsa2Session=_hsa2Session;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak NSString *pushKey; // @synthesize pushKey=_pushKey;
@property(nonatomic) __weak NSData *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *onBehalfOfBundleIdentifier; // @synthesize onBehalfOfBundleIdentifier=_onBehalfOfBundleIdentifier;
@property(nonatomic) __weak DARefreshWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) __weak id <DATokenRegistrationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryRegistrationRequest;
- (void)sendRegistrationRequestForAccount:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (id)initWithToken:(id)arg1 pushKey:(id)arg2 wrapper:(id)arg3 onBehalfOf:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
