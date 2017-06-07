//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost>
{
    AVAssetWriterInputInternal *_internal;
}

+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (void)initialize;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
@property(readonly) long long numberOfAppendFailures;
- (_Bool)_appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (long long)_appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)currentPassDescription;
- (_Bool)canPerformMultiplePasses;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;
- (_Bool)performsMultiPassEncodingIfSupported;
@property(nonatomic) _Bool expectsMediaDataInRealTime;
@property(readonly, nonatomic, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)_transitionToTerminalStatus:(long long)arg1;
- (_Bool)_prepareToFinishWritingReturningError:(id *)arg1;
- (void)_prepareToEndSession;
- (void)_didStartInitialSession;
- (_Bool)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaFileType:(id)arg2 error:(id *)arg3;
- (void)_setAttachedAdaptor:(id)arg1;
@property(readonly, nonatomic, getter=_isAttachedToAdaptor) _Bool attachedToAdaptor;
- (id)_attachedAdaptor;
@property(copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;
@property(readonly, nonatomic, getter=_pixelBufferPool) struct __CVPixelBufferPool *pixelBufferPool;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (id)sampleReferenceBaseURL;
- (void)setWritesMediaDataToBeginningOfFile:(_Bool)arg1;
- (_Bool)writesMediaDataToBeginningOfFile;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (long long)preferredMediaChunkSize;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (long long)preferredMediaChunkAlignment;
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)preferredMediaChunkDuration;
@property(readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property(nonatomic, getter=_provisionalAlternateGroupID, setter=_setProvisionalAlternateGroupID:) short provisionalAlternateGroupID;
@property(nonatomic, getter=_alternateGroupID, setter=_setAlternateGroupID:) short alternateGroupID;
- (void)setLayer:(long long)arg1;
- (long long)layer;
- (void)setPreferredVolume:(float)arg1;
- (float)preferredVolume;
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;
- (_Bool)marksOutputTrackAsEnabled;
- (void)setExtendedLanguageTag:(id)arg1;
- (id)extendedLanguageTag;
- (void)setLanguageCode:(id)arg1;
- (id)languageCode;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transform;
@property(copy, nonatomic) NSArray *metadata;
- (int)outputTrackID;
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *sourceFormatHint;
@property(readonly, nonatomic) NSDictionary *outputSettings;
@property(readonly, nonatomic, getter=_outputSettingsObject) AVOutputSettings *outputSettingsObject;
@property(readonly, nonatomic) NSString *mediaType;
@property(retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;
@property(readonly, nonatomic, getter=_status) long long status;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
@property(retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

