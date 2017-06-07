//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface QLWaveformView : UIView
{
    struct CGSize _waveSize;
    UIView *_lineView;
    UIImage *_waveImage;
    UIImageView *_waveView;
    AVAsset *_asset;
    UIImage *_placeholderImage;
    struct CGRect *_visibleRect;
}

@property struct CGRect *visibleRect; // @synthesize visibleRect=_visibleRect;
@property(retain) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateWithWaveformImage:(id)arg1;
- (void)_expandWaveform;
- (void)updateImage;

@end

