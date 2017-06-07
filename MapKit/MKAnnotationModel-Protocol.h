//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@protocol MKAnnotationRepresentation;

@protocol MKAnnotationModel <NSObject>
- (void)moveAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 fromCoordinate:(struct CLLocationCoordinate2D)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)deselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;
- (void)removeAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1;
- (void)addAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 allowAnimation:(_Bool)arg2;
@end

