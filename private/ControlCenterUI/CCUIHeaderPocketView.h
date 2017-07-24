//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView, SBUIChevronView;

@interface CCUIHeaderPocketView : UIView
{
    MTMaterialView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    double _backgroundAlpha;
}

@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
- (void).cxx_destruct;
@property(nonatomic, getter=isChevronPointingDown) _Bool chevronPointingDown;
@property(nonatomic) double chevronAlpha;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
