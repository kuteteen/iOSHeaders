//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SKProductStorePromotionController : NSObject <SKProductsRequestDelegate>
{
    NSMutableArray *_fetchOrderProductsRequests;
    NSMutableArray *_fetchOrderCompletions;
    NSMutableArray *_fetchOrderOrders;
    NSObject<OS_dispatch_queue> *_fetchOrderQueue;
}

+ (id)defaultController;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)updateStorePromotionOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchStorePromotionOrderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

