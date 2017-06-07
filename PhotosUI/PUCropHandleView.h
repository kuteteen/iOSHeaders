//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface PUCropHandleView : UIView
{
    _Bool _lineWeightHeavy;
    _Bool _overlayHidden;
    unsigned long long _handle;
    NSArray *__lineViews;
    NSArray *__overlayViews;
    UIView *__layoutReferenceView;
    NSLayoutConstraint *__lineWidthConstraint;
}

+ (id)allHandles;
@property(retain, nonatomic, setter=_setLineWidthConstraint:) NSLayoutConstraint *_lineWidthConstraint; // @synthesize _lineWidthConstraint=__lineWidthConstraint;
@property(retain, nonatomic, setter=_setLayoutReferenceView:) UIView *_layoutReferenceView; // @synthesize _layoutReferenceView=__layoutReferenceView;
@property(retain, nonatomic, setter=_setOverlayViews:) NSArray *_overlayViews; // @synthesize _overlayViews=__overlayViews;
@property(retain, nonatomic, setter=_setLineViews:) NSArray *_lineViews; // @synthesize _lineViews=__lineViews;
@property(nonatomic, getter=isOverlayHidden) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic, getter=isLineWeightHeavy) _Bool lineWeightHeavy; // @synthesize lineWeightHeavy=_lineWeightHeavy;
@property(readonly, nonatomic) unsigned long long handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *adjacentHandles;
@property(readonly, nonatomic) unsigned long long oppositeHandle;
@property(readonly, nonatomic, getter=isLateral) _Bool lateral;
@property(readonly, nonatomic, getter=isCorner) _Bool corner;
@property(readonly, nonatomic, getter=isBottom) _Bool bottom;
@property(readonly, nonatomic, getter=isRight) _Bool right;
@property(readonly, nonatomic, getter=isLeft) _Bool left;
@property(readonly, nonatomic, getter=isTop) _Bool top;
@property(readonly, nonatomic) id layoutReferenceItem;
- (id)_createCornerOverlayView;
- (id)_createLineView;
- (void)_updateLineWidth;
- (id)initForHandle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

