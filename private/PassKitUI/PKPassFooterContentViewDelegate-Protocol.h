//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPassFooterContentView;

@protocol PKPassFooterContentViewDelegate <NSObject>
- (void)passFooterContentViewDidEndAuthenticating:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidBeginAuthenticating:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(PKPassFooterContentView *)arg1;
@end

