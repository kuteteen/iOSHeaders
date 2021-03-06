//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBTree : NSObject <NSCopying>
{
    int type;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    NSMutableDictionary *cache;
    NSString *layoutTag;
    NSString *effectiveLayoutTag;
}

+ (long long)extraIdiomForVisualStyling:(CDStruct_227bb23d)arg1 width:(double)arg2;
+ (id)keyboard;
+ (id)key;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (id)mergeStringForKeyName:(id)arg1;
+ (_Bool)shouldSkipCacheString:(id)arg1;
+ (id)stringForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)uniqueName;
+ (_Bool)typeIsPersistent:(int)arg1;
@property(retain, nonatomic) NSString *effectiveLayoutTag; // @synthesize effectiveLayoutTag;
@property(retain, nonatomic) NSString *layoutTag; // @synthesize layoutTag;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache;
@property(retain, nonatomic) NSMutableArray *subtrees; // @synthesize subtrees;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int type; // @synthesize type;
- (_Bool)renderKeyInKeyplane:(id)arg1;
- (_Bool)_renderAsStringKey;
- (id)cacheSecondaryDisplayString;
- (id)cacheDisplayString;
- (_Bool)shouldCacheKey;
- (void)setLayoutTag:(id)arg1 passingKeyTest:(CDUnknownBlockType)arg2;
- (_Bool)hasLayoutTag:(id)arg1;
- (id)variantDisplayString;
- (void)orderVariantKeys:(_Bool)arg1;
- (_Bool)containsDividerVariant;
- (_Bool)isRightToLeftSensitive;
- (_Bool)disablesEdgeSwipe;
- (_Bool)behavesAsShiftKey;
- (_Bool)avoidAutoDeactivation;
- (_Bool)dynamicDisplayTypeHint;
- (_Bool)modifiesKeyplane;
- (_Bool)avoidsLanguageIndicator;
- (_Bool)allowRetestAfterCommittingDownActions;
- (_Bool)isExemptFromInputManagerHitTesting;
- (_Bool)isExemptFromInputManagerLayout;
- (void)setParentKey:(id)arg1;
- (id)parentKey;
- (void)setForceMultitap:(_Bool)arg1;
- (_Bool)forceMultitap;
- (void)setClipCorners:(int)arg1;
- (int)clipCorners;
- (void)setSplitMode:(int)arg1;
- (int)splitMode;
- (void)setDisabled:(_Bool)arg1;
- (_Bool)disabled;
- (void)setFlickDirection:(long long)arg1;
- (long long)flickDirection;
- (id)variantPopupBias;
- (void)setVariantPopupBias:(id)arg1;
- (void)setGhost:(_Bool)arg1;
- (_Bool)ghost;
- (void)setVisible:(_Bool)arg1;
- (_Bool)visible;
- (void)setOverrideDisplayString:(id)arg1;
- (id)overrideDisplayString;
- (void)setRendering:(int)arg1;
- (int)rendering;
- (void)setDisplayRowHint:(int)arg1;
- (int)displayRowHint;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;
- (void)setSelectedVariantIndex:(long long)arg1;
- (long long)highlightedVariantIndex;
- (long long)selectedVariantIndex;
- (void)setDisplayTypeHint:(int)arg1;
- (int)displayTypeHint;
- (void)setVariantType:(int)arg1;
- (int)variantType;
- (void)setInteractionType:(int)arg1;
- (int)interactionType;
- (void)setDisplayType:(int)arg1;
- (int)displayType;
- (id)localizationKey;
- (void)setHighlightedVariantsList:(id)arg1;
- (id)highlightedVariantsList;
- (void)setSecondaryRepresentedStrings:(id)arg1;
- (id)secondaryRepresentedStrings;
- (void)setSecondaryDisplayStrings:(id)arg1;
- (id)secondaryDisplayStrings;
- (void)setCachedGestureLayout:(id)arg1;
- (id)cachedGestureLayout;
- (void)setGestureKey:(id)arg1;
- (id)gestureKey;
- (void)setDisplayString:(id)arg1;
- (id)displayString;
- (id)fullRepresentedString;
- (void)setRepresentedString:(id)arg1;
- (id)representedString;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (int)_variantType;
- (void)setState:(int)arg1;
- (int)state;
- (id)activeShapesFromOutputShapes:(id)arg1 inputShapes:(id)arg2;
- (void)setActiveGeometriesList:(id)arg1;
- (id)activeGeometriesList;
- (void)setGeometriesList:(id)arg1;
- (id)geometriesList;
- (id)listShapes;
- (id)attributeSet:(_Bool)arg1;
- (id)geometrySet:(_Bool)arg1;
- (id)keySet;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (void)centerKeys:(id)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3;
- (_Bool)addMessagesWriteboardKey;
- (void)addWriteboardKeyToCachedKeyListWithShape:(id)arg1 rendering:(int)arg2;
- (_Bool)addMessagesWriteboardKeyIfNoDismissKey;
- (_Bool)addMessagesWriteboardKeyIfDismissKey;
- (id)shapeFromFrame:(struct CGRect)arg1 leftPadding:(double)arg2 rightPadding:(double)arg3;
- (id)keysetCanContainWriteboardKey;
- (void)clearManualAddedKey;
- (id)rightSpaceKey;
- (id)mergeKeyNames:(id)arg1;
- (void)subsumeDisappearingKeyName:(id)arg1 intoKeyName:(id)arg2 factors:(id)arg3;
- (id)keysForMergeConditions;
- (void)updateDictationKeyOnNumberPads:(_Bool)arg1;
- (id)findLeftMoreKey;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (_Bool)looksLike:(id)arg1;
- (_Bool)supportsType:(long long)arg1;
- (id)autolocalizedKeyCacheIterator;
- (int)dragThreshold;
- (double)primaryKeylayoutOffset;
- (double)primaryKeylayoutWidthRatio;
- (_Bool)isSplit;
- (void)cacheNativeIdiomIfNecessary;
- (long long)nativeIdiom;
- (void)setIsGenerated:(_Bool)arg1;
- (_Bool)isGenerated;
- (_Bool)isLetters;
- (_Bool)looksExactlyLikeShiftAlternate;
- (_Bool)looksLikeShiftAlternate;
- (_Bool)usesKeyCharging;
- (_Bool)usesAdaptiveKeys;
- (_Bool)isShiftKeyPlaneChooser;
- (_Bool)noLanguageIndicator;
- (_Bool)notUseCandidateSelection;
- (_Bool)shouldSuppressDragRetest;
- (_Bool)shouldSkipCandidateSelectionForVariants;
- (_Bool)shouldSkipCandidateSelection;
- (_Bool)diacriticForwardCompose;
- (_Bool)isAlphabeticPlane;
- (_Bool)isShiftKeyplane;
- (id)shiftAlternateKeyplaneName;
- (id)gestureKeyplaneName;
- (id)alternateKeyplaneName;
- (_Bool)usesAutoShift;
- (id)keysWithString:(id)arg1;
- (id)keysByKeyName:(id)arg1;
- (id)geometriesOrderedByPosition;
- (id)keysOrderedByPositionRTL;
- (id)keysOrderedByPosition;
- (id)keysOrderedByPositionWithoutZip;
- (void)clearTransientCaches;
- (id)keyAttributes;
- (id)geometries;
- (void)removeKeyFromCachedKeyList:(id)arg1;
- (void)addkeyToCachedKeyList:(id)arg1;
- (id)keys;
- (void)_addKeylayoutKeys:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)keyForString:(id)arg1;
- (void)precacheLayoutName:(id)arg1;
- (id)layoutName;
- (void)cacheKey:(id)arg1;
- (id)_cacheRootNameForKey:(id)arg1;
- (id)firstKeyplaneSwitchKey;
- (id)firstCachedKeyWithName:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1;
- (void)setVisualStyling:(CDStruct_227bb23d)arg1;
- (CDStruct_227bb23d)visualStyling;
- (CDStruct_227bb23d)stylingFromVisualStyle;
- (void)setVisualStyle:(int)arg1;
- (int)visualStyle;
- (struct CGRect)keyUnionPaddedFrame;
- (struct CGRect)keyUnionFrame;
- (struct CGRect)keyUnionFramePadded:(_Bool)arg1;
- (struct CGPoint)navigationPointOfKey;
- (void)setPaddedFrame:(struct CGRect)arg1;
- (struct CGRect)paddedFrame;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (struct CGRect)_keyplaneFrame;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (void)setShape:(id)arg1;
- (id)shape;
- (_Bool)subtreesAreOrdered;
- (_Bool)isLeafType;
- (void)elaborateLayoutWithSize:(struct CGSize)arg1 scale:(double)arg2 origin:(struct CGPoint)arg3;
- (void)elaborateLayoutWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (long long)_keyCountOnNamedRow:(id)arg1;
- (void)zipAttributes;
- (void)zipGeometrySet;
- (void)zipGeometries:(_Bool)arg1 attributes:(_Bool)arg2;
- (void)updateFlickKeycapOnKeys;
- (void)mergeReturnKey:(id)arg1 withReturnKey:(id)arg2;
- (_Bool)_needsScaling;
- (int)indexOfSubtree:(id)arg1;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithName:(id)arg1;
- (id)subtreeWithType:(int)arg1;
- (id)recursiveDescription;
- (id)description;
- (id)numberForProperty:(id)arg1;
- (_Bool)boolForProperty:(id)arg1;
- (long long)intForProperty:(id)arg1;
- (id)stringForProperty:(id)arg1;
- (id)objectForProperty:(id)arg1;
- (_Bool)setObject:(id)arg1 forProperty:(id)arg2;
- (_Bool)isDuplicateOfTree:(id)arg1;
- (_Bool)isEqualToTree:(id)arg1;
- (_Bool)isSameAsTree:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (id)initWithType:(int)arg1;
- (_Bool)isHashed;
- (id)componentName;
- (id)unhashedName;
- (id)nameFromAttributes;

@end

