//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIVisualEffectLayerConfig.h>

@class UIColor;

@interface _UIVisualEffectTintLayerConfig : _UIVisualEffectLayerConfig
{
    UIColor *_tintColor;
}

+ (id)layerWithTintColor:(id)arg1 filterType:(id)arg2;
+ (id)layerWithTintColor:(id)arg1;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (id)description;
- (void)deconfigureLayerView:(id)arg1;
- (void)configureLayerView:(id)arg1;

@end

