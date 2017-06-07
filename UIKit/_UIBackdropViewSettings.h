//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSValue, UIColor, UIImage, _UIBackdropColorSettings, _UIBackdropView;

@interface _UIBackdropViewSettings : NSObject
{
    struct __CFRunLoopObserver *_runLoopObserver;
    _UIBackdropView *_backdrop;
    long long _style;
    long long _graphicsQuality;
    _Bool _explicitlySetGraphicsQuality;
    _Bool _requiresColorStatistics;
    _UIBackdropColorSettings *_colorSettings;
    long long _renderingHint;
    long long _stackingLevel;
    _Bool _highlighted;
    _Bool _selected;
    _Bool _enabled;
    _Bool _backdropVisible;
    double _zoom;
    double _grayscaleTintLevel;
    double _grayscaleTintAlpha;
    double _grayscaleTintMaskAlpha;
    UIImage *_grayscaleTintMaskImage;
    _Bool _lightenGrayscaleWithSourceOver;
    UIColor *_colorTint;
    double _colorTintAlpha;
    double _colorTintMaskAlpha;
    UIImage *_colorTintMaskImage;
    double _colorBurnTintLevel;
    double _colorBurnTintAlpha;
    UIImage *_colorBurnTintMaskImage;
    double _darkeningTintAlpha;
    double _darkeningTintHue;
    double _darkeningTintSaturation;
    double _darkeningTintBrightness;
    UIImage *_darkeningTintMaskImage;
    _Bool _darkenWithSourceOver;
    double _blurRadius;
    NSString *_blurQuality;
    double _saturationDeltaFactor;
    double _filterMaskAlpha;
    UIImage *_filterMaskImage;
    UIColor *_legibleColor;
    UIColor *_combinedTintColor;
    double _scale;
    double _statisticsInterval;
    _Bool _usesBackdropEffectView;
    _Bool _usesGrayscaleTintView;
    _Bool _usesColorTintView;
    _Bool _usesColorBurnTintView;
    _Bool _usesContentView;
    _Bool _usesDarkeningTintView;
    _Bool _usesColorOffset;
    double _colorOffsetAlpha;
    NSValue *_colorOffsetMatrix;
    _Bool _appliesTintAndBlurSettings;
    long long _suppressSettingsDidChange;
    _Bool _designMode;
    long long _blurHardEdges;
    unsigned long long _version;
}

