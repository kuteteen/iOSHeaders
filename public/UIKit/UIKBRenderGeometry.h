//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSValue;

__attribute__((visibility("hidden")))
@interface UIKBRenderGeometry : NSObject <NSCopying>
{
    _Bool _detachedVariants;
    _Bool _tallPopup;
    int _concaveCorner;
    int _roundRectCorners;
    int _popupBias;
    double _roundRectRadius;
    long long _flickDirection;
    NSValue *_splitLeftRect;
    NSValue *_splitRightRect;
    struct CGPoint _popupSource;
    struct CGSize _concaveCornerOffset;
    struct CGRect _frame;
    struct CGRect _paddedFrame;
    struct CGRect _displayFrame;
    struct CGRect _symbolFrame;
    struct UIEdgeInsets _layoutMargins;
}

+ (id)sortedGeometries:(id)arg1 leftToRight:(_Bool)arg2;
+ (id)geometryWithFrame:(struct CGRect)arg1 paddedFrame:(struct CGRect)arg2;
+ (id)geometryWithShape:(id)arg1;
@property(retain, nonatomic) NSValue *splitRightRect; // @synthesize splitRightRect=_splitRightRect;
@property(retain, nonatomic) NSValue *splitLeftRect; // @synthesize splitLeftRect=_splitLeftRect;
@property(nonatomic) _Bool tallPopup; // @synthesize tallPopup=_tallPopup;
@property(nonatomic) _Bool detachedVariants; // @synthesize detachedVariants=_detachedVariants;
@property(nonatomic) long long flickDirection; // @synthesize flickDirection=_flickDirection;
@property(nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) int popupBias; // @synthesize popupBias=_popupBias;
@property(nonatomic) double roundRectRadius; // @synthesize roundRectRadius=_roundRectRadius;
@property(nonatomic) int roundRectCorners; // @synthesize roundRectCorners=_roundRectCorners;
@property(nonatomic) struct CGSize concaveCornerOffset; // @synthesize concaveCornerOffset=_concaveCornerOffset;
@property(nonatomic) int concaveCorner; // @synthesize concaveCorner=_concaveCorner;
@property(nonatomic) struct CGPoint popupSource; // @synthesize popupSource=_popupSource;
@property(nonatomic) struct CGRect symbolFrame; // @synthesize symbolFrame=_symbolFrame;
@property(nonatomic) struct CGRect displayFrame; // @synthesize displayFrame=_displayFrame;
@property(nonatomic) struct CGRect paddedFrame; // @synthesize paddedFrame=_paddedFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) struct UIEdgeInsets paddedInsets;
@property(readonly, nonatomic) struct UIEdgeInsets displayInsets;
- (id)similarShape;
- (id)iPadVariantGeometries:(unsigned long long)arg1 rowLimit:(long long)arg2;
- (id)iPhoneVariantGeometries:(unsigned long long)arg1 annotationIndex:(unsigned long long)arg2;
- (void)applyShadowInsets:(struct UIEdgeInsets)arg1;
- (void)applyInsets:(struct UIEdgeInsets)arg1;
- (void)overlayWithGeometry:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithShape:(id)arg1;
- (id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 inwardSizeFactor:(double)arg3 outwardSizeFactor:(double)arg4 perpendicularSizeFactor:(double)arg5 sizeAspectRatio:(double)arg6 scale:(double)arg7;
- (id)copyForPopupDirection:(long long)arg1 scale:(double)arg2;
- (id)copyForFlickDirection:(long long)arg1 scale:(double)arg2;
- (void)applyOffset:(struct CGPoint)arg1;
- (void)makeIntegralWithScale:(double)arg1;
- (void)adjustToTopWithInsets:(struct UIEdgeInsets)arg1;
- (void)adjustForConsistentGapsWithSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize)arg1 centerX:(double)arg2 bottomEdge:(_Bool)arg3 topEdge:(_Bool)arg4;
- (unsigned long long)adjustForTranslucentGapsWithSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;

@end

