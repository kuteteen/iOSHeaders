//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEONavdPeer.h>

#import <GeoServices/GEONavigationServerRequestStateXPCInterface-Protocol.h>

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>
{
    GEONavigationServer *_delegate;
}

@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)requestUpdates;
- (void)requestRideSelections;
- (void)requestStepIndex;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestTransitSummary;
- (void)requestRouteSummary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
