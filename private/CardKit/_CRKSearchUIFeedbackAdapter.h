//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKFeedbackDelegateProxying.h"
#import "SearchUIFeedbackDelegate.h"

@class NSString;

@interface _CRKSearchUIFeedbackAdapter : NSObject <SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying>
{
    id <CRKFeedbackDelegate> _feedbackDelegate;
}

@property(retain, nonatomic) id <CRKFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;
- (void)didEngageCardSection:(id)arg1;
- (_Bool)shouldHandleCardSectionEngagement:(id)arg1;
- (id)feedbackListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

