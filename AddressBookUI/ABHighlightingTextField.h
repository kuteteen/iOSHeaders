//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIColor;
@protocol ABResponderDelegate;

@interface ABHighlightingTextField : UITextField
{
    _Bool _isHighlighted;
    _Bool _isHighlightingEnabled;
    UIColor *_savedTextColor;
    UIColor *_highlightedTextColor;
    _Bool _showsClearButtonWhenEmpty;
    id <ABResponderDelegate> _responderDelegate;
}

@property(nonatomic) _Bool showsClearButtonWhenEmpty; // @synthesize showsClearButtonWhenEmpty=_showsClearButtonWhenEmpty;
@property(nonatomic) id <ABResponderDelegate> responderDelegate; // @synthesize responderDelegate=_responderDelegate;
@property(retain, nonatomic, setter=abSetHighlightedTextColor:) UIColor *abHighlightedTextColor; // @synthesize abHighlightedTextColor=_highlightedTextColor;
@property(nonatomic, setter=abSetHighlightingEnabled:) _Bool abIsHighlightingEnabled; // @synthesize abIsHighlightingEnabled=_isHighlightingEnabled;
@property(nonatomic, setter=abSetHighlighted:) _Bool abIsHighlighted; // @synthesize abIsHighlighted=_isHighlighted;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)_showsClearButtonWhenEmpty;
- (void)setTextColor:(id)arg1;
- (void)dealloc;

@end

