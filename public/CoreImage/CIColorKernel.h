//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel
{
}

+ (id)kernelWithString:(id)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 arguments:(id)arg2;
- (id)applyWithExtent:(struct CGRect)arg1 arguments:(id)arg2 options:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (void)setCanReduceOutputChannels:(_Bool)arg1;
- (_Bool)canReduceOutputChannels;
- (void)setPreservesRange:(_Bool)arg1;
- (_Bool)preservesRange;
@property(nonatomic) _Bool perservesAlpha;
- (id)_initWithDict:(id)arg1;

@end