+ (id)darkeningTintColor;
+ (id)settingsForPrivateStyle:(long long)arg1;
+ (id)settingsForStyle:(long long)arg1;
+ (id)settingsForPrivateStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsPreservingHintsFromSettings:(id)arg1 graphicsQuality:(long long)arg2;
@property(nonatomic) _Bool appliesTintAndBlurSettings; // @synthesize appliesTintAndBlurSettings=_appliesTintAndBlurSettings;
@property(retain, nonatomic) NSValue *colorOffsetMatrix; // @synthesize colorOffsetMatrix=_colorOffsetMatrix;
@property(nonatomic) double colorOffsetAlpha; // @synthesize colorOffsetAlpha=_colorOffsetAlpha;
@property(nonatomic) _Bool usesColorOffset; // @synthesize usesColorOffset=_usesColorOffset;
@property(nonatomic) _Bool usesDarkeningTintView; // @synthesize usesDarkeningTintView=_usesDarkeningTintView;
@property(nonatomic) _Bool usesContentView; // @synthesize usesContentView=_usesContentView;
@property(nonatomic) _Bool usesColorBurnTintView; // @synthesize usesColorBurnTintView=_usesColorBurnTintView;
@property(nonatomic) _Bool usesColorTintView; // @synthesize usesColorTintView=_usesColorTintView;
@property(nonatomic) _Bool usesGrayscaleTintView; // @synthesize usesGrayscaleTintView=_usesGrayscaleTintView;
@property(nonatomic) _Bool usesBackdropEffectView; // @synthesize usesBackdropEffectView=_usesBackdropEffectView;
@property(nonatomic, setter=setDesignMode:) _Bool designMode; // @synthesize designMode=_designMode;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) long long suppressSettingsDidChange; // @synthesize suppressSettingsDidChange=_suppressSettingsDidChange;
@property(nonatomic) double statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *legibleColor; // @synthesize legibleColor=_legibleColor;
@property(retain, nonatomic) UIImage *filterMaskImage; // @synthesize filterMaskImage=_filterMaskImage;
@property(nonatomic) double filterMaskAlpha; // @synthesize filterMaskAlpha=_filterMaskAlpha;
@property(nonatomic) double saturationDeltaFactor; // @synthesize saturationDeltaFactor=_saturationDeltaFactor;
@property(nonatomic) long long blurHardEdges; // @synthesize blurHardEdges=_blurHardEdges;
@property(copy, nonatomic) NSString *blurQuality; // @synthesize blurQuality=_blurQuality;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) _Bool darkenWithSourceOver; // @synthesize darkenWithSourceOver=_darkenWithSourceOver;
@property(retain, nonatomic) UIImage *darkeningTintMaskImage; // @synthesize darkeningTintMaskImage=_darkeningTintMaskImage;
@property(nonatomic) double darkeningTintBrightness; // @synthesize darkeningTintBrightness=_darkeningTintBrightness;
@property(nonatomic) double darkeningTintSaturation; // @synthesize darkeningTintSaturation=_darkeningTintSaturation;
@property(nonatomic) double darkeningTintHue; // @synthesize darkeningTintHue=_darkeningTintHue;
@property(nonatomic) double darkeningTintAlpha; // @synthesize darkeningTintAlpha=_darkeningTintAlpha;
@property(retain, nonatomic) UIImage *colorBurnTintMaskImage; // @synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage;
@property(nonatomic) double colorBurnTintAlpha; // @synthesize colorBurnTintAlpha=_colorBurnTintAlpha;
@property(nonatomic) double colorBurnTintLevel; // @synthesize colorBurnTintLevel=_colorBurnTintLevel;
@property(retain, nonatomic) UIImage *colorTintMaskImage; // @synthesize colorTintMaskImage=_colorTintMaskImage;
@property(nonatomic) double colorTintMaskAlpha; // @synthesize colorTintMaskAlpha=_colorTintMaskAlpha;
@property(nonatomic) double colorTintAlpha; // @synthesize colorTintAlpha=_colorTintAlpha;
@property(retain, nonatomic) UIColor *colorTint; // @synthesize colorTint=_colorTint;
@property(nonatomic) _Bool lightenGrayscaleWithSourceOver; // @synthesize lightenGrayscaleWithSourceOver=_lightenGrayscaleWithSourceOver;
@property(retain, nonatomic) UIImage *grayscaleTintMaskImage; // @synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage;
@property(nonatomic) double grayscaleTintMaskAlpha; // @synthesize grayscaleTintMaskAlpha=_grayscaleTintMaskAlpha;
@property(nonatomic) double grayscaleTintAlpha; // @synthesize grayscaleTintAlpha=_grayscaleTintAlpha;
@property(nonatomic) double grayscaleTintLevel; // @synthesize grayscaleTintLevel=_grayscaleTintLevel;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(nonatomic, getter=isBackdropVisible) _Bool backdropVisible; // @synthesize backdropVisible=_backdropVisible;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long stackingLevel; // @synthesize stackingLevel=_stackingLevel;
@property(nonatomic) long long renderingHint; // @synthesize renderingHint=_renderingHint;
@property(retain, nonatomic) _UIBackdropColorSettings *colorSettings; // @synthesize colorSettings=_colorSettings;
@property(nonatomic) _Bool requiresColorStatistics; // @synthesize requiresColorStatistics=_requiresColorStatistics;
@property(nonatomic) _Bool explicitlySetGraphicsQuality; // @synthesize explicitlySetGraphicsQuality=_explicitlySetGraphicsQuality;
@property(nonatomic) long long graphicsQuality; // @synthesize graphicsQuality=_graphicsQuality;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _UIBackdropView *backdrop; // @synthesize backdrop=_backdrop;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UIColor *combinedTintColor;
- (void)computeOutputSettingsUsingModel:(id)arg1;
@property(nonatomic) _Bool blursWithHardEdges; // @dynamic blursWithHardEdges;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)clearRunLoopObserver;
- (_Bool)requiresBackdropLayer;
@property(nonatomic) _Bool zoomsBack;
- (void)setStyle:(long long)arg1;
- (void)setStackinglevel:(long long)arg1;
- (void)copyAdditionalSettingsFromSettings:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)dealloc;
- (void)restoreDefaultValues;
- (void)setDefaultValues;
- (id)initWithDefaultValuesForGraphicsQuality:(long long)arg1;
- (id)initWithDefaultValues;
- (id)init;

@end

