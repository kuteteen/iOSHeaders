//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSAttributedString, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont, UITapGestureRecognizer, UITextView, _MKUILabel;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate>
{
    unsigned long long _expansionMode;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_textLayoutManager;
    _MKUILabel *_showMoreLabel;
    UITapGestureRecognizer *_showMoreTapRecognizer;
    _Bool _constraintsAdded;
    _Bool _useAttributedText;
    _Bool _isPerformingLayout;
    UITextView *_textView;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_showMoreTextColor;
    long long _textAlignment;
    unsigned long long _numberOfLinesWhenCollapsed;
    CDUnknownBlockType _labelResizedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType labelResizedBlock; // @synthesize labelResizedBlock=_labelResizedBlock;
@property(nonatomic) unsigned long long numberOfLinesWhenCollapsed; // @synthesize numberOfLinesWhenCollapsed=_numberOfLinesWhenCollapsed;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (_Bool)_canShowAllText;
- (_Bool)isShowingExpanded;
- (void)_setExpansionMode:(unsigned long long)arg1;
@property(nonatomic, getter=isExpanded) _Bool expanded;
- (void)_expand;
- (void)_setTextExclusionPath;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *showMoreTextColor; // @synthesize showMoreTextColor=_showMoreTextColor;
@property(retain, nonatomic) UIFont *showMoreFont;
@property(copy, nonatomic) NSString *showMoreText;
- (void)_updateTextAttributes;
@property(nonatomic) long long lineBreakMode;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (void)infoCardThemeChanged:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_mkExpandingLabelComonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

