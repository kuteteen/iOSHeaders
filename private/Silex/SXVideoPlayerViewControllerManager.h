//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoPlayerViewControllerProvider.h"

@class NSMutableDictionary, NSString, NSURL, SXVolumeProvider;

@interface SXVideoPlayerViewControllerManager : NSObject <SXVideoPlayerViewControllerProvider>
{
    _Bool _presentedAndAppeared;
    SXVolumeProvider *_volumeProvider;
    NSURL *_autoplayURL;
    NSMutableDictionary *_videoAnalyticsRouters;
    NSMutableDictionary *_visibilityMonitors;
    NSMutableDictionary *_videoPlayerViewControllers;
    NSMutableDictionary *_loseOwnershipBlocks;
    NSMutableDictionary *_pendingVideoPlayerViewControllers;
    NSMutableDictionary *_pendingLoseOwnershipBlocks;
    NSMutableDictionary *_pendingReceiveOwnershipBlocks;
}

@property(readonly, nonatomic) NSMutableDictionary *pendingReceiveOwnershipBlocks; // @synthesize pendingReceiveOwnershipBlocks=_pendingReceiveOwnershipBlocks;
@property(readonly, nonatomic) NSMutableDictionary *pendingLoseOwnershipBlocks; // @synthesize pendingLoseOwnershipBlocks=_pendingLoseOwnershipBlocks;
@property(readonly, nonatomic) NSMutableDictionary *pendingVideoPlayerViewControllers; // @synthesize pendingVideoPlayerViewControllers=_pendingVideoPlayerViewControllers;
@property(readonly, nonatomic) NSMutableDictionary *loseOwnershipBlocks; // @synthesize loseOwnershipBlocks=_loseOwnershipBlocks;
@property(readonly, nonatomic) NSMutableDictionary *videoPlayerViewControllers; // @synthesize videoPlayerViewControllers=_videoPlayerViewControllers;
@property(readonly, nonatomic) NSMutableDictionary *visibilityMonitors; // @synthesize visibilityMonitors=_visibilityMonitors;
@property(readonly, nonatomic) NSMutableDictionary *videoAnalyticsRouters; // @synthesize videoAnalyticsRouters=_videoAnalyticsRouters;
@property(copy, nonatomic) NSURL *autoplayURL; // @synthesize autoplayURL=_autoplayURL;
@property(readonly, nonatomic) SXVolumeProvider *volumeProvider; // @synthesize volumeProvider=_volumeProvider;
@property(nonatomic) _Bool presentedAndAppeared; // @synthesize presentedAndAppeared=_presentedAndAppeared;
- (void).cxx_destruct;
- (void)configureAutoplayForVideoWithURL:(id)arg1 analyticsRouter:(id)arg2;
- (void)registerExistingVideoPlayerViewController:(id)arg1 URL:(id)arg2 analyticsRouter:(id)arg3 videoPlayerVisibilityMonitor:(id)arg4 loseOwnershipBlock:(CDUnknownBlockType)arg5;
- (id)videoPlayerViewControllerForURL:(id)arg1 receiveOwnershipBlock:(CDUnknownBlockType)arg2;
- (id)initWithVolumeProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

