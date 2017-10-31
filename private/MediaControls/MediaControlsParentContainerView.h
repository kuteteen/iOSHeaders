//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MediaControlsContainerView;

@interface MediaControlsParentContainerView : UIView
{
    long long _style;
    long long _selectedMode;
    MediaControlsContainerView *_mediaControlsContainerView;
    UIView *_routingView;
    UIView *_mediaControlsRoutingPickerView;
    long long _routingViewControllerAnimationCount;
}

@property(nonatomic) long long routingViewControllerAnimationCount; // @synthesize routingViewControllerAnimationCount=_routingViewControllerAnimationCount;
@property(retain, nonatomic) UIView *mediaControlsRoutingPickerView; // @synthesize mediaControlsRoutingPickerView=_mediaControlsRoutingPickerView;
@property(retain, nonatomic) UIView *routingView; // @synthesize routingView=_routingView;
@property(retain, nonatomic) MediaControlsContainerView *mediaControlsContainerView; // @synthesize mediaControlsContainerView=_mediaControlsContainerView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setInitialFrameForRoutingView:(id)arg1;
- (void)_toggleRoutingPickerAnimated:(_Bool)arg1;
- (void)_updateRoutingPickerVisibility;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

