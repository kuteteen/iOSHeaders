//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface AVExternalPlaybackIndicatorView : UIView
{
    UIImage *_externalPlaybackIndicatorImageLarge;
    UIImage *_externalPlaybackIndicatorImageSmall;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
- (void)setTitleString:(id)arg1 subtitleString:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

