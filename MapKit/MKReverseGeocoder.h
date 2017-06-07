//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKPlacemark, MKReverseGeocoderInternal;
@protocol MKReverseGeocoderDelegate;

@interface MKReverseGeocoder : NSObject
{
    MKReverseGeocoderInternal *_internal;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (void)_notifyResult:(id)arg1;
- (void)_notifyNoResults;
- (void)_notifyError:(id)arg1;
@property(readonly, nonatomic, getter=isQuerying) _Bool querying;
@property(readonly, nonatomic) MKPlacemark *placemark;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) __weak id <MKReverseGeocoderDelegate> delegate;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

