//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, MKDirectionsRequest;
@protocol MKLocationManagerOperation, OS_dispatch_group;

@interface MKDirections : NSObject
{
    MKDirectionsRequest *_request;
    GEODirectionsRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    id <MKLocationManagerOperation> _locationOperation;
    NSObject<OS_dispatch_group> *_waypointsDispatchGroup;
}

- (void).cxx_destruct;
- (void)calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_calculateETAWithTraits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)calculateDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(_Bool)arg1 traits:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_establishCurrentLocationAndThen:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCalculating) _Bool calculating;
- (void)cancel;
- (void)dealloc;
- (void)_cleanupLocationOperation;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end

