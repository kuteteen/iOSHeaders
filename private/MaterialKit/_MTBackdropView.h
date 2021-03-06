//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor;

@interface _MTBackdropView : UIView
{
    NSString *_luminanceColorMapName;
    _Bool _preservesFiltersAtZero;
    double _zoom;
    UIColor *_colorMatrixColor;
    UIColor *_colorAddColor;
}

+ (Class)layerClass;
@property(nonatomic, getter=_preservesFiltersAtZero, setter=_setPreservesFiltersAtZero:) _Bool preservesFiltersAtZero; // @synthesize preservesFiltersAtZero=_preservesFiltersAtZero;
@property(copy, nonatomic) UIColor *colorAddColor; // @synthesize colorAddColor=_colorAddColor;
@property(copy, nonatomic) UIColor *colorMatrixColor; // @synthesize colorMatrixColor=_colorMatrixColor;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
- (void).cxx_destruct;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_backdropLayer;
- (void)_setFloatValue:(double)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (void)_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (void)_removeFilterOfTypeIfNecessary:(id)arg1;
- (void)_configureFilterOfTypeIfNecessary:(id)arg1;
- (void)_setLuminanceColorMapName:(id)arg1;
- (id)_luminanceColorMapName;
@property(copy, nonatomic) NSString *groupName;
@property(nonatomic) double rasterizationScale;
@property(nonatomic) double brightness;
@property(nonatomic) double saturation;
@property(nonatomic) double luminanceAlpha;
@property(nonatomic) double blurRadius;

@end

