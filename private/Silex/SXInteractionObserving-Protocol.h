//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIControl, UIGestureRecognizer;

@protocol SXInteractionObserving <NSObject>

@optional
- (void)didHandleInteractionWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)willHandleInteractionWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)didHandleInteractionWithControl:(UIControl *)arg1;
- (void)willHandleInteractionWithControl:(UIControl *)arg1;
@end

