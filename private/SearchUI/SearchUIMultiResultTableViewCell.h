//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewCell.h>

@class NSArray, NSLayoutConstraint, SearchUIIconViewContainer;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell
{
    SearchUIIconViewContainer *_topContainer;
    SearchUIIconViewContainer *_bottomContainer;
    NSLayoutConstraint *_singleRowConstraint;
    NSLayoutConstraint *_doubleRowConstraint;
    NSArray *_results;
}

+ (unsigned long long)numberOfColumnsForCurrentOrientation;
@property(retain) NSArray *results; // @synthesize results=_results;
@property(retain) NSLayoutConstraint *doubleRowConstraint; // @synthesize doubleRowConstraint=_doubleRowConstraint;
@property(retain) NSLayoutConstraint *singleRowConstraint; // @synthesize singleRowConstraint=_singleRowConstraint;
@property(retain) SearchUIIconViewContainer *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain) SearchUIIconViewContainer *topContainer; // @synthesize topContainer=_topContainer;
- (void).cxx_destruct;
- (void)updateExpanded:(_Bool)arg1;
- (_Bool)isExpandable;
- (void)layoutSubviews;
- (void)updateSpacerWidthsForPlatterInsets;
- (id)iconContainers;
- (void)updateNumberOfColumns;
- (id)visibleResults;
- (unsigned long long)numberOfVisibleResults;
- (unsigned long long)numberOfVisibleColumns;
- (void)updateWithRowModel:(id)arg1;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

@end
