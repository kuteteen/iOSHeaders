//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierRenderer : UIView
{
    int m_autoscrollDirections;
    int m_magnifierMethod;
}

@property(nonatomic) int magnifierMethod; // @synthesize magnifierMethod=m_magnifierMethod;
@property(nonatomic) int autoscrollDirections; // @synthesize autoscrollDirections=m_autoscrollDirections;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawMagnifier:(struct CGRect)arg1;
- (void)drawAutoscroller:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

