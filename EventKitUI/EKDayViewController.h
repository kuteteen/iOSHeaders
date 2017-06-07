//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/BlockableScrollViewDelegate-Protocol.h>
#import <EventKitUI/EKDayOccurrenceViewDelegate-Protocol.h>
#import <EventKitUI/EKDayViewDataSource-Protocol.h>
#import <EventKitUI/EKDayViewDelegate-Protocol.h>
#import <EventKitUI/EKEventGestureControllerDelegate-Protocol.h>
#import <EventKitUI/UIScrollViewDelegate-Protocol.h>
#import <EventKitUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class CalendarOccurrencesCollection, EKDayOccurrenceView, EKDayView, EKDayViewWithGutters, EKEventEditViewController, EKEventGestureController, NSCalendar, NSDateComponents, NSString, NSTimer, ScrollSpringFactory, UIScrollView, UIView;
@protocol EKDayViewControllerDataSource, EKDayViewControllerDelegate, UIViewControllerPreviewing;

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, UIViewControllerPreviewingDelegate, EKDayOccurrenceViewDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate>
{
    UIView *_clipView;
    UIScrollView *_horizontalScrollingView;
    EKDayView *_previousDay;
    EKDayView *_currentDay;
    EKDayView *_nextDay;
    EKDayOccurrenceView *_proposedTimeView;
    EKDayViewWithGutters *_previousDayWithGutter;
    EKDayViewWithGutters *_currentDayWithGutter;
    EKDayViewWithGutters *_nextDayWithGutter;
    unsigned int _scrollViewAnimating:1;
    unsigned int _hasPendingNextDate:1;
    NSDateComponents *_pendingNextDate;
    unsigned int _hasPendingPreviousDate:1;
    NSDateComponents *_pendingPreviousDate;
    unsigned int _decelerating:1;
    unsigned int _settingDateFromScrolling:1;
    CalendarOccurrencesCollection *_occurrences;
    CalendarOccurrencesCollection *_previousDayOccurrences;
    CalendarOccurrencesCollection *_nextDayOccurrences;
    EKEventGestureController *_eventGestureController;
    ScrollSpringFactory *_decelerationSpringFactory;
    NSDateComponents *_originalDisplayDate;
    double _dayStart;
    double _dayEnd;
    _Bool _initialLoadHasOccurred;
    _Bool _instigatedDateChange;
    _Bool _viewAppeared;
    _Bool _resizing;
    _Bool _adjustingForDeceleration;
    _Bool _fingerDown;
    _Bool _correctAfterScroll;
    NSDateComponents *_targetDateComponents;
    _Bool _needToCompleteScrollingAnimation;
    _Bool _needToCompleteDeceleration;
    id <UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
    _Bool _showsBanner;
    _Bool _allowsDaySwitching;
    _Bool _allowsSelection;
    _Bool _alwaysAnimate;
    _Bool _disableGestureDayChange;
    _Bool _disableNotifyDateChangeDuringTracking;
    _Bool _animateAllDayAreaHeight;
    _Bool _shouldAutoscrollAfterAppearance;
    _Bool _notifyWhenTapOtherEventDuringDragging;
    _Bool _transitionedToSameDay;
    id <EKDayViewControllerDelegate> _delegate;
    id <EKDayViewControllerDataSource> _dataSource;
    NSDateComponents *_displayDate;
    NSCalendar *_calendar;
    double _gutterWidth;
    UIView *_gestureOccurrenceSuperview;
    EKEventEditViewController *_currentEditor;
    NSTimer *_showNowTimer;
    struct CGPoint _normalizedContentOffset;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) _Bool transitionedToSameDay; // @synthesize transitionedToSameDay=_transitionedToSameDay;
