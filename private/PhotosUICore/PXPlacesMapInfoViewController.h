//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PXPlacesMapView;

@interface PXPlacesMapInfoViewController : UIViewController
{
    PXPlacesMapView *_mapView;
}

@property __weak PXPlacesMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (long long)segmentIndexFor:(unsigned long long)arg1;
- (void)mapTypeChanged:(id)arg1;
- (void)tapped3dButton:(id)arg1;
- (void)tappedDimView:(id)arg1;
- (void)tappedDone:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMapView:(id)arg1;

@end

