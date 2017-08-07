//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSOrderedSet, SXComponentDependencyResolver, SXLayoutAttributes;

@interface SXLayoutBlueprint : NSObject <NSCopying>
{
    _Bool _isComplete;
    _Bool _didPlaceDynamicAds;
    _Bool _updating;
    SXLayoutBlueprint *_parentLayoutBlueprint;
    SXLayoutAttributes *_layoutAttributes;
    NSMutableDictionary *_blueprint;
    NSMutableDictionary *_flattenedBlueprint;
    NSMutableArray *_orderedComponentIdentifiers;
    NSMutableSet *_invalidatedComponents;
    SXComponentDependencyResolver *_dependencySolver;
    NSOrderedSet *_snapLines;
    struct CGPoint _offset;
    struct CGSize _blueprintSize;
    struct CGSize _canvasSize;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) NSOrderedSet *snapLines; // @synthesize snapLines=_snapLines;
@property(retain, nonatomic) SXComponentDependencyResolver *dependencySolver; // @synthesize dependencySolver=_dependencySolver;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(retain, nonatomic) NSMutableSet *invalidatedComponents; // @synthesize invalidatedComponents=_invalidatedComponents;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSMutableArray *orderedComponentIdentifiers; // @synthesize orderedComponentIdentifiers=_orderedComponentIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *flattenedBlueprint; // @synthesize flattenedBlueprint=_flattenedBlueprint;
@property(retain, nonatomic) NSMutableDictionary *blueprint; // @synthesize blueprint=_blueprint;
@property(readonly, nonatomic) _Bool didPlaceDynamicAds; // @synthesize didPlaceDynamicAds=_didPlaceDynamicAds;
@property(retain, nonatomic) SXLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) struct CGSize blueprintSize; // @synthesize blueprintSize=_blueprintSize;
@property(readonly, nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) __weak SXLayoutBlueprint *parentLayoutBlueprint; // @synthesize parentLayoutBlueprint=_parentLayoutBlueprint;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)snapLinesIncludingChildren:(_Bool)arg1;
- (void)storeComponentsFromBlueprint:(id)arg1 inDictionary:(id)arg2;
- (void)endUpdates;
- (void)startUpdates;
- (id)componentsInRect:(struct CGRect)arg1;
- (id)componentIdentifiers;
- (id)containerComponentIdentifierContainingComponentWithIdentifier:(id)arg1;
- (id)componentBlueprintForComponentIdentifier:(id)arg1 includeChildren:(_Bool)arg2;
- (id)componentBlueprintForComponentIdentifier:(id)arg1;
- (void)updatePosition:(struct CGPoint)arg1 forComponentWithIdentifier:(id)arg2;
- (void)updateSize:(struct CGSize)arg1 forComponentWithIdentifier:(id)arg2;
- (void)invalidateBlueprintPosition;
- (void)invalidateBlueprint;
- (void)invalidateDependentsOfComponentNode:(id)arg1 forDependencyResolver:(id)arg2;
- (void)invalidateDependentsOfInvalidatedComponents;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1 suggestedSize:(struct CGSize)arg2;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1;
- (void)invalidatePositionForComponentWithIdentifier:(id)arg1;
- (void)unregisterLayout:(id)arg1;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)init;

@end

