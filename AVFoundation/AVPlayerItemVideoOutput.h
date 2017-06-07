//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal, NSObject;
@protocol AVPlayerItemOutputPullDelegate, OS_dispatch_queue;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput
{
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

- (void)_dispatchOutputSequenceWasFlushed;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_setTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg1;
- (struct OpaqueFigVisualContext *)_visualContext;
- (void)_setTagBuffersWithConversionInformation;
- (void)_respondToPlayerItemFormatDescriptionsChange;
- (_Bool)suppressesPlayerRendering;
- (void)setSuppressesPlayerRendering:(_Bool)arg1;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1 remove:(_Bool)arg2 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg3;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2;
- (struct __CVBuffer *)_copyPixelBufferForItemTimeWithOptions:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2 options:(unsigned int)arg3;
- (_Bool)hasNewPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1;
- (CDStruct_1b6d18a9)earliestAvailablePixelBufferItemTime;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) id <AVPlayerItemOutputPullDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_detachFromPlayerItem;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (id)_pixelBufferAttributes;
- (long long)clientStateOnRequestedMediaDataChangeNotification;
- (void)dealloc;
- (void)finalize;
- (id)initWithOutputSettings:(id)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (id)init;
- (_Bool)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(_Bool)arg2 withExceptionReason:(id *)arg3;

@end

