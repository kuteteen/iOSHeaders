//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString, UIColor, _MKScaleUnitsView;

@interface MKScaleView : UIView
{
    double _distanceInMeters;
    _Bool _useMetric;
    _Bool _useYardsForShortDistances;
    NSNumberFormatter *_floatNumberFormatter;
    double _magicNumbers[3];
    UIColor *_lightSegmentColorRegular;
    UIColor *_darkSegmentColorRegular;
    UIColor *_borderColorRegular;
    UIColor *_lightSegmentColorSatellite;
    UIColor *_darkSegmentColorSatellite;
    UIColor *_borderColorSatellite;
    NSMutableArray *_segments;
    _MKScaleUnitsView *_unitsView;
    long long _oldNumberOfSegments;
    UIView *_outlineViewA;
    UIView *_outlineViewB;
    UIView *_displayedOutline;
    double _segmentLengthInPixels;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    NSMutableDictionary *_formattedNumberCache;
    NSString *_feetAbbreviation;
    NSString *_yardAbbreviation;
    NSString *_milesAbbreviation;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    long long _grQuality;
    int _layoutCounter;
    _Bool _useLightText;
}

- (void).cxx_destruct;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(_Bool)arg3 inMetric:(_Bool)arg4 displaysYardsForShortDistances:(_Bool)arg5 strings:(id)arg6;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_formattedStringForFloat:(double)arg1;
- (void)layoutSubviews;
- (void)_calculateSegments;
- (void)_updateSegmentStrokes;
- (void)didMoveToWindow;
@property(nonatomic) _Bool useLightText; // @dynamic useLightText;
@property(nonatomic) double distanceInMeters; // @dynamic distanceInMeters;
- (void)setFrame:(struct CGRect)arg1;
- (void)memoryWarning:(id)arg1;
- (void)updateLocale:(id)arg1;
- (void)_updateStrings;
- (void)dealloc;
- (id)init;

@end

