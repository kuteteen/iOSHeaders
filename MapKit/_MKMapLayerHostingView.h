//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class VKMapView;

__attribute__((visibility("hidden")))
@interface _MKMapLayerHostingView : UIView
{
    VKMapView *_mapView;
}

+ (Class)layerClass;
@property(retain, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

