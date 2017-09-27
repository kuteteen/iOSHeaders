//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "PKInlineColorPickerDelegate.h"

@class NSArray, NSString, PKInk, PKInlineColorPicker, UIColor, UILayoutGuide, UIView;

@interface PKInlineInkPicker : UIControl <PKInlineColorPickerDelegate>
{
    _Bool _shouldEmboss;
    _Bool _forceCompactLayout;
    _Bool _wantsThickerInks;
    _Bool _isUsedOnDarkBackground;
    NSArray *_inkIdentifiers;
    unsigned long long _selectedInkIndex;
    unsigned long long _previousDrawingToolIndex;
    NSArray *_toolButtonItems;
    PKInlineColorPicker *_colorPicker;
    UIView *_backgroundView;
    UIView *_separatorView;
    UIView *_clippingView;
    id <PKInlineInkPickerDelegate> _delegate;
    unsigned long long _pickerState;
    unsigned long long _sizeState;
    unsigned long long _selectionState;
    UILayoutGuide *_backgroundViewLayoutGuide;
}

+ (_Bool)_axLargerTextSizesEnabled;
+ (id)sharedImageNameCache;
+ (id)imageNamed:(id)arg1;
+ (double)spacingForToolIndex:(unsigned long long)arg1 sizeState:(unsigned long long)arg2;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(readonly, nonatomic) UILayoutGuide *backgroundViewLayoutGuide; // @synthesize backgroundViewLayoutGuide=_backgroundViewLayoutGuide;
@property(nonatomic) _Bool wantsThickerInks; // @synthesize wantsThickerInks=_wantsThickerInks;
@property(nonatomic) _Bool forceCompactLayout; // @synthesize forceCompactLayout=_forceCompactLayout;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
@property(nonatomic) unsigned long long pickerState; // @synthesize pickerState=_pickerState;
@property(nonatomic) __weak id <PKInlineInkPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldEmboss; // @synthesize shouldEmboss=_shouldEmboss;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) PKInlineColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) NSArray *toolButtonItems; // @synthesize toolButtonItems=_toolButtonItems;
@property(nonatomic) unsigned long long previousDrawingToolIndex; // @synthesize previousDrawingToolIndex=_previousDrawingToolIndex;
@property(nonatomic) unsigned long long selectedInkIndex; // @synthesize selectedInkIndex=_selectedInkIndex;
@property(retain, nonatomic) NSArray *inkIdentifiers; // @synthesize inkIdentifiers=_inkIdentifiers;
- (void).cxx_destruct;
- (id)_axLabelForToolButton:(id)arg1;
- (void)_axHandleLongPressForLargeTextHUD:(id)arg1;
- (void)colorPickerColorTappedInCompactChooseToolState:(id)arg1;
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(_Bool)arg2;
- (id)minimizedImageForInk:(id)arg1 small:(_Bool)arg2;
- (double)cachedToolButtonWidthForSizeState:(unsigned long long)arg1;
- (id)createToolButtonItemWithInkIdentifier:(id)arg1 shouldEmboss:(_Bool)arg2;
- (void)toolUnpressed:(id)arg1;
- (void)toolPressed:(id)arg1;
- (void)toolTapped:(id)arg1;
- (void)resetToDrawingToolWithAnimation:(_Bool)arg1;
- (void)notifyColorSelected:(_Bool)arg1;
- (void)notifyToolSelected:(_Bool)arg1;
- (unsigned long long)lastDrawingToolIndex;
- (_Bool)isDrawingToolIndex:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;
- (struct CGSize)minimumSizeForSizeState:(unsigned long long)arg1 selectionState:(unsigned long long)arg2;
- (unsigned long long)selectionStateForSizeState:(unsigned long long)arg1 previousSelectionState:(unsigned long long)arg2;
- (unsigned long long)sizeStateForWidth:(double)arg1;
- (void)_setSelectionStateNoLayout:(unsigned long long)arg1;
- (void)_setSizeStateNoLayout:(unsigned long long)arg1;
@property(nonatomic) unsigned long long colorSet;
@property(copy, nonatomic) NSString *selectedInkIdentifier;
@property(copy, nonatomic) UIColor *selectedColor;
@property(copy, nonatomic) PKInk *selectedInk;
- (void)setSelectedInkIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)setSelectedColor:(id)arg1 animated:(_Bool)arg2;
- (void)setSelectedInk:(id)arg1 animated:(_Bool)arg2;
- (id)_toolButtonContainingPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_commonInit;
- (id)initWithEmbossing:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

