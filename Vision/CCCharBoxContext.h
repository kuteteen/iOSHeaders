//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CCCharBoxContext : NSObject
{
    unsigned short medianHeightTop;
    unsigned short medianHeightBottom;
    short loopBigBox;
    short loopBigBoxPrev;
    unsigned short filterWalkUpDownCount;
    unsigned int allocationSize;
    float mTop;
    float mBottom;
    float bTop;
    float bBottom;
    float posUL;
    float posLL;
    float posUR;
    float posLR;
    float *floatVectorSumProd;
    char *pulseVectorHeightCharBox;
    char *pulseVectorHeightCharBoxAdaptive;
    unsigned long long *charBoxFlags;
    unsigned short *charboxROIFullVectorRowStart;
    unsigned short *charboxROIFullVectorHeight2;
}

@property unsigned short filterWalkUpDownCount; // @synthesize filterWalkUpDownCount;
@property short loopBigBoxPrev; // @synthesize loopBigBoxPrev;
@property short loopBigBox; // @synthesize loopBigBox;
@property unsigned short medianHeightBottom; // @synthesize medianHeightBottom;
@property unsigned short medianHeightTop; // @synthesize medianHeightTop;
@property float posLR; // @synthesize posLR;
@property float posUR; // @synthesize posUR;
@property float posLL; // @synthesize posLL;
@property float posUL; // @synthesize posUL;
@property float bBottom; // @synthesize bBottom;
@property float bTop; // @synthesize bTop;
@property float mBottom; // @synthesize mBottom;
@property float mTop; // @synthesize mTop;
@property unsigned int allocationSize; // @synthesize allocationSize;
@property unsigned short *charboxROIFullVectorHeight2; // @synthesize charboxROIFullVectorHeight2;
@property unsigned short *charboxROIFullVectorRowStart; // @synthesize charboxROIFullVectorRowStart;
@property unsigned long long *charBoxFlags; // @synthesize charBoxFlags;
@property char *pulseVectorHeightCharBoxAdaptive; // @synthesize pulseVectorHeightCharBoxAdaptive;
@property char *pulseVectorHeightCharBox; // @synthesize pulseVectorHeightCharBox;
@property float *floatVectorSumProd; // @synthesize floatVectorSumProd;
- (void)releaseAllocations;
- (void)resetBoxBounds;
- (void)copyFlagValue:(unsigned long long)arg1 toTarget:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (unsigned int)checkFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)clearFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)setFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;

@end

