//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PKContactlessCardIngester : NSObject
{
    _Bool _listening;
    NSString *_pushTopic;
    NSDictionary *_readerModeMetadata;
    id <PKContactlessCardIngesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_contactlessCardIngesterQueue;
    CDUnknownBlockType _cardSessionTokenCompletionHandler;
    CDUnknownBlockType _disableCardCompletionHandler;
}

+ (id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2;
+ (id)debugDescriptionForStatus:(unsigned long long)arg1;
+ (_Bool)isSupported;
- (void).cxx_destruct;
- (void)_startListeningToRemoteAdminEventsIfRequired;
- (void)_stopListeningToRemoteAdminEvents;
- (void)_ingestCardWithCardSessionToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ingestCardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cancelCardIngestion;
- (void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)ingestCardWithSuccessHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2;

@end

