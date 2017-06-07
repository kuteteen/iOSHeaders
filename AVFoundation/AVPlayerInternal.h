//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSession, AVAudioSessionMediaPlayerOnly, AVOutputContext, AVPixelBufferAttributeMediator, AVPlayerItem, AVPropertyStorage, AVWeakReference, NSArray, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol AVCallbackCancellation><AVKVOIntrospection, OS_dispatch_queue;

@interface AVPlayerInternal : NSObject
{
    AVWeakReference *weakReference;
    AVPropertyStorage *propertyStorage;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *layerInteractionQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *currentItemPropertyUpdateQueue;
    NSObject<OS_dispatch_queue> *layersQ;
    struct OpaqueCMTimebase *proxyTimebase;
    _Bool logPerformanceData;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    void *IAPDCallbackToken;
    struct OpaqueFigSimpleMutex *prerollIDMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    long long status;
    NSError *error;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    NSMutableSet *items;
    NSArray *queueModifications;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVAudioSession *audioSession;
    AVOutputContext *outputContext;
    _Bool IOwnTheFigPlayer;
    NSMutableArray *handlersToCallWhenReadyToPlay;
    struct __CFDictionary *videoLayers;
    NSMutableArray *subtitleLayers;
    NSMutableArray *closedCaptionLayers;
    NSHashTable *avPlayerLayers;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    CDUnknownBlockType prerollCompletionHandler;
    id <AVCallbackCancellation><AVKVOIntrospection> currentItemSuppressesVideoLayersCallbackInvoker;
    id <AVCallbackCancellation><AVKVOIntrospection> currentItemPreferredPixelBufferAttributesCallbackInvoker;
    struct OpaqueFigPlayer *figPlayer;
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;
    _Bool needsToCreateFigPlayer;
    NSString *externalPlaybackVideoGravity;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    NSArray *itemsInFigPlayQueue;
    NSArray *expectedAssetTypes;
    _Bool reevaluateBackgroundPlayback;
    _Bool hostApplicationInForeground;
    _Bool hadAssociatedOnscreenPlayerLayerWhenSuspended;
    NSDictionary *vibrationPattern;
    struct OpaqueCMClock *figMasterClock;
    _Bool autoSwitchStreamVariants;
    _Bool preparesItemsForPlaybackAsynchronously;
    _Bool allowsOutOfBandTextTrackRendering;
    _Bool shouldReduceResourceUsage;
    NSString *playerRole;
    NSString *multichannelAudioStrategy;
    NSString *captionPipelineStrategy;
    NSString *captionRenderingStrategy;
    _Bool automaticallyWaitsToMinimizeStalling;
    _Bool usesLegacyAutomaticWaitingBehavior;
    _Bool layerDestinationIsTVOut;
    NSArray *displaysUsedForPlayback;
    NSString *ancillaryPerformanceInformationForDisplay;
}

@end

