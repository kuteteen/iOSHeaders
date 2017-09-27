//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableIndexSet, NSOrderedSet, NSSet, NSString, UILayoutGuide, UIView, _UIStatusBar, _UIStatusBarAction, _UIStatusBarDisplayItem, _UIStatusBarStyleAttributes;

@interface _UIStatusBarRegion : NSObject
{
    NSString *_identifier;
    _UIStatusBar *_statusBar;
    id <_UIStatusBarRegionLayout> _layout;
    NSSet *_dependentRegionIdentifiers;
    double _alpha;
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_highlightView;
    _UIStatusBarAction *_action;
    NSOrderedSet *_displayItems;
    NSMutableIndexSet *_disablingTokens;
    UILayoutGuide *_layoutGuide;
    UIView *_frozenView;
    struct UIEdgeInsets _actionInsets;
}

@property(retain, nonatomic) UIView *frozenView; // @synthesize frozenView=_frozenView;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) NSMutableIndexSet *disablingTokens; // @synthesize disablingTokens=_disablingTokens;
@property(retain, nonatomic) NSOrderedSet *displayItems; // @synthesize displayItems=_displayItems;
@property(nonatomic) struct UIEdgeInsets actionInsets; // @synthesize actionInsets=_actionInsets;
@property(retain, nonatomic) _UIStatusBarAction *action; // @synthesize action=_action;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // @synthesize overriddenStyleAttributes=_overriddenStyleAttributes;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) NSSet *dependentRegionIdentifiers; // @synthesize dependentRegionIdentifiers=_dependentRegionIdentifiers;
@property(retain, nonatomic) id <_UIStatusBarRegionLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *displayItemFrames;
@property(readonly, nonatomic) _UIStatusBarDisplayItem *overflowedDisplayItem;
@property(readonly, nonatomic) NSArray *currentEnabledDisplayItems;
@property(readonly, nonatomic) NSArray *enabledDisplayItems;
@property(nonatomic, getter=isFrozen) _Bool frozen;
- (void)enableWithToken:(unsigned long long)arg1;
- (void)disableWithToken:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)_addSubview:(id)arg1 atBack:(_Bool)arg2;
- (void)setIdentifier:(id)arg1;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) id <UILayoutItem> layoutItem;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end
