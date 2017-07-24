//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol _UITextViewContentPaddingDelegate;

__attribute__((visibility("hidden")))
@interface _UITextViewContentPadding : NSObject
{
    long long _mode;
    double _targetValue;
    double _currentValue;
    id <_UITextViewContentPaddingDelegate> _delegate;
}

@property(nonatomic) __weak id <_UITextViewContentPaddingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)_checkNewCurrentValue;
- (void)resetCurrentValue;
- (void)increaseToValue:(double)arg1;
- (id)initWithDelegate:(id)arg1;

@end
