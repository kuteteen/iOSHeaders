//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPrintFormatter.h>

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter
{
    UIView *_view;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithView:(id)arg1;

@end

