//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NUBufferRenderClient, NUComposition, NUImageExportClient, NUImagePropertiesClient, NUPriority, NURenderContext, NUVideoExportClient, NUVideoPropertiesClient, PLEditSource, PLPhotoEditModel;

@interface PLPhotoEditRenderer : NSObject
{
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    double _smartBWLevelInCachedAdjustments;
    NSDictionary *_smartBWStatisticsInCachedAdjustments;
    NUBufferRenderClient *_renderClient;
    NUImagePropertiesClient *_propertiesClient;
    NUImageExportClient *_imageExportClient;
    NUVideoExportClient *_videoExportClient;
    NUVideoPropertiesClient *_videoPropertiesClient;
    NURenderContext *_videoRenderContext;
    NUPriority *_priority;
    NURenderContext *_geometryContext;
    NURenderContext *_smartToneAutoCalculatorContext;
    PLEditSource *_editSource;
    PLPhotoEditModel *_photoEditModel;
    long long _smartFiltersCubeSize;
}

+ (void)updatePhotoEditModel:(id)arg1 fromPortraitMetadata:(id)arg2;
+ (_Bool)isSupportedAutoLoopRecipe:(id)arg1;
+ (_Bool)currentDeviceShouldAllowLocalLight;
+ (id)_editedImagePropertiesFromOriginalImageProperties:(id)arg1 preserveRegions:(_Bool)arg2;
+ (id)newImageDataFromCGImage:(struct CGImage *)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(_Bool)arg4;
+ (id)compositionWithModel:(id)arg1 source:(id)arg2;
+ (void)initialize;
@property(nonatomic) long long smartFiltersCubeSize; // @synthesize smartFiltersCubeSize=_smartFiltersCubeSize;
@property(retain, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
- (void).cxx_destruct;
- (void)applySourceChangesToModel:(id)arg1 source:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)getGeometryForComposition:(id)arg1;
- (void)calculateLongExposureFusionParametersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_smartBWAdjustments;
- (id)_smartColorAdjustments;
- (id)_smartToneAdjustments;
@property(readonly, nonatomic) double smartBWBaseGrain;
@property(readonly, nonatomic) double smartBWBaseHue;
@property(readonly, nonatomic) double smartBWBaseTone;
@property(readonly, nonatomic) double smartBWBaseNeutralGamma;
@property(readonly, nonatomic) double smartBWBaseStrength;
- (double)_smartBWBaseValueForKey:(id)arg1 defaultValue:(double)arg2;
@property(readonly, nonatomic) double smartColorBaseCast;
@property(readonly, nonatomic) double smartColorBaseVibrancy;
@property(readonly, nonatomic) double smartColorBaseContrast;
@property(readonly, nonatomic) double smartToneBaseLocalLight;
@property(readonly, nonatomic) double smartToneBaseBlackPoint;
@property(readonly, nonatomic) double smartToneBaseShadows;
@property(readonly, nonatomic) double smartToneBaseHighlights;
@property(readonly, nonatomic) double smartToneBaseExposure;
@property(readonly, nonatomic) double smartToneBaseContrast;
@property(readonly, nonatomic) double smartToneBaseBrightness;
- (void)generateJPEGImageDataWithCompressionQuality:(double)arg1 livePhotoPairingIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_generateJPEGImageDataForComposition:(id)arg1 withCompressionQuality:(double)arg2 livePhotoPairingIdentifier:(id)arg3 properties:(id)arg4 depthData:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)renderVideoWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, retain, nonatomic) NUComposition *composition;
- (void)exportVideoToURL:(id)arg1 preset:(id)arg2 livePhotoPairingIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_exportLivePhotoVideoToURL:(id)arg1 preset:(id)arg2 composition:(id)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithEditSource:(id)arg1 renderPriority:(long long)arg2;
- (id)initWithEditSource:(id)arg1;

@end

