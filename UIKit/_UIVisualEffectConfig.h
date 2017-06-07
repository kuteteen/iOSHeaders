//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, _UIVisualEffectLayerConfig;

@interface _UIVisualEffectConfig : NSObject
{
    NSMutableArray *_layerConfigs;
    _UIVisualEffectLayerConfig *_contentConfig;
}

+ (id)configWithLayerConfigs:(id)arg1;
+ (id)configWithContentConfig:(id)arg1;
@property(readonly, nonatomic) _UIVisualEffectLayerConfig *contentConfig; // @synthesize contentConfig=_contentConfig;
@property(readonly, nonatomic) NSArray *layerConfigs; // @synthesize layerConfigs=_layerConfigs;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateLayerConfigs:(CDUnknownBlockType)arg1;
- (void)addLayerConfig:(id)arg1;

@end

