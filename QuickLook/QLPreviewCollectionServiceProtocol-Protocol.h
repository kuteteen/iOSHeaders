//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>

@class NSUUID;
@protocol QLNotificationCenterProtocol;

@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
- (void)invalidatePreviewCollection;
- (void)getNetworkObserverWithCompletionBlock:(void (^)(id <QLNetworkStateListener>))arg1;
- (void)setNotificationCenter:(id <QLNotificationCenterProtocol>)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(NSUUID *)arg1;
@end

