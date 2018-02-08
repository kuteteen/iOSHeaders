//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIFloatingContentView.h"

#import "TVAuxiliaryViewSelecting.h"
#import "_UIFloatingContentViewDelegate.h"

@class NSString, TVImageProxy, TVMonogramViewConfiguration, UIImage, UIView, _TVImageView, _TVMonogramDescription;

@interface _TVMonogramView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting>
{
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    _Bool _isSelected;
    TVMonogramViewConfiguration *_configuration;
    UIImage *_image;
    UIImage *_placeholderImage;
    double _unfocusedImageAlpha;
    UIView *_overlayView;
    CDUnknownBlockType _pressCompletionBlock;
    _TVImageView *_imageView;
    TVImageProxy *_imageProxy;
    _TVMonogramDescription *_monogramDescription;
}

@property(retain, nonatomic) _TVMonogramDescription *monogramDescription; // @synthesize monogramDescription=_monogramDescription;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType pressCompletionBlock; // @synthesize pressCompletionBlock=_pressCompletionBlock;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double unfocusedImageAlpha; // @synthesize unfocusedImageAlpha=_unfocusedImageAlpha;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) TVMonogramViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)_copyMonogramDescriptionWithoutImageURL:(id)arg1;
- (void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

