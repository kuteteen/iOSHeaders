//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, MKMapView;

@interface UIView (MapKitExtras)
@property(readonly, nonatomic) struct CGRect _mapkit_doubleFrame;
- (unsigned long long)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
@property(readonly, retain, nonatomic) MKMapView *_mapKit_mapView;
@property(readonly, retain, nonatomic) CALayer *_mapkit_currentLayer;
@end

