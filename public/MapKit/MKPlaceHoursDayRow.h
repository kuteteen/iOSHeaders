//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursDayRow : MKPlaceSectionRowView
{
    NSArray *_labels;
    NSLayoutConstraint *_baselineToTop;
    NSArray *_baselineToBaselineConstraints;
    NSArray *_baselineToBottomConstraints;
}

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)setDays:(id)arg1 hours:(id)arg2 shouldStack:(_Bool)arg3;
- (id)_standardLabel;
- (_Bool)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1;

@end

