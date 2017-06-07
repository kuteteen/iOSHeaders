//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL, NSUUID;

@protocol _NCWidgetViewController_Service_IPC
- (void)__updateVisibilityState:(long long)arg1;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__performUpdateWithReplyHandler:(void (^)(unsigned long long, _Bool))arg1;
- (void)__requestEncodedLayerTreeToURL:(NSURL *)arg1 withCodingImageFormat:(NSString *)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(NSUUID *)arg1;
- (void)__prepareForAnimationsForRequestWithIdentifier:(NSUUID *)arg1 withReplyHandler:(void (^)(void))arg2;
- (void)__viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(NSUUID *)arg2;

@optional
- (void)__closeTransactionForPreferredHeightChangeWithIdentifier:(NSUUID *)arg1;
- (void)__setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)__setActiveDisplayMode:(long long)arg1 requestIdentifier:(NSUUID *)arg2;
@end

