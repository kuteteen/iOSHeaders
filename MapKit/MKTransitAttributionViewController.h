//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

#import <MapKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, NSString;
@protocol GEOTransitLineItem, MKTransitAttributionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKTransitAttributionViewController : _MKTableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    _Bool _isAttributionURLAvailable;
    MKMapItem *_mapItem;
    id <GEOTransitLineItem> _lineItem;
    id <MKTransitAttributionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MKTransitAttributionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)_presentTransitAttributionDetails;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)_attributionCell;
- (_Bool)_hasAttribution;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (void)_transitInfoUpdated;
- (void)viewDidLoad;
- (void)dealloc;
- (id)_attribution;
- (void)_commonInit;
- (id)initWithTransitLineItem:(id)arg1;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

