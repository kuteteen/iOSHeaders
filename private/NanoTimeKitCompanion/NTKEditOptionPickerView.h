//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NTKPolygonCylinderView;

@interface NTKEditOptionPickerView : UIView
{
    NSArray *_rows;
    unsigned long long _visibleRowBufferSize;
    CDUnknownBlockType _optionToViewMapper;
    _Bool _active;
    NTKPolygonCylinderView *_cylinderView;
    unsigned long long _numberOfSides;
    UIView *_selectedOptionView;
    unsigned long long _numberOfRows;
    unsigned long long _selectedRowIndex;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) unsigned long long selectedRowIndex; // @synthesize selectedRowIndex=_selectedRowIndex;
@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) UIView *selectedOptionView; // @synthesize selectedOptionView=_selectedOptionView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long numberOfSides; // @synthesize numberOfSides=_numberOfSides;
@property(copy, nonatomic) CDUnknownBlockType optionToViewMapper; // @synthesize optionToViewMapper=_optionToViewMapper;
@property(readonly, nonatomic) NTKPolygonCylinderView *cylinderView; // @synthesize cylinderView=_cylinderView;
- (void).cxx_destruct;
- (void)_enumerateFaceViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_rotateAnimatedToSelectedRowFromRow:(unsigned long long)arg1;
- (void)_rotateToSelectedRow;
- (void)_willDisplayFaceView:(id)arg1;
- (void)_configureFaceView:(id)arg1 forOption:(id)arg2;
- (Class)_cylinderFaceViewClass;
- (void)_tileCylinderForRotationDirection:(long long)arg1;
- (id)_selectedFaceView;
- (id)_faceViewAtFaceIndex:(unsigned long long)arg1;
- (struct CGRect)_frameForCylinderView;
- (void)applyRubberBandingFraction:(double)arg1;
- (void)applyBreathingScale:(double)arg1;
- (void)layoutSubviews;
- (void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)setSelectedRowIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)optionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) id selectedOption;
- (void)decrementSelection;
- (void)incrementSelection;
- (id)description;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;

@end

