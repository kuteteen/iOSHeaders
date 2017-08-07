//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPCPlayerResponse, MediaControlsTransportButton, NSBundle, UIColor;
@protocol MediaControlsRatingActionSheet;

@interface MediaControlsTransportStackView : UIView
{
    _Bool _empty;
    long long _mediaControlsPlayerState;
    long long _style;
    MPCPlayerResponse *_response;
    MediaControlsTransportButton *_leftButton;
    id <MediaControlsRatingActionSheet> _ratingActionSheetDelegate;
    MediaControlsTransportButton *_middleButton;
    MediaControlsTransportButton *_rightButton;
    NSBundle *_mediaControlsBundle;
    UIColor *_tintColorForCurrentStyle;
}

@property(retain, nonatomic) UIColor *tintColorForCurrentStyle; // @synthesize tintColorForCurrentStyle=_tintColorForCurrentStyle;
@property(retain, nonatomic) NSBundle *mediaControlsBundle; // @synthesize mediaControlsBundle=_mediaControlsBundle;
@property(retain, nonatomic) MediaControlsTransportButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MediaControlsTransportButton *middleButton; // @synthesize middleButton=_middleButton;
@property(nonatomic) __weak id <MediaControlsRatingActionSheet> ratingActionSheetDelegate; // @synthesize ratingActionSheetDelegate=_ratingActionSheetDelegate;
@property(retain, nonatomic) MediaControlsTransportButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long mediaControlsPlayerState; // @synthesize mediaControlsPlayerState=_mediaControlsPlayerState;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateButtonBlendMode:(id)arg1;
- (void)_updateButtonTint:(id)arg1;
- (void)_updateButtonImage:(id)arg1 button:(id)arg2;
- (void)buttonHoldReleased:(id)arg1;
- (void)buttonHoldBegan:(id)arg1;
- (void)touchUpInsideRightButton:(id)arg1;
- (void)touchUpInsideMiddleButton:(id)arg1;
- (void)touchUpInsideLeftButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

