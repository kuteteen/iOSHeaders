//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

#import "NTKStopwatchComplicationDisplay.h"

@class CLKFont, NSString, NTKColoringLabel;

@interface NTKStopwatchLargeModuleView : NTKComplicationModuleView <NTKStopwatchComplicationDisplay>
{
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_timeCountLabel;
    CLKFont *_timeCountFont;
    CLKFont *_timeCountMediumFont;
    CLKFont *_timeCountSmallFont;
    CLKFont *_timeCountSmallerFont;
}

- (void).cxx_destruct;
- (void)setTime:(double)arg1;
- (void)_layoutContentView;
- (id)fontForInterval:(double)arg1;
- (double)countdownBaselineOffsetForFont:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

