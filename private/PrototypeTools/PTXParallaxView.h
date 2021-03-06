//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PTXParallaxObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSString, PTXMotionWindow, PTXParallaxController, PTXParallaxSettings;

@interface PTXParallaxView : UIView <_UISettingsKeyObserver, PTXParallaxObserver>
{
    PTXParallaxController *_parallaxController;
    PTXParallaxSettings *_settings;
    double _viewAlpha;
    PTXMotionWindow *_slideWindowX;
    PTXMotionWindow *_slideWindowY;
    PTXMotionWindow *_tiltWindowX;
    PTXMotionWindow *_tiltWindowY;
    _Bool _stopped;
    _Bool _resizesView;
    UIView *_view;
}

@property(nonatomic) _Bool resizesView; // @synthesize resizesView=_resizesView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_updateSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CATransform3D)_slideTransform:(struct CGPoint)arg1;
- (struct CATransform3D)_tiltTransform:(struct CGPoint)arg1;
- (void)_clearOffset;
- (void)clearParallaxOffset;
- (void)handleParallaxOffset:(struct CGPoint)arg1 lockStatus:(long long)arg2 strength:(double)arg3;
- (void)setViewAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithView:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

