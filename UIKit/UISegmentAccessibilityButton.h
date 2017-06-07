//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UISegment;

__attribute__((visibility("hidden")))
@interface UISegmentAccessibilityButton : UIButton
{
    UISegment *_segment;
}

+ (id)buttonWithSegment:(id)arg1;
@property(retain, nonatomic) UISegment *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end

