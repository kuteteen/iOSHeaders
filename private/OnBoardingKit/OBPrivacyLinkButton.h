//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, OBTintInheritingImageView, UIImageView, UIStackView, UITextView;

__attribute__((visibility("hidden")))
@interface OBPrivacyLinkButton : UIButton
{
    OBTintInheritingImageView *_iconView;
    UIImageView *_chevronView;
    UITextView *_textView;
    UIStackView *_stackView;
    NSString *_captionText;
    NSString *_buttonText;
}

@property(readonly) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly) UITextView *textView; // @synthesize textView=_textView;
@property(readonly) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(readonly) OBTintInheritingImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_textViewFont;
- (struct _NSRange)_rangeForButtonText;
- (id)viewForLastBaselineLayout;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)titleForState:(unsigned long long)arg1;
- (void)_updateButtonColorWithColor:(id)arg1;
- (void)tintColorDidChange;
- (id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(struct CGSize)arg4 useLargeIcon:(_Bool)arg5;

@end

