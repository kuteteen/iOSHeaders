//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface UIWebDragDotView : UIView
{
    UIColor *m_insertionPointColor;
    UIColor *m_selectionBarColor;
    UIImageView *m_dot;
    long long m_orientation;
    struct CGRect m_stickFrame;
    struct CGRect m_dotFrame;
}

@property(nonatomic) _Bool showsBall;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEdge:(struct CGRect)arg1;
- (struct CGRect)stickFrameForEdge:(struct CGRect)arg1 withOverlap:(double)arg2;
- (_Bool)isPointedLeft;
- (_Bool)isPointedRight;
- (_Bool)isPointedUp;
- (_Bool)isPointedDown;
- (_Bool)isVertical;
- (void)dealloc;
- (id)initWithEdge:(struct CGRect)arg1 container:(id)arg2 orientation:(long long)arg3;

@end

