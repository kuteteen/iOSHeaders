//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView
{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;
    _Bool _isModern;
    UILabel *_dateLabel;
    UILabel *_weekdayLabel;
    NSString *_formattedDateString;
    double _weekdayWidth;
}

@property(nonatomic) _Bool isModern; // @synthesize isModern=_isModern;
@property(nonatomic) double weekdayWidth; // @synthesize weekdayWidth=_weekdayWidth;
@property(copy, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property(readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;
@property(nonatomic) _Bool weekdayLast;
- (void)layoutSubviews;
- (_Bool)_canBeReusedInPickerView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

