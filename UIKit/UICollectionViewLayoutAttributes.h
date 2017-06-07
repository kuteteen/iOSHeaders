//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/UIDynamicItem-Protocol.h>

@class NSIndexPath, NSString, UIBezierPath;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem>
{
    NSString *_elementKind;
    NSIndexPath *_indexPath;
    NSString *_reuseIdentifier;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _frame;
    double _alpha;
    struct CATransform3D _transform;
    NSString *_isCloneString;
    struct {
        unsigned int isCellKind:1;
        unsigned int isDecorationView:1;
        unsigned int isHidden:1;
        unsigned int isClone:1;
    } _layoutFlags;
    long long _zIndex;
}

+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *representedElementKind;
@property(readonly, nonatomic) unsigned long long representedElementCategory;
- (_Bool)_isSupplementaryView;
- (_Bool)_isDecorationView;
- (_Bool)_isCell;
@property(readonly) unsigned long long hash;
- (_Bool)_isTransitionVisibleTo:(id)arg1;
- (_Bool)_isEquivalentTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) struct CGRect bounds;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_reuseIdentifier;
- (void)_setReuseIdentifier:(id)arg1;
- (id)_elementKind;
- (void)_setElementKind:(id)arg1;
- (_Bool)_isClone;
- (void)_setIsClone:(_Bool)arg1;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)init;
- (id)__indexPath;
- (id)__elementKind;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

