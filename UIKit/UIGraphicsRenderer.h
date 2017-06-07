//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, UIGraphicsRendererFormat;
@protocol OS_dispatch_queue;

@interface UIGraphicsRenderer : NSObject
{
    UIGraphicsRendererFormat *_format;
    NSMutableSet *_reuseSet;
    NSObject<OS_dispatch_queue> *_reuseAccessQueue;
}

+ (_Bool)_supportsContextReuse;
+ (void)initialize;
+ (void)__applicationWillEnterForeground:(id)arg1;
+ (void)__applicationDidEnterBackground:(id)arg1;
+ (void)_destroyCGContext:(struct CGContext *)arg1 withRenderer:(id)arg2;
+ (void)prepareCGContext:(struct CGContext *)arg1 withRendererContext:(id)arg2;
+ (struct CGContext *)_contextWithFormat:(id)arg1 renderer:(id)arg2;
+ (struct CGContext *)contextWithFormat:(id)arg1;
+ (Class)rendererContextClass;
@property(readonly, nonatomic) UIGraphicsRendererFormat *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (void)_disposeReusePool;
- (void)_disposeReusedPointer:(id)arg1;
- (void)_preparePointerForReuse:(id)arg1;
- (id)_dequeuePointerForReuse;
- (_Bool)runDrawingActions:(CDUnknownBlockType)arg1 completionActions:(CDUnknownBlockType)arg2 format:(id)arg3 error:(id *)arg4;
- (_Bool)runDrawingActions:(CDUnknownBlockType)arg1 completionActions:(CDUnknownBlockType)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool allowsImageOutput;
- (void)dealloc;
- (void)_configureReuseState;
- (id)initWithFormat:(id)arg1 bounds:(struct CGRect)arg2;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)init;
- (void)popContext:(id)arg1;
- (void)pushContext:(id)arg1;

@end

