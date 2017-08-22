//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MaterialKit/MTMaterialSettingsObserving-Protocol.h>

@class MTVibrantStylingProvider, NSString;
@protocol MTMaterialSettings, MTMaterialSettings><MTMaterialSettingsObservable;

@interface MTMaterialView : UIView <MTMaterialSettingsObserving>
{
    id <MTMaterialSettings> _settings;
    unsigned long long _options;
    UIView *_backdropView;
    UIView *_primaryOverlayView;
    UIView *_secondaryOverlayView;
    _Bool _cornerRadiusIsContinuous;
    _Bool _isConfiguredAsOverlay;
    _Bool _isInitialWeighting;
    _Bool _highlighted;
    _Bool _shouldCrossfadeIfNecessary;
    _Bool _forceCrossfadeIfNecessary;
    NSString *_groupName;
    double _weighting;
    CDUnknownBlockType _backdropScaleAdjustment;
}

+ (void)_validateRecipe:(long long *)arg1 andOptions:(unsigned long long *)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3;
+ (void)initialize;
+ (id)materialViewWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool forceCrossfadeIfNecessary; // @synthesize forceCrossfadeIfNecessary=_forceCrossfadeIfNecessary;
@property(nonatomic) _Bool shouldCrossfadeIfNecessary; // @synthesize shouldCrossfadeIfNecessary=_shouldCrossfadeIfNecessary;
@property(copy, nonatomic) CDUnknownBlockType backdropScaleAdjustment; // @synthesize backdropScaleAdjustment=_backdropScaleAdjustment;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_isCrossfadeNecessary;
- (id)_backdropLayer;
- (id)_mtBackdropView;
- (_Bool)_supportsVariableWeighting;
- (void)_reduceTransparencyStatusDidChange;
- (id)_observableSettings;
- (void)_configureSecondaryOverlayViewIfNecessaryWithWeighting:(double)arg1;
- (void)_configurePrimaryOverlayViewIfNecessaryWithWeighting:(double)arg1;
- (id)_basicOverlaySettings;
- (id)_configureOverlayView:(id *)arg1 withOptions:(unsigned long long)arg2 color:(id)arg3 alpha:(double)arg4 weighting:(double)arg5;
- (id)_configureOverlayView:(id *)arg1 ofClass:(Class)arg2 withOptions:(unsigned long long)arg3 color:(id)arg4 alpha:(double)arg5 weighting:(double)arg6;
- (void)_configureOverlayView:(id)arg1 withColor:(id)arg2 alpha:(double)arg3 weighting:(double)arg4;
- (void)_adjustScaleOfBackdropView:(id)arg1 ifNecessaryWithWeighting:(double)arg2;
- (void)_configureMTBackdropView:(id)arg1 withWeighting:(double)arg2;
- (void)_configureBackdropViewIfNecessaryWithWeighting:(double)arg1;
- (id)_luminanceOverlaySettings;
- (id)_backdropViewSettingsForMaterialSettings:(id)arg1 options:(unsigned long long)arg2;
- (void)_configureIfNecessaryWithWeighting:(double)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (double)cornerRadius;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool allowsInPlaceFiltering;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;
@property(readonly, nonatomic) id <MTMaterialSettings><MTMaterialSettingsObservable> materialSettings;
- (void)_transitionToSettings:(id)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

