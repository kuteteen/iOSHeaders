//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSString, UIImage, UIImageView, UITapGestureRecognizer, _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKRightImageButton : UIControl
{
    UITapGestureRecognizer *_gestureRecognizer;
    _Bool _titleConstraintsAdded;
    NSArray *_titleOnlyConstraints;
    NSArray *_titleAndImageConstraints;
    _Bool _highlighted;
    _MKUILabel *_titleLabel;
    UIImageView *_imageView;
}

- (_Bool)isHighlighted;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) _MKUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)viewForLastBaselineLayout;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (void)updateConstraints;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

