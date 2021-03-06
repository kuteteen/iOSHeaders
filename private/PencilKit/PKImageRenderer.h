//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKRendererController;

@interface PKImageRenderer : NSObject
{
    PKRendererController *_rendererController;
    double _scale;
    long long _cancelCount;
}

@property(nonatomic) long long cancelCount; // @synthesize cancelCount=_cancelCount;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) PKRendererController *rendererController; // @synthesize rendererController=_rendererController;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderDrawing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;

@end

