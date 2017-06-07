//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKShape.h>

#import <MapKit/MKAnnotationPrivate-Protocol.h>
#import <MapKit/MKAnnotationRepresentation-Protocol.h>
#import <MapKit/MKCustomFeatureAnnotation-Protocol.h>

@class NSString, VKCustomFeature;

@interface MKPointAnnotation : MKShape <MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate>
{
    struct CLLocationCoordinate2D _coordinate;
    long long _representation;
    VKCustomFeature *_customFeature;
}

@property(nonatomic) long long representation; // @synthesize representation=_representation;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (_Bool)_isPendingSelectionAnimated;
- (void)_invalidateCachedCoordinate;
- (void)_setHiddenForOffscreen:(_Bool)arg1;
- (_Bool)isPersistent;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)annotation;
- (id)viewRepresentation;
- (_Bool)shouldRepresentSelf;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
- (void)setShowsBalloonCallout:(_Bool)arg1;
- (id)feature;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

