//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NUVideoAdMetadata;

@protocol NUVideoAdEventTracker <NSObject>

@optional
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackFinishedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackPausedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)impressionThresholdReachedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
@end

