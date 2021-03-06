//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedTransforming.h"

@class FCPurchaseController, NSString;

@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming>
{
    unsigned long long _minimumResultHeadlineCount;
    double _paidHeadlineRatio;
    unsigned long long _maxiumInaccessibleHeadlineCount;
    FCPurchaseController *_purchaseController;
}

+ (id)transformationWithCoreConfiguration:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(nonatomic) unsigned long long maxiumInaccessibleHeadlineCount; // @synthesize maxiumInaccessibleHeadlineCount=_maxiumInaccessibleHeadlineCount;
@property(nonatomic) double paidHeadlineRatio; // @synthesize paidHeadlineRatio=_paidHeadlineRatio;
@property(nonatomic) unsigned long long minimumResultHeadlineCount; // @synthesize minimumResultHeadlineCount=_minimumResultHeadlineCount;
- (void).cxx_destruct;
- (id)transformHeadlines:(id)arg1;
- (id)transformFeedItems:(id)arg1;
- (id)transformItems:(id)arg1 isPaidBlock:(CDUnknownBlockType)arg2 sourceChannelIDProvider:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

