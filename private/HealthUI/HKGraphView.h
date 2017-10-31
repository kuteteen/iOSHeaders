//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HKGraphRenderDelegate.h"
#import "HKMultiTouchPressGestureRecognizerDelegate.h"
#import "HKScrollPerformanceTestable.h"
#import "HKSeriesDelegate.h"
#import "UIScrollViewDelegate.h"

@class HKAxis, HKBorderLineView, HKGraphViewSelectionStyle, HKMultiTouchPressGestureRecognizer, HKPropertyAnimationApplier, HKValueRange, NSArray, NSMutableArray, NSSet, NSString, UIColor, UIImage, UIScrollView, UIView<HKGraphRenderer>;

@interface HKGraphView : UIView <UIScrollViewDelegate, HKSeriesDelegate, HKGraphRenderDelegate, HKMultiTouchPressGestureRecognizerDelegate, HKScrollPerformanceTestable>
{
    NSMutableArray *_seriesGroupRows;
    _Bool _needsUpdateGraphViewConfiguration;
    HKPropertyAnimationApplier *_animationApplier;
    _Bool _shouldInformDelegateOfUpdates;
    _Bool _shouldListenToScrollViewDelegate;
    HKValueRange *_chartableValueRange;
    UIImage *_topFeatheringImage;
    UIImage *_rightFeatheringImage;
    UIImage *_bottomFeatheringImage;
    UIImage *_leftFeatheringImage;
    UIView<HKGraphRenderer> *_renderView;
    UIScrollView *_scrollView;
    UIView *_scrollViewContent;
    HKBorderLineView *_leftMarginView;
    UIView<HKGraphRenderer> *_yAxisLabelContent;
    double _yAxisLabelMinimumWidth;
    _Bool _subviewsHaveBeenLaidOut;
    _Bool _disableXAxis;
    _Bool _disableScrolling;
    _Bool _disableSelection;
    _Bool _contentWidthFromTimeScope;
    _Bool _enableStickySelection;
    _Bool _enableZoomInGesture;
    _Bool _enableInteractiveSelectionLine;
    id <HKGraphViewDelegate> _delegate;
    HKAxis *_xAxis;
    double _xAxisSpace;
    UIColor *_outlineColor;
    UIColor *_topMarginColor;
    unsigned long long _outlineOptions;
    unsigned long long _featheringOptions;
    HKGraphViewSelectionStyle *_selectionStyle;
    long long _xAxisDateZoom;
    HKValueRange *_effectiveAxisRange;
    HKValueRange *_actualAxisRange;
    double _hardLeftMarginWidth;
    double _virtualLeftMarginWidth;
    double _virtualRightMarginWidth;
    long long _virtualLeftMarginStyle;
    long long _virtualRightMarginStyle;
    HKValueRange *_actualVisibleRange;
    HKValueRange *_effectiveVisibleRangeCadence;
    HKValueRange *_effectiveVisibleRangeActive;
    long long _minimumDateZoom;
    long long _maximumDateZoom;
    HKMultiTouchPressGestureRecognizer *_multiTouchGestureRecognizer;
    double _zoomScale;
    UIView *_detailView;
    HKValueRange *_destinationEffectiveVisibleRangeActive;
    NSSet *_yAxisAccessoryViews;
    struct CGPoint _contentOffset;
    struct UIEdgeInsets _axisInset;
}

