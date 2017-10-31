//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKMapViewDelegate.h"

@class HKLocationReadings, MKMapView, NSString, UIButton;

@interface HKRouteView : UIView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
    UIButton *_toggleMapTypeButton;
}

@property(retain, nonatomic) UIButton *toggleMapTypeButton; // @synthesize toggleMapTypeButton=_toggleMapTypeButton;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)layoutSubviews;
- (void)setLocationReadings:(id)arg1;
- (void)_toggleMapType;
- (id)routeImageForSharing;
- (void)_setRouteMapType:(unsigned long long)arg1;
- (void)_clearMapViewIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

