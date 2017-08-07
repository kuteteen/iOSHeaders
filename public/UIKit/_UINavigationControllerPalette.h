//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UINavigationController, UIViewController, _UIBarBackground;

@interface _UINavigationControllerPalette : UIView
{
    _UIBarBackground *_backgroundView;
    double _backgroundUnderlapHeight;
    struct {
        unsigned int isAttached:1;
        unsigned int attachmentIsChanging:1;
        unsigned int restartPaletteTransitionIfNecessary:1;
        unsigned int pinned:1;
        unsigned int pinningBarShadowIsHidden:1;
        unsigned int paletteShadowIsHidden:1;
        unsigned int shouldHideWhenScrolling:1;
        unsigned int pinningBarShadowWasHidden:1;
    } _paletteFlags;
    _Bool __paletteOverridesPinningBar;
    _Bool _visibleWhenPinningBarIsHidden;
    _Bool __palettePinningBarHidden;
    UINavigationController *_navController;
    unsigned long long _boundaryEdge;
    UIViewController *__unpinnedController;
    id __pinningBar;
    NSArray *__constraints;
    NSArray *__backgroundConstraints;
    double __heightWhenUnscrolled;
    long long __visibilityState;
    struct CGSize __size;
    struct UIEdgeInsets _preferredContentInsets;
}

@property(nonatomic, setter=_setVisibilityState:) long long _visibilityState; // @synthesize _visibilityState=__visibilityState;
@property(nonatomic, setter=_setHeightWhenUnscrolled:) double _heightWhenUnscrolled; // @synthesize _heightWhenUnscrolled=__heightWhenUnscrolled;
@property(nonatomic, getter=_isPalettePinningBarHidden, setter=_setPalettePinningBarHidden:) _Bool _palettePinningBarHidden; // @synthesize _palettePinningBarHidden=__palettePinningBarHidden;
@property(retain, nonatomic, setter=_setBackgroundConstraints:) NSArray *_backgroundConstraints; // @synthesize _backgroundConstraints=__backgroundConstraints;
@property(nonatomic, setter=_setSize:) struct CGSize _size; // @synthesize _size=__size;
@property(retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, setter=_setPinningBar:) id _pinningBar; // @synthesize _pinningBar=__pinningBar;
@property(nonatomic) UIViewController *_unpinnedController; // @synthesize _unpinnedController=__unpinnedController;
@property(nonatomic) struct UIEdgeInsets preferredContentInsets; // @synthesize preferredContentInsets=_preferredContentInsets;
@property(nonatomic, getter=isVisibleWhenPinningBarIsHidden) _Bool visibleWhenPinningBarIsHidden; // @synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden;
@property(readonly, nonatomic) unsigned long long boundaryEdge; // @synthesize boundaryEdge=_boundaryEdge;
@property(readonly, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(nonatomic, setter=_setPaletteOverridesPinningBar:) _Bool _paletteOverridesPinningBar; // @synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)didMoveToSuperview;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (void)_setupBackgroundViewIfNecessary;
- (void)_resetVisibilityStateIfNecessary;
@property(nonatomic, setter=_setShouldHideWhenScrolling:) _Bool _shouldHideWhenScrolling;
- (void)_resetHeightConstraintConstant;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)_setTopConstraintConstant:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1 isAnimating:(_Bool)arg2;
- (void)_resetConstraintConstants:(double)arg1;
- (void)_enableConstraints;
- (void)_disableConstraints;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_updateLayoutForCurrentConfiguration;
- (void)_configureConstraintsForBackground:(id)arg1;
- (_Bool)paletteIsHidden;
- (_Bool)isAttached;
@property(nonatomic, getter=isPinned) _Bool pinned;
- (void)_setAttached:(_Bool)arg1 didComplete:(_Bool)arg2;
@property(nonatomic) _Bool paletteShadowIsHidden;
- (void)_updateBackgroundView;
- (id)_attachedPinningTopBar;
@property(nonatomic) _Bool pinningBarShadowWasHidden;
@property(nonatomic) _Bool pinningBarShadowIsHidden;
@property(nonatomic, setter=_setRestartPaletteTransitionIfNecessary:) _Bool _restartPaletteTransitionIfNecessary;
@property(readonly, nonatomic, getter=_attachmentIsChanging) _Bool _attachmentIsChanging;
- (void)_setAttachmentIsChanging:(_Bool)arg1;
- (void)dealloc;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;
- (_Bool)_supportsSpecialSearchBarTransitions;

@end

