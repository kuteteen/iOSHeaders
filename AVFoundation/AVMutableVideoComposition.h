//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition
{
    AVMutableVideoCompositionInternal *_mutableVideoComposition;
}

+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoComposition;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property(copy, nonatomic) NSArray *instructions;
@property(nonatomic) float renderScale;
@property(nonatomic) struct CGSize renderSize;
@property(nonatomic) int sourceTrackIDForFrameTiming;
@property(nonatomic) CDStruct_1b6d18a9 frameDuration;
@property(retain, nonatomic) Class customVideoCompositorClass;
- (void)setBuiltInCompositorName:(id)arg1;
- (id)builtInCompositorName;
- (void)setColorTransferFunction:(id)arg1;
- (id)colorTransferFunction;
- (void)setColorYCbCrMatrix:(id)arg1;
- (id)colorYCbCrMatrix;
- (void)setColorPrimaries:(id)arg1;
- (id)colorPrimaries;

@end

