//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/EKCurrentTimeMarkerViewUpdating-Protocol.h>
#import <EventKitUI/EKUITintColorUpdateDelegate-Protocol.h>

@class EKCurrentTimeMarkerView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIVisualEffect;
@protocol EKDayTimeViewDelegate;

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating, EKUITintColorUpdateDelegate>
{
    NSMutableArray *_contentViews;
    NSMutableDictionary *_visualEffectViews;
    unsigned int _leftBorder:1;
    unsigned int _rightBorder:1;
    double _highlightedHour;
    long long _orientation;
    double _hourSize;
    double _designatorSize;
    EKCurrentTimeMarkerView *_timeMarker;
    UIView *_timeMarkerExtension;
    double _timeWidth;
    _Bool _showsTimeMarker;
    _Bool _showsTimeMarkerExtension;
    _Bool _usesLightText;
    UIColor *_timeColor;
    double _hoursToPad;
    UIVisualEffect *_visualEffect;
    double _hourHeightScale;
    double _hourHeight;
    id <EKDayTimeViewDelegate> _delegate;
    struct _NSRange _hoursToRender;
}

+ (double)heightOfHourTextForHour:(long long)arg1 orientation:(long long)arg2;
+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (id)unscaledAllDayLabelFont;
+ (double)defaultHourScale;
+ (double)defaultHeightForOrientation:(long long)arg1 withHourScale:(double)arg2;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)designatorSizeForOrientation:(long long)arg1;
+ (double)hourSizeForOrientation:(long long)arg1;
+ (double)hourHeightForOrientation:(long long)arg1;
+ (double)hourWidthForOrientation:(long long)arg1;
+ (double)timeWidthForOrientation:(long long)arg1;
+ (double)timeVerticalInsetForOrientation:(long long)arg1;
+ (double)timeInsetForOrientation:(long long)arg1;
+ (void)setVerticalPadding:(double)arg1;
+ (double)verticalPadding;
+ (double)_timeTextWidthForOrientation:(long long)arg1;
+ (void)_calculateWidthForOrientation:(long long)arg1 excludeCurrentTime:(_Bool)arg2;
+ (double)_noonLocalizedWidthForOrientation:(long long)arg1;
+ (id)_noonLocalizedString;
+ (id)_boldFontForOrientation:(long long)arg1;
+ (id)_normalFontForOrientation:(long long)arg1;
+ (double)_dynamicFontSizeForOrientation:(long long)arg1;
+ (void)_invalidateWidth;
+ (void)_registerForInvalidation;
+ (void)_invalidateCachedValues;
@property(nonatomic) __weak id <EKDayTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double hourHeight; // @synthesize hourHeight=_hourHeight;
@property(nonatomic) double hourHeightScale; // @synthesize hourHeightScale=_hourHeightScale;
@property(nonatomic) struct _NSRange hoursToRender; // @synthesize hoursToRender=_hoursToRender;
@property(retain, nonatomic) UIVisualEffect *visualEffect; // @synthesize visualEffect=_visualEffect;
@property(nonatomic) double hoursToPad; // @synthesize hoursToPad=_hoursToPad;
@property(nonatomic) _Bool usesLightText; // @synthesize usesLightText=_usesLightText;
@property(nonatomic) _Bool showsTimeMarkerExtension; // @synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension;
@property(nonatomic) _Bool showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
- (void).cxx_destruct;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (void)tintColorDidChange;
- (double)_positionOfSecond:(int)arg1;
- (void)layoutSubviews;
- (void)updateMarkerPosition;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutFrames;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setOrientation:(long long)arg1;
@property(readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker;
@property(retain, nonatomic) UIColor *timeColor; // @synthesize timeColor=_timeColor;
@property(nonatomic) double highlightedHour;
@property(nonatomic) _Bool showsRightBorder;
@property(nonatomic) _Bool showsLeftBorder;
- (void)setOpaque:(_Bool)arg1;
- (double)scaledHourHeight;
- (double)_timeWidth;
- (void)_invalidateTimeWidth;
- (double)topPadding;
- (void)_sizeClassChanged;
- (void)_fontSizeChanged;
- (void)_localeChanged;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double defaultHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

