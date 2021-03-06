//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@interface PTXParallaxSettings : _UISettings
{
    _Bool _slideEnabled;
    _Bool _tiltEnabled;
    _Bool _increaseEnabled;
    _Bool _alphaEnabled;
    long long _slideDirectionX;
    long long _slideDirectionY;
    double _slidePixelsX;
    double _slidePixelsY;
    long long _tiltDirectionX;
    long long _tiltDirectionY;
    double _tiltDegreesX;
    double _tiltDegreesY;
    long long _distanceFromScreen;
    double _perspectiveTransform;
    double _slideIncreaseX;
    double _slideIncreaseY;
    double _tiltIncreaseX;
    double _tiltIncreaseY;
    double _minAlpha;
    double _maxAlpha;
}

+ (id)settingsControllerModule;
@property double maxAlpha; // @synthesize maxAlpha=_maxAlpha;
@property double minAlpha; // @synthesize minAlpha=_minAlpha;
@property _Bool alphaEnabled; // @synthesize alphaEnabled=_alphaEnabled;
@property double tiltIncreaseY; // @synthesize tiltIncreaseY=_tiltIncreaseY;
@property double tiltIncreaseX; // @synthesize tiltIncreaseX=_tiltIncreaseX;
@property double slideIncreaseY; // @synthesize slideIncreaseY=_slideIncreaseY;
@property double slideIncreaseX; // @synthesize slideIncreaseX=_slideIncreaseX;
@property _Bool increaseEnabled; // @synthesize increaseEnabled=_increaseEnabled;
@property double perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property long long distanceFromScreen; // @synthesize distanceFromScreen=_distanceFromScreen;
@property double tiltDegreesY; // @synthesize tiltDegreesY=_tiltDegreesY;
@property double tiltDegreesX; // @synthesize tiltDegreesX=_tiltDegreesX;
@property long long tiltDirectionY; // @synthesize tiltDirectionY=_tiltDirectionY;
@property long long tiltDirectionX; // @synthesize tiltDirectionX=_tiltDirectionX;
@property _Bool tiltEnabled; // @synthesize tiltEnabled=_tiltEnabled;
@property double slidePixelsY; // @synthesize slidePixelsY=_slidePixelsY;
@property double slidePixelsX; // @synthesize slidePixelsX=_slidePixelsX;
@property long long slideDirectionY; // @synthesize slideDirectionY=_slideDirectionY;
@property long long slideDirectionX; // @synthesize slideDirectionX=_slideDirectionX;
@property _Bool slideEnabled; // @synthesize slideEnabled=_slideEnabled;
- (void)setDefaultValues;

@end

