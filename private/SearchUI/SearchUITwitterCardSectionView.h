//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "NUIContainerStackViewDelegate.h"

@class NSString, TLKStackView, UIView;

@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate>
{
    UIView *_pictureView;
}

@property(retain) UIView *pictureView; // @synthesize pictureView=_pictureView;
- (void).cxx_destruct;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

// Remaining properties
@property(retain) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

