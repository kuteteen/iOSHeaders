//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class CALayer, UIColor;

@interface NTKExplorerHandsView : NTKAnalogHandsView
{
    CALayer *_secondHandDot;
    CALayer *_minuteHandDot;
    CALayer *_minuteHandTransitionBodyLayer;
    CALayer *_minuteHandTransitionStemLayer;
    CALayer *_minuteHandTransitionPegLayer;
    CALayer *_hourHandTransitionBodyLayer;
    CALayer *_hourHandTransitionStemLayer;
    UIColor *_hourAndMinuteHandDotColor;
    UIColor *_secondHandDotColor;
}

@property(retain, nonatomic) UIColor *secondHandDotColor; // @synthesize secondHandDotColor=_secondHandDotColor;
@property(retain, nonatomic) UIColor *hourAndMinuteHandDotColor; // @synthesize hourAndMinuteHandDotColor=_hourAndMinuteHandDotColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_addTransitionLayers;
- (void)_removeTransitionLayers;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)setInlayColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

