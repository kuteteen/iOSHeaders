//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SXTopVideoControlsView : UIView
{
    NSArray *_leadingAccessoryViews;
    NSArray *_trailingAccessoryViews;
}

@property(retain, nonatomic) NSArray *trailingAccessoryViews; // @synthesize trailingAccessoryViews=_trailingAccessoryViews;
@property(retain, nonatomic) NSArray *leadingAccessoryViews; // @synthesize leadingAccessoryViews=_leadingAccessoryViews;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setLeadingAccessoryViews:(id)arg1 animated:(_Bool)arg2;
- (void)setTrailingAccessoryViews:(id)arg1 animated:(_Bool)arg2;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
