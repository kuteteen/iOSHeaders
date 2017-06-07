//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _MKScaleUnitsView : UIView
{
    _Bool _useLightText;
    double _segmentLengthInPixels;
    double _unitsWidth;
    double _justUnitsWidth;
    NSDictionary *_legendAttributes;
    NSMutableArray *_strings;
    NSString *_legendBaseString;
    NSString *_unitsString;
    NSString *_unpaddedUnitsString;
    NSMapTable *_legendStringWidthCache;
    NSMutableDictionary *_legendStringForDistanceStringCache;
    NSNumberFormatter *_floatNumberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *floatNumberFormatter; // @synthesize floatNumberFormatter=_floatNumberFormatter;
@property(retain, nonatomic) NSString *legendBaseString; // @synthesize legendBaseString=_legendBaseString;
@property(copy, nonatomic) NSString *unpaddedUnitsString; // @synthesize unpaddedUnitsString=_unpaddedUnitsString;
@property(retain, nonatomic) NSString *unitsString; // @synthesize unitsString=_unitsString;
@property(readonly, nonatomic) double unitsWidth; // @synthesize unitsWidth=_unitsWidth;
- (void).cxx_destruct;
- (id)_legendStringForDistanceString:(id)arg1 appendUnits:(_Bool)arg2 index:(int)arg3;
- (id)_uncachedLegendStringsForDistanceString:(id)arg1;
@property(nonatomic) _Bool useLightText; // @dynamic useLightText;
@property(nonatomic) double segmentLengthInPixels; // @dynamic segmentLengthInPixels;
- (_Bool)canDisplaySegment:(unsigned long long)arg1;
- (void)_calculateLegend:(_Bool)arg1;
- (void)setUnits:(id)arg1;
- (double)_widthForString:(id)arg1 attributes:(id)arg2;
- (void)clearCaches:(id)arg1;
- (id)init;

@end

