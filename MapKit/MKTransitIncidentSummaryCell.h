//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class NSDate, NSLayoutConstraint, NSString, UIImage, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentSummaryCell : MKTableViewCell
{
    _MKUILabel *_titleLabel;
    _MKUILabel *_summaryLabel;
    _MKUILabel *_startedLabel;
    UIImageView *_iconImageView;
    NSLayoutConstraint *_titleToTopConstraint;
    NSLayoutConstraint *_summaryToTitleConstraint;
    NSLayoutConstraint *_startedToSummaryConstraint;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)_updateStartLabel;
@property(retain, nonatomic) UIImage *icon;
@property(copy, nonatomic) NSString *summary;
@property(copy, nonatomic) NSString *title;
- (void)didMoveToWindow;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)dealloc;
- (void)setConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

@end

