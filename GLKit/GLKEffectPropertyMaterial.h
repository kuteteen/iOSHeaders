//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyMaterial : GLKEffectProperty
{
    union _GLKVector4 _ambientColor;
    union _GLKVector4 _diffuseColor;
    union _GLKVector4 _specularColor;
    union _GLKVector4 _emissiveColor;
    float _shininess;
    int _ambientColorLoc;
    int _diffuseColorLoc;
    int _specularColorLoc;
    int _emissiveColorLoc;
    int _shininessLoc;
    unsigned long long *_effectDirtyUniforms;
    struct GLKBigInt_s _colorMaterialEnabledMask;
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
@property(nonatomic) struct GLKBigInt_s _colorMaterialEnabledMask; // @synthesize _colorMaterialEnabledMask;
@property(nonatomic) int _shininessLoc; // @synthesize _shininessLoc;
@property(nonatomic) int _emissiveColorLoc; // @synthesize _emissiveColorLoc;
@property(nonatomic) int _specularColorLoc; // @synthesize _specularColorLoc;
@property(nonatomic) int _diffuseColorLoc; // @synthesize _diffuseColorLoc;
@property(nonatomic) int _ambientColorLoc; // @synthesize _ambientColorLoc;
@property(nonatomic) unsigned long long *effectDirtyUniforms; // @synthesize effectDirtyUniforms=_effectDirtyUniforms;
@property(nonatomic) float shininess; // @synthesize shininess=_shininess;
@property(nonatomic) union _GLKVector4 emissiveColor; // @synthesize emissiveColor=_emissiveColor;
@property(nonatomic) union _GLKVector4 specularColor; // @synthesize specularColor=_specularColor;
@property(nonatomic) union _GLKVector4 diffuseColor; // @synthesize diffuseColor=_diffuseColor;
@property(nonatomic) union _GLKVector4 ambientColor; // @synthesize ambientColor=_ambientColor;
- (void)dealloc;
- (id)description;
- (void)bind;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)setShaderBindings;
- (void)initializeMasks;
- (void)dirtyAllUniforms;
- (id)init;

@end