+ (id)_rangeFromModelCoordinateMin:(double)arg1 max:(double)arg2 axis:(id)arg3;
+ (double)_modelCoordinateSpanForRange:(id)arg1 axis:(id)arg2;
@property(retain, nonatomic) NSSet *yAxisAccessoryViews; // @synthesize yAxisAccessoryViews=_yAxisAccessoryViews;
@property(retain, nonatomic) HKValueRange *destinationEffectiveVisibleRangeActive; // @synthesize destinationEffectiveVisibleRangeActive=_destinationEffectiveVisibleRangeActive;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) _Bool enableInteractiveSelectionLine; // @synthesize enableInteractiveSelectionLine=_enableInteractiveSelectionLine;
@property(nonatomic) _Bool enableZoomInGesture; // @synthesize enableZoomInGesture=_enableZoomInGesture;
@property(readonly, nonatomic) HKMultiTouchPressGestureRecognizer *multiTouchGestureRecognizer; // @synthesize multiTouchGestureRecognizer=_multiTouchGestureRecognizer;
@property(nonatomic) _Bool enableStickySelection; // @synthesize enableStickySelection=_enableStickySelection;
@property(nonatomic) _Bool contentWidthFromTimeScope; // @synthesize contentWidthFromTimeScope=_contentWidthFromTimeScope;
@property(nonatomic) long long maximumDateZoom; // @synthesize maximumDateZoom=_maximumDateZoom;
@property(nonatomic) long long minimumDateZoom; // @synthesize minimumDateZoom=_minimumDateZoom;
@property(readonly, nonatomic) HKValueRange *effectiveVisibleRangeActive; // @synthesize effectiveVisibleRangeActive=_effectiveVisibleRangeActive;
@property(readonly, nonatomic) HKValueRange *effectiveVisibleRangeCadence; // @synthesize effectiveVisibleRangeCadence=_effectiveVisibleRangeCadence;
@property(readonly, nonatomic) HKValueRange *actualVisibleRange; // @synthesize actualVisibleRange=_actualVisibleRange;
@property(nonatomic) long long virtualRightMarginStyle; // @synthesize virtualRightMarginStyle=_virtualRightMarginStyle;
@property(nonatomic) long long virtualLeftMarginStyle; // @synthesize virtualLeftMarginStyle=_virtualLeftMarginStyle;
@property(nonatomic) double virtualRightMarginWidth; // @synthesize virtualRightMarginWidth=_virtualRightMarginWidth;
@property(nonatomic) double virtualLeftMarginWidth; // @synthesize virtualLeftMarginWidth=_virtualLeftMarginWidth;
@property(nonatomic) double hardLeftMarginWidth; // @synthesize hardLeftMarginWidth=_hardLeftMarginWidth;
@property(readonly, nonatomic) HKValueRange *actualAxisRange; // @synthesize actualAxisRange=_actualAxisRange;
@property(readonly, nonatomic) HKValueRange *effectiveAxisRange; // @synthesize effectiveAxisRange=_effectiveAxisRange;
@property(readonly, nonatomic) long long xAxisDateZoom; // @synthesize xAxisDateZoom=_xAxisDateZoom;
@property(retain, nonatomic) HKGraphViewSelectionStyle *selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) _Bool disableSelection; // @synthesize disableSelection=_disableSelection;
@property(nonatomic) _Bool disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property(nonatomic) unsigned long long featheringOptions; // @synthesize featheringOptions=_featheringOptions;
@property(nonatomic) unsigned long long outlineOptions; // @synthesize outlineOptions=_outlineOptions;
@property(copy, nonatomic) UIColor *topMarginColor; // @synthesize topMarginColor=_topMarginColor;
@property(copy, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property(nonatomic) struct UIEdgeInsets axisInset; // @synthesize axisInset=_axisInset;
@property(nonatomic) _Bool disableXAxis; // @synthesize disableXAxis=_disableXAxis;
@property(nonatomic) double xAxisSpace; // @synthesize xAxisSpace=_xAxisSpace;
@property(copy, nonatomic) HKAxis *xAxis; // @synthesize xAxis=_xAxis;
@property(nonatomic) __weak id <HKGraphViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enumerateVisibleCoordinatesWithBlock:(CDUnknownBlockType)arg1;
- (void)setAxesToShowSimultaneously:(id)arg1 stackOffset:(long long)arg2;
- (void)setPreviousDateZoom:(long long)arg1;
- (id)primarySeries;
- (id)findVisibleBlockCoordinatesForPrimarySeries;
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4;
- (void)_notifyDelegateOfTapOnYAxis;
- (void)_notifyDelegateSeriesUpdate:(id)arg1 newDataArrived:(_Bool)arg2;
- (void)_notifyDelegateOfYAxisWidth:(double)arg1 toWidth:(double)arg2;
- (void)_notifyDelegateOfSizeChange;
- (void)_notifyDelegateOfFinishUserScrolling;
- (void)_notifyDelegateOfVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)_notifyDateZoomDidChangeFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_notifyDidEndSelection;
- (void)_notifyDidUpdateSelectionWithPointContext:(id)arg1;
- (void)_notifyDidBeginSelection;
- (void)_activateStickySelection;
- (void)_deactivateStickySelection;
- (_Bool)_stickySelectionActive;
- (void)_moveSeriesToFront:(id)arg1;
- (void)_selectionRecognizerDidFinish:(id)arg1;
- (void)finishSelection;
- (void)_deselectAllSeriesWithAlpha:(double)arg1 offScreenIndicatorAlpha:(double)arg2 seriesGroup:(id)arg3;
- (id)_pointSelectionContextWithTouchPoints:(id)arg1 updateViewStates:(_Bool)arg2;
- (void)_selectionRecognizerDidMoveWithTouchPoints:(id)arg1;
- (void)_selectionRecognizerDidMove:(id)arg1;
- (CDStruct_767cbfa4)_closestDataPointPathToPoint:(struct CGPoint)arg1 seriesGroupRow:(long long)arg2 minimumXDistance:(double)arg3 xDistanceOut:(double *)arg4;
- (void)_updateSelectionContextStateWithTouchPoint:(struct CGPoint)arg1 seriesGroup:(id)arg2;
- (id)_valueForXAxisLocation:(double)arg1;
- (struct CGAffineTransform)_xAxisCoordinateTransform;
- (void)_handleStartTouchPoint:(struct CGPoint)arg1 seriesGroupRow:(long long)arg2;
- (void)_selectionRecognizerDidBeginWithTouchPoint:(struct CGPoint)arg1;
- (void)_selectionRecognizerDidBegin:(id)arg1;
- (struct CGPoint)_touchPointForSeriesGroupIndex:(long long)arg1 originalTouchPoint:(struct CGPoint)arg2;
- (void)gestureWillBeginWithRecognizer:(id)arg1;
- (id)_closestSeriesToPoint:(struct CGPoint)arg1 allSeries:(id)arg2;
- (_Bool)_touchesActuallyMoved:(id)arg1;
- (void)_selectionRecognizerDidUpdate:(id)arg1;
- (void)_removeSelectionRecognizerFromView:(id)arg1;
- (void)_addSelectionRecognizerToView:(id)arg1;
- (id)_selectedRegionForTouchPoint:(struct CGPoint)arg1 seriesGroup:(id)arg2;
- (void)_enumerateSeriesSelectionRegionsForSeriesGroup:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)_currentSelectionStateForSeriesGroup:(id)arg1;
- (void)_toggleStickySelectionAction:(id)arg1;
- (void)_addTapGestureRecognizerForTogglingStickyToView:(id)arg1;
- (void)_tapOnViewAction:(id)arg1;
- (void)_addTapGestureRecognizerForTapOnView:(id)arg1;
- (_Bool)_renderXAxisLabelAndGridsNeedsNewRenderer;
- (void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(CDUnknownBlockType)arg1;
- (void)_updateGraphViewConfigurationIfNecessary;
- (void)_setNeedsUpdateGraphViewConfiguration;
- (void)_scrollToCurrentVisibleRangeAnimated:(_Bool)arg1;
- (void)_restoreDestinationActiveRange;
- (void)_preserveDestinationActiveRange:(id)arg1;
- (void)_updateZoomForParameters;
- (double)_contentWidth;
- (double)_maximumZoomScale;
- (void)_updateAxisZoomScaleValueRange;
- (double)_maxTimeThreshold;
- (void)_updateDateZoomIfNecessary;
- (void)_reloadViewScope;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_snapXAxisRangeToPreservedRange;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_updateAndNotifySelectedContextChangeForAllSeriesIfNecesssary;
- (_Bool)stillAnimating:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
- (void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(struct CGContext *)arg2;
- (struct CGRect)_yAxisRectForSeriesGroupRow:(long long)arg1;
- (struct _HKLocationSpan)_locationSpanForSeriesGroupRow:(long long)arg1;
- (struct CGRect)_yAxisRectForSeriesGroupRowOld:(long long)arg1;
- (double)_renderXAxisLabels;
- (void)_renderYAxisLabels;
- (void)_renderYAxisGridlinesWithBlendMode:(int)arg1;
- (void)_renderXAxisGridlinesWithBlendMode:(int)arg1;
- (void)_renderBaseline;
- (id)_visibleSeriesForSeriesGroup:(id)arg1;
- (id)_seriesForCommonAxesForSeriesGroup:(id)arg1;
- (_Bool)_simultaneousAxesAreEqualForSeriesGroup:(id)arg1;
- (void)_renderSelectionLineWithContext:(struct CGContext *)arg1;
- (void)_renderVirtualMarginsWithContext:(struct CGContext *)arg1;
- (double)_inactiveRightAreaForRect:(struct CGRect)arg1;
- (void)_renderVirtualMarginInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 marginStyle:(long long)arg3;
- (void)_renderVirtualMarginGridLines:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_renderSeriesWithContext:(struct CGContext *)arg1 secondaryRenderContext:(id)arg2;
- (void)_renderYAxisDividersWithContext:(struct CGContext *)arg1;
- (void)_renderDataAreaDividersWithContext:(struct CGContext *)arg1;
- (void)forceYAxisScaleToRange:(id)arg1 animated:(_Bool)arg2;
- (void)forceYAxisAutoScaleAnimated:(_Bool)arg1;
- (void)_forceYAxisAutoScaleForSeriesGroupRow:(long long)arg1 animated:(_Bool)arg2;
- (void)_autoScaleYAxisIfNecessaryForAllGroups;
- (void)_autoScaleYAxisIfNecessaryForGroupRow:(long long)arg1;
- (id)_yAxisRangeForSynchronizedAxesForDateZoom:(long long)arg1 chartRect:(struct CGRect)arg2 seriesGroup:(id)arg3;
- (void)_autoScaleXAxis;
- (id)_defaultXAxisValueRange;
- (_Bool)seriesDrawingDuringScrolling;
- (struct UIEdgeInsets)virtualMarginInsets;
- (void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(_Bool)arg2;
- (id)_findActualAxisRangeFromVisibleRanges;
- (id)_effectiveVisibleRangeFromActualVisibleRange:(id)arg1;
- (id)_actualVisibleRangeFromEffectiveVisibleRange:(id)arg1 dataAreaRect:(struct CGRect)arg2;
- (void)setEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)_updateEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3 virtualLeftMarginWidth:(double)arg4 virtualRightMarginWidth:(double)arg5;
- (void)setEffectiveVisibleRangeActive:(id)arg1 animated:(_Bool)arg2;
- (void)_setRangesForActiveVisibleRange:(id)arg1;
- (id)_rangeFromRange:(id)arg1 withStartOfRange:(id)arg2;
- (void)setVirtualRightMargin:(double)arg1;
- (void)setVirtualLeftMargin:(double)arg1;
- (void)_updateGraphViewConfiguration;
- (void)_updateRangesForEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)_setVisibleRangesForEffectiveRangeCadence:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_resumeChartInteraction;
- (void)_pauseChartInteraction;
- (void)_setYAxisAccessoryViews:(id)arg1;
@property(retain, nonatomic) HKValueRange *chartableValueRange;
- (void)setBackgroundColor:(id)arg1;
- (void)setRenderView:(id)arg1;
- (void)_clearRenderViewIfNecessary;
- (void)invalidateDataSourceCaches;
- (void)removeSeries;
- (void)setNeedsReloadSeries;
- (void)_loadSeriesForZoom:(long long)arg1;
- (id)_graphSeriesForZoom:(long long)arg1 seriesGroupRow:(long long)arg2;
- (void)_layoutYAxisAccessoryViews;
- (void)_installAccessoryViews;
- (void)_layoutDetailView;
- (void)_layoutLegends;
- (void)_createLegendForSeriesGroup:(id)arg1;
- (struct UIEdgeInsets)_currentLegendInsets;
- (void)_updateLegendForSeriesGroup:(id)arg1;
- (_Bool)_seriesGroupHasLegendEntries:(id)arg1;
- (void)_createLegendsIfNecessary;
- (_Bool)_graphViewIsConfigured;
- (void)layoutSubviews;
- (void)_loadFeatheringImages;
- (void)_loadScrollView;
@property(readonly, nonatomic) _Bool isScrollViewDecelerating;
@property(readonly, nonatomic) NSArray *allSeries;
- (void)_updateScene;
- (struct CGRect)_dataAreaRect;
- (struct CGRect)_verticalAxisRect;
- (struct CGRect)_scrollingAreaRect;
- (double)_detailViewWidth;
@property(readonly, nonatomic) struct CGRect leftMarginViewRect;
@property(readonly, nonatomic) double yAxisWidth;
- (_Bool)_configureYAxisViewIfNeeded;
- (_Bool)_needsYAxisUpdateDuringRender;
- (_Bool)_anySeriesAnimatingDuringAutoscale;
- (id)_firstSelectionContext;
- (id)_firstSeries;
- (long long)_countOfAllSeries;
- (void)_walkAllSeries:(CDUnknownBlockType)arg1;
- (_Bool)_axisRangeIsDateRange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

