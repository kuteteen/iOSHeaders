//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentAuthorizationViewPresenting.h"

@class NSString;

@interface PKPaymentSummaryItemsViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>
{
}

+ (void)presentView:(id)arg1 withDataItem:(id)arg2 forPaymentRequest:(id)arg3;
+ (void)presentCell:(id)arg1 withDataItem:(id)arg2 shouldShowSeperator:(_Bool)arg3 forPaymentRequest:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

