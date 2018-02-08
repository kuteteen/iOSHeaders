//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNPooling.h>

@interface MPSCNNPoolingAverage : MPSCNNPooling
{
    unsigned long long _zeroPadSizeX;
    unsigned long long _zeroPadSizeY;
}

@property(nonatomic) unsigned long long zeroPadSizeY; // @synthesize zeroPadSizeY=_zeroPadSizeY;
@property(nonatomic) unsigned long long zeroPadSizeX; // @synthesize zeroPadSizeX=_zeroPadSizeX;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)newPlugin;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5;

@end

