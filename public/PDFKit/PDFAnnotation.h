//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL, PDFAction, PDFAnnotationPopup, PDFAnnotationPrivateVars, PDFBorder, PDFDestination, PDFPage, UIColor, UIFont;

@interface PDFAnnotation : NSObject <NSCopying, NSCoding>
{
    PDFAnnotationPrivateVars *_private;
}

+ (id)getProperNameStringFromString:(id)arg1;
+ (id)nameForLineStyle:(long long)arg1;
+ (long long)lineStyleFromName:(id)arg1;
- (void).cxx_destruct;
- (id)akAnnotationAdaptor;
- (id)formData;
- (void)updateFormData;
- (void)updateAnnotationEffect;
- (void)removeFromPageView;
- (void)addToPageView;
- (struct __CFDictionary *)gcCreateAttributesForFont:(id)arg1 color:(id)arg2;
- (void)derotateContext:(struct CGContext *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)_drawAnnotationWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)drawAppearance:(struct CGPDFForm *)arg1 withBox:(long long)arg2 inContext:(struct CGContext *)arg3 inRect:(struct CGRect)arg4 scaleProportional:(_Bool)arg5;
- (void)drawAppearance:(struct CGPDFForm *)arg1 withBox:(long long)arg2 inContext:(struct CGContext *)arg3 scaleProportional:(_Bool)arg4;
- (void)drawAppearance:(struct CGPDFForm *)arg1 withBox:(long long)arg2 inContext:(struct CGContext *)arg3;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)setDictionaryRef:(struct __CFDictionary *)arg1;
- (_Bool)_shouldReadAppearanceStreams;
- (id)getColorFromAppearanceNSString:(id)arg1;
- (id)getFontFromAppearanceNSString:(id)arg1;
- (id)getColorFromAppearanceString:(struct CGPDFString *)arg1;
- (id)getFontFromAppearanceString:(struct CGPDFString *)arg1;
- (id)colorFromAppearanceTokens:(id)arg1;
- (id)fontNameFromAppearanceTokens:(id)arg1;
- (double)pointSizeFromAppearanceTokens:(id)arg1;
- (id)tokenizeAppearanceString:(id)arg1;
- (void)getAppearancesFromDictionary:(struct CGPDFDictionary *)arg1 ofType:(int)arg2;
- (void)setAppearance:(struct CGPDFForm *)arg1 forType:(int)arg2;
- (_Bool)savesAppearanceStream;
- (void)setSavesAppearanceStream:(_Bool)arg1;
- (struct CGPDFForm *)appearance:(int)arg1;
- (id)replaceTextWidgetWithString:(id)arg1;
- (id)pathLock;
- (void)releaseCGPathArray;
- (void)setCGPathArray:(struct CGPath **)arg1;
- (struct CGPath **)cgPathArray;
- (void)setPopupDrawsText:(_Bool)arg1;
- (_Bool)popupDrawsText;
- (void)setPopupDrawsCloseWidget:(_Bool)arg1;
- (_Bool)popupDrawsCloseWidget;
- (void)setWidgetOnStateString:(id)arg1;
- (id)widgetOnStateString;
- (void)setPDFAnnotationDictionary:(id)arg1;
- (struct CGPDFDictionary *)popupDictionary;
- (struct CGPDFDictionary *)sourceDictionary;
- (unsigned long long)flags;
- (id)createDefaultAppearanceStringWithFont:(id)arg1 fontColor:(id)arg2;
- (void)_addUnknownPropertiesToDictionaryRef:(struct __CFDictionary *)arg1;
- (void *)_sanitizeValue:(id)arg1 forKey:(id)arg2;
- (void)addOptionsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addMaxLenToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addFieldFlagsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addAlternateFieldNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addDefaultFieldValueToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addFieldValueToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addAppearanceCharacteristicsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNormalAndDownAppearanceWithStateToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNormalAppearanceWithStateToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNormalAndDownAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addInkListToDictionaryRef:(struct __CFDictionary *)arg1;
- (_Bool)addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addHighlightingModeToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addOpenToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addLineEndingStylesToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addLineToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addAdditionalActionsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addActionToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addQuadPointsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addQuaddingToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addDefaultAppearanceDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addBorderStyleToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addBorderToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addAppearanceForKey:(struct __CFString *)arg1 toDictionaryRef:(struct __CFDictionary *)arg2;
- (void)addNormalAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addColor:(id)arg1 forKey:(struct __CFString *)arg2 toDictionaryRef:(struct __CFDictionary *)arg3;
- (id)_createArrayForColor:(id)arg1;
- (void)addPopupToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addTextLabelToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addModificationDateToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addRect:(struct CGRect)arg1 forKey:(struct __CFString *)arg2 toDictionaryRef:(struct __CFDictionary *)arg3;
- (id)_createArrayForCGRect:(struct CGRect)arg1;
- (void)addPageReferenceToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)_accessibilityTypeString;
- (_Bool)isMarkupAnnotationSubtype;
- (void)setParent:(id)arg1;
- (id)parent;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (_Bool)isWidgetOrMarkupAnnotation;
- (id)getFullFieldNameFromDictionary:(struct CGPDFDictionary *)arg1;
- (void)setMouseDownAction:(id)arg1;
- (id)mouseDownAction;
- (_Bool)isMarkupAnnotation;
- (void)setForExport:(_Bool)arg1;
- (_Bool)forExport;
- (id)pdfAnnotationUUID;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (void)setPopupInternal:(id)arg1 scanPage:(_Bool)arg2;
- (_Bool)isSelected;
- (void)setIsSelected:(_Bool)arg1;
- (_Bool)supportsNSCoding;
- (_Bool)updatesBoundsFromUserControlBounds;
- (id)newUserControlWithFrame:(struct CGRect)arg1;
- (void)setCGPDFAnnotation:(struct CGPDFAnnotation *)arg1;
- (struct CGPDFAnnotation *)CGPDFAnnotation;
- (void)_addAKAnnotationToDictionary:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)dictionaryRefExcludingParentOrPopup;
- (struct __CFDictionary *)dictionaryRef;
- (id)getPDFKeyMappingDictionary;
- (void)_didRemoveValueForAnnotationKey:(id)arg1;
- (void)_didSetValue:(id)arg1 forAnnotationKey:(id)arg2;
- (void)removeValueForAnnotationKey:(id)arg1;
- (id)valueForAnnotationKey:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *annotationKeyValues;
- (_Bool)_setVarious:(id)arg1 forAnnotationKey:(id)arg2;
- (_Bool)_setInteger:(id)arg1 forAnnotationKey:(id)arg2;
- (_Bool)_setDictionary:(id)arg1 forAnnotationKey:(id)arg2;
- (_Bool)_setArray:(id)arg1 forAnnotationKey:(id)arg2;
- (_Bool)_setString:(id)arg1 forAnnotationKey:(id)arg2;
- (_Bool)setRect:(struct CGRect)arg1 forAnnotationKey:(id)arg2;
- (_Bool)setBoolean:(_Bool)arg1 forAnnotationKey:(id)arg2;
- (_Bool)setValue:(id)arg1 forAnnotationKey:(id)arg2;
- (_Bool)_isValidAnnotationKey:(id)arg1;
- (_Bool)_annotationAllowsCommenting:(id)arg1;
- (void)removeAllAppearanceStreams;
@property(readonly, nonatomic) _Bool hasAppearanceStream;
- (id)toolTip;
@property(copy, nonatomic) NSString *contents;
- (void)setMouseUpAction:(id)arg1;
- (id)mouseUpAction;
@property(retain, nonatomic) PDFAction *action;
@property(copy, nonatomic) UIColor *color;
@property(retain, nonatomic) PDFBorder *border;
- (void)printDictionaryKeyValues;
- (void)_printDictionary:(id)arg1 atDepth:(int)arg2;
- (void)setIsFullyConstructed:(_Bool)arg1;
- (_Bool)isFullyConstructed;
- (void)setScaleFactor:(double)arg1;
- (double)scaleFactor;
- (void)setAccessibilityNode:(id)arg1;
- (id)accessibilityNode;
- (_Bool)shouldComb;
- (void)setMouseHoverBackgroundColor:(id)arg1;
- (id)mouseHoverBackgroundColor;
- (void)setControl:(id)arg1;
- (id)control;
- (void)setShouldBurnIn:(_Bool)arg1;
- (_Bool)shouldBurnIn;
- (void)setIsSignature:(_Bool)arg1;
- (_Bool)isSignature;
@property(retain, nonatomic) PDFAnnotationPopup *popup;
@property(copy, nonatomic) NSString *userName;
@property(copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) struct CGRect bounds;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) __weak PDFPage *page;
- (void)removeAKAnnotationAdaptor;
- (void)setupAKAnnotationAdaptorIfNecessary;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_generateFormFieldName;
- (void)secondaryInit;
- (void)commonInit;
- (id)initWithDictionary:(id)arg1 forPage:(id)arg2;
- (id)initWithBounds:(struct CGRect)arg1 forType:(id)arg2 withProperties:(id)arg3;
- (id)initCommonWithBounds:(struct CGRect)arg1;
- (id)init;
- (void)removeBezierPath:(id)arg1;
- (void)addBezierPath:(id)arg1;
@property(copy, nonatomic) NSString *stampName;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(copy, nonatomic) NSString *caption;
@property(copy, nonatomic) NSString *fieldName;
@property(copy, nonatomic) NSURL *URL;
@property(retain, nonatomic) PDFDestination *destination;
@property(readonly, nonatomic) NSArray *paths;
@property(nonatomic, getter=isOpen) _Bool open;
@property(copy, nonatomic) NSString *buttonWidgetStateString;
@property(nonatomic) long long buttonWidgetState;
- (id)_textForValue:(id)arg1;
@property(copy, nonatomic) NSArray *values;
@property(copy, nonatomic) NSArray *choices;
@property(nonatomic, getter=isListChoice) _Bool listChoice;
@property(nonatomic, getter=isReadOnly) _Bool readOnly;
@property(nonatomic) _Bool radiosInUnison;
@property(nonatomic) _Bool allowsToggleToOff;
@property(copy, nonatomic) NSString *widgetDefaultStringValue;
@property(copy, nonatomic) NSString *widgetStringValue;
@property(nonatomic) long long maximumLength;
@property(nonatomic, getter=hasComb) _Bool comb;
@property(readonly, nonatomic) _Bool isPasswordField;
@property(nonatomic, getter=isMultiline) _Bool multiline;
- (void)_setBoolValue:(_Bool)arg1 forWidgetFieldFlag:(unsigned long long)arg2;
- (_Bool)_boolValueForWidgetFieldFlag:(unsigned long long)arg1;
- (void)setContentsLocked:(_Bool)arg1;
- (_Bool)contentsLocked;
- (void)setShouldToggleNoView:(_Bool)arg1;
- (_Bool)shouldToggleNoView;
- (void)setLocked:(_Bool)arg1;
- (_Bool)isLocked;
- (void)setReadOnlyAnnotation:(_Bool)arg1;
- (_Bool)isReadOnlyAnnotation;
@property(nonatomic) _Bool shouldDisplay; // @dynamic shouldDisplay;
- (void)setShouldNotRotate:(_Bool)arg1;
- (_Bool)shouldNotRotate;
- (void)setShouldNotZoom:(_Bool)arg1;
- (_Bool)shouldNotZoom;
@property(nonatomic) _Bool shouldPrint; // @dynamic shouldPrint;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (void)setInvisible:(_Bool)arg1;
- (_Bool)isInvisible;
- (void)_setBoolValue:(_Bool)arg1 forAnnotationFlag:(unsigned long long)arg2;
- (_Bool)_boolValueForAnnotationFlag:(unsigned long long)arg1;
@property(nonatomic) long long widgetControlType;
@property(copy, nonatomic) NSString *widgetFieldType;
@property(nonatomic) long long markupType;
@property(copy, nonatomic) NSArray *quadrilateralPoints;
@property(nonatomic) long long iconType;
@property(nonatomic) long long endLineStyle;
@property(nonatomic) long long startLineStyle;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(nonatomic) long long alignment;
@property(copy, nonatomic) UIColor *interiorColor;
@property(copy, nonatomic) UIColor *fontColor;
@property(copy, nonatomic) UIFont *font;

@end

