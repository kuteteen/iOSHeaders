//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUVideoUtilities : NSObject
{
}

+ (id)videoCompositionDescription:(id)arg1;
+ (id)videoDescription:(id)arg1;
+ (id)repeatVideo:(id)arg1 count:(long long)arg2 error:(out id *)arg3;
+ (id)repeatAudio:(id)arg1 count:(long long)arg2 error:(out id *)arg3;
+ (id)repeatVideoComposition:(id)arg1 count:(long long)arg2 error:(out id *)arg3;
+ (CDStruct_e83c9415)conformRange:(CDStruct_e83c9415)arg1 inRange:(CDStruct_e83c9415)arg2;
+ (id)newPixelBufferOfSize:(CDStruct_912cb5d2)arg1 format:(unsigned int)arg2;
+ (long long)videoOrientationForAsset:(id)arg1 videoComposition:(id)arg2;
+ (struct __CVBuffer *)readVideoFrameAtTime:(CDStruct_1b6d18a9)arg1 fromAsset:(id)arg2 outputSettings:(id)arg3 videoComposition:(id)arg4 error:(out id *)arg5;
+ (id)readerOutputForAsset:(id)arg1 outputSettings:(id)arg2 videoComposition:(id)arg3 error:(out id *)arg4;
+ (id)deepMutableCopyVideoComposition:(id)arg1;
+ (_Bool)updateVideoMetadataAtURL:(id)arg1 withItems:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 error:(out id *)arg4;
+ (_Bool)readFromReader:(id)arg1 andWriteToWriter:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 error:(out id *)arg4;
+ (CDStruct_1b6d18a9)readStillImageTimeFromVideoAsset:(id)arg1;
+ (id)metadataTrackWithStillImageDisplayTimeMarkerInLivePhotoAsset:(id)arg1;
+ (void)readNextSampleBuffer:(id)arg1 output:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)readNextPixelBuffer:(id)arg1 output:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (CDStruct_1b6d18a9)minimumFrameDurationForAssetTrack:(id)arg1;
+ (CDStruct_1b6d18a9)minimumFrameDurationForAsset:(id)arg1;
+ (id)firstEnabledVideoTrackInAsset:(id)arg1 error:(out id *)arg2;
+ (id)bestOutputSettingsPresetForTargetVideoSize:(CDStruct_912cb5d2)arg1;
+ (id)rgbVideoSettingsForAVAssetReader;
+ (id)defaultVideoSettingsForAVAssetReader;

@end

