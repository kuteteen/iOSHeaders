//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class NUIContainerBoxView, UILabel;

@interface SearchUITitleCardSectionView : SearchUICardSectionView
{
    UILabel *_label;
    NUIContainerBoxView *_containerView;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain) NUIContainerBoxView *containerView; // @synthesize containerView=_containerView;
@property(retain) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end

