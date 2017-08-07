//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRoadSignArtwork : NSObject
{
    struct __CTLine *_line;
    struct __CTFrame *_frame;
    struct __CTFramesetter *_framesetter;
    struct RoadSignMetrics _signMetrics;
    struct RoadSignTextMetrics _textMetrics;
    struct RoadSignGeneratedMetrics _generatedMetrics;
    struct RoadSignColoring _signColoring;
    struct CGImage *_glyph;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Box_3fb92e00)localCollisionBounds;
- (Box_3fb92e00)localSignBounds;
- (Box_3fb92e00)localRenderBounds;
- (Matrix_8746f91e)offsetPixelForPixel:(Matrix_8746f91e)arg1;
- (id)image;
- (void)dealloc;
- (id)initWithString:(id)arg1 signMetrics:(struct RoadSignMetrics)arg2 textMetrics:(struct RoadSignTextMetrics)arg3 signColoring:(struct RoadSignColoring)arg4 glyph:(struct CGImage *)arg5;

@end

