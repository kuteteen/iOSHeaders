//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CNCardGroupItem, NSArray;

@interface CNContactCell : UITableViewCell
{
    NSArray *_constantConstraints;
    NSArray *_variableConstraints;
    CNCardGroupItem *_cardGroupItem;
}

@property(retain, nonatomic) CNCardGroupItem *cardGroupItem; // @synthesize cardGroupItem=_cardGroupItem;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(readonly, nonatomic) double minCellHeight;
- (void)updateConstraints;
@property(readonly, nonatomic) NSArray *variableConstraints;
@property(readonly, nonatomic) NSArray *constantConstraints;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool hasGapBetweenSeparatorAndTrailingEdge;
@property(nonatomic) _Bool showSeparator;
- (void)performAccessoryAction;
- (_Bool)shouldPerformAccessoryAction;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

