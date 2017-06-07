//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PUMapViewControllerSpec, PUStackView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUMapAnnotationView : UIView
{
    unsigned long long _count;
    UILabel *_countLabel;
    UIImageView *_countBadgeImageView;
    struct CGSize _badgeImageSize;
    PUMapViewControllerSpec *_spec;
    PUStackView *_stackView;
}

@property(readonly, retain, nonatomic) PUStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg1 nonFrontOnly:(_Bool)arg2;
- (_Bool)wouldCoverAnnotationView:(id)arg1;
- (void)layoutSubviews;
- (void)cleanUpAnimatedState;
- (id)compactDescription;
@property(readonly, nonatomic) double sideCapWidth;
- (void)updateStackViewForAnnotation:(id)arg1;
- (void)updateLabelForAnnotation:(id)arg1;
- (void)updateOrder;
@property(nonatomic) unsigned long long count;
- (void)configureAnnotationWithSpec:(id)arg1;

@end