@property(retain, nonatomic) NSTimer *showNowTimer; // @synthesize showNowTimer=_showNowTimer;
@property(copy, nonatomic) NSDateComponents *pendingPreviousDate; // @synthesize pendingPreviousDate=_pendingPreviousDate;
@property(copy, nonatomic) NSDateComponents *pendingNextDate; // @synthesize pendingNextDate=_pendingNextDate;
@property(nonatomic) struct CGPoint normalizedContentOffset; // @synthesize normalizedContentOffset=_normalizedContentOffset;
@property(retain, nonatomic) EKEventEditViewController *currentEditor; // @synthesize currentEditor=_currentEditor;
@property(retain, nonatomic) UIView *gestureOccurrenceSuperview; // @synthesize gestureOccurrenceSuperview=_gestureOccurrenceSuperview;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(nonatomic) _Bool notifyWhenTapOtherEventDuringDragging; // @synthesize notifyWhenTapOtherEventDuringDragging=_notifyWhenTapOtherEventDuringDragging;
@property(nonatomic) _Bool shouldAutoscrollAfterAppearance; // @synthesize shouldAutoscrollAfterAppearance=_shouldAutoscrollAfterAppearance;
@property(nonatomic) _Bool animateAllDayAreaHeight; // @synthesize animateAllDayAreaHeight=_animateAllDayAreaHeight;
@property(nonatomic) _Bool disableNotifyDateChangeDuringTracking; // @synthesize disableNotifyDateChangeDuringTracking=_disableNotifyDateChangeDuringTracking;
@property(nonatomic) _Bool disableGestureDayChange; // @synthesize disableGestureDayChange=_disableGestureDayChange;
@property(nonatomic) _Bool alwaysAnimate; // @synthesize alwaysAnimate=_alwaysAnimate;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) _Bool allowsDaySwitching; // @synthesize allowsDaySwitching=_allowsDaySwitching;
@property(nonatomic) _Bool showsBanner; // @synthesize showsBanner=_showsBanner;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) __weak id <EKDayViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <EKDayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_completeScrollingAnimationIfNeeded;
- (void)_setHorizontalContentOffsetUsingSpringAnimation:(struct CGPoint)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)blockableScrollViewShouldAllowScrolling;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_stopShowNowTimer;
- (void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_didRespondToApplicationDidBecomeActiveStateChange;
- (_Bool)_shouldRespondToApplicationDidBecomeActiveStateChange;
- (void)_scrollToNowOnScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_cleanUpTargetDateComponents;
- (void)_showNowTimerFired:(id)arg1;
- (_Bool)_canShowNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (double)_showNowDelay;
- (void)_showNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_completeDecelerationIfNeeded;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (double)_weightedAllDayHeightForView:(id)arg1 visibleRect:(struct CGRect)arg2;
- (void)_updateAllDayAreaHeight;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)_isViewInVisibleRect:(id)arg1;
- (id)horizontalScrollView;
- (void)_setDayView:(id)arg1 toDate:(id)arg2;
- (void)_relayoutDaysDuringScrollingAndPerformDayChanges:(_Bool)arg1;
- (_Bool)_isResizing;
- (void)_relayoutDaysDuringScrolling;
- (void)_notifyDelegateOfSelectedDateChange;
- (void)_relayoutDays;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)cleanUpAfterGestureFailureForEventGestureController:(id)arg1;
- (_Bool)_shouldEndGestureEditingOnTap;
- (_Bool)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
- (void)externallyEndedGestureDragging;
- (_Bool)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(_Bool)arg2 right:(_Bool)arg3 vertically:(_Bool)arg4 towardPoint:(struct CGPoint)arg5;
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(_Bool)arg3;
- (_Bool)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(_Bool)arg4 span:(long long)arg5;
- (void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(_Bool)arg3;
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(_Bool)arg3;
- (_Bool)eventGestureControllerShouldAllowLongPress:(id)arg1;
- (id)currentPresentationController;
- (double)timedRegionOriginForEventGestureController:(id)arg1;
- (double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(_Bool)arg3;
- (double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;
- (struct CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(_Bool)arg3;
- (double)eventGestureController:(id)arg1 dateAtPoint:(struct CGPoint)arg2;
- (_Bool)eventGestureController:(id)arg1 isAllDayAtPoint:(struct CGPoint)arg2 requireInsistence:(_Bool)arg3;
- (id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2;
- (id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(struct CGPoint)arg2;
- (void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(_Bool)arg3;
- (double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)createEventForEventGestureController:(id)arg1;
- (void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(_Bool)arg2;
- (void)updateFrameForProposedTimeView;
- (id)createOccurrenceViewForEventGestureController:(id)arg1;
- (double)horizontalOffsetForPagingForEventGestureController:(id)arg1;
- (id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
- (id)touchTrackingViewForEventGestureController:(id)arg1;
- (id)_eventGestureSuperview;
- (void)dayViewDidTapEmptySpace:(id)arg1;
- (void)_highlightDayViewDate:(double)arg1 isAllDay:(_Bool)arg2;
- (id)_createGutterDayViewWithDayView:(id)arg1;
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (id)_occurrencesForDayView:(id)arg1;
- (void)dayView:(id)arg1 didUpdateScrollPosition:(struct CGPoint)arg2;
- (void)significantTimeChangeOccurred;
- (void)reloadDataBetweenStart:(id)arg1 end:(id)arg2;
- (void)reloadData;
- (id)_eventsForDay:(id)arg1;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)editorDidCancelEditingEvent:(id)arg1;
- (void)editorDidDeleteEvent:(id)arg1;
- (void)editorDidSaveEvent:(id)arg1;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (void)bringEventToFront:(id)arg1;
- (void)scrollEventsIntoViewAnimated:(_Bool)arg1;
- (void)scrollEventIntoView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_isCurrentDayToday;
- (_Bool)_canScrollToNow;
- (_Bool)_shouldScrollToNow;
- (void)scrollToNow:(_Bool)arg1;
- (void)setTimeZone:(id)arg1;
- (void)_setDisplayDate:(id)arg1 forRepeat:(_Bool)arg2 animate:(_Bool)arg3;
- (void)_setDisplayDate:(id)arg1 forRepeat:(_Bool)arg2;
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
- (void)_setNextAndPreviousFirstVisibleSecondToCurrent;
- (void)_setDisplayDateInternal:(id)arg1;
- (void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;
- (void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayView:(id)arg1 didSelectEvent:(id)arg2;
- (id)preferredEventToSelectOnDate:(id)arg1;
- (_Bool)_isCalendarDate:(id)arg1 sameDayAsComponents:(id)arg2;
@property(readonly, nonatomic) _Bool currentDayContainsOccurrences;
@property(readonly, nonatomic) UIView *currentDayContentGridView;
@property(readonly, nonatomic) UIView *currentAllDayView;
@property(readonly, nonatomic) EKDayView *currentDayView;
- (id)gestureController;
- (id)occurrenceViewForEvent:(id)arg1 includeNextAndPreviousDays:(_Bool)arg2;
- (id)occurrenceViewForEvent:(id)arg1;
- (void)layoutContainerView:(id)arg1;
- (unsigned long long)firstVisibleSecond;
- (void)setFrame:(struct CGRect)arg1 gutterWidth:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_scrollDayViewAfterRelayoutDays;
- (void)scrollDayViewAppropriatelyWithAnimation:(_Bool)arg1;
@property(nonatomic) _Bool scrollEventsInToViewIgnoresVisibility;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

