//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKDayAllDayView, EKDayView;

@interface EKDayViewWithGutters : UIView
{
    EKDayAllDayView *_leftAllDayView;
    EKDayAllDayView *_rightAllDayView;
    UIView *_leftGutter;
    UIView *_rightGutter;
    EKDayView *_dayView;
    double _gutterWidth;
    double _allDayHeight;
}

@property(nonatomic) double allDayHeight; // @synthesize allDayHeight=_allDayHeight;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(retain, nonatomic) EKDayView *dayView; // @synthesize dayView=_dayView;
@property(readonly, nonatomic) UIView *rightGutter; // @synthesize rightGutter=_rightGutter;
@property(readonly, nonatomic) UIView *leftGutter; // @synthesize leftGutter=_leftGutter;
- (void).cxx_destruct;
- (id)_createAllDayView;
- (id)initWithFrame:(struct CGRect)arg1 dayView:(id)arg2;

@end

