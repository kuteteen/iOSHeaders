//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <NSCopying>
{
    int _neuronType;
    float _a;
    float _b;
    float _c;
    NSData *_data;
    _Bool _noCopy;
    unsigned long long _count;
}

+ (id)cnnNeuronPReLUDescriptorWithData:(id)arg1 noCopy:(_Bool)arg2;
+ (id)cnnNeuronDescriptorWithType:(int)arg1;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) float c; // @synthesize c=_c;
@property(nonatomic) float b; // @synthesize b=_b;
@property(nonatomic) float a; // @synthesize a=_a;
@property(nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

