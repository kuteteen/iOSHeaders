//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class MKMapView, UIColor, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface MKLabelMarkerView : MKAnnotationView
{
    UIView *_anchorDotView;
    _Bool _needsToResolveBalloonAttributes;
    long long _balloonCalloutStyle;
    _Bool _balloonCalloutShouldOriginateFromSmallSize;
    UIColor *_balloonFillColor;
    UIColor *_balloonStrokeColor;
    UIImage *_balloonImage;
    UIView *_balloonContentView;
    double _smallBalloonScaleFactor;
    MKMapView *_mapView;
}

+ (_Bool)_followsTerrain;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didHideBalloonCalloutView:(id)arg1;
- (void)_addBalloonCalloutView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)_useBalloonCallouts;
- (_Bool)_shouldShowCallout;
- (void)dealloc;
- (void)setAnnotation:(id)arg1;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (_Bool)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
- (long long)_balloonCalloutStyle;
- (void)_resolveBalloonAttributesIfNecessary;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
