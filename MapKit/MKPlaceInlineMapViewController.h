//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MKMapItem, UIImage, _MKPlaceInlineMapContentView, _MKPlaceViewController;

__attribute__((visibility("hidden")))
@interface MKPlaceInlineMapViewController : UIViewController
{
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    _Bool _bottomHairlineHidden;
    MKMapItem *_mapItem;
    _MKPlaceViewController *_owner;
}

@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden; // @synthesize bottomHairlineHidden=_bottomHairlineHidden;
- (void).cxx_destruct;
- (void)_launchMaps;
- (void)_handleTapOnMap;
- (void)_updateSnapshotImage:(id)arg1 mapItem:(id)arg2;
- (void)_addAnnotationToSnapshot:(id)arg1 mapItem:(id)arg2;
- (void)_updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)_updateMap;
@property(readonly, nonatomic) UIImage *snapshot;
- (void)viewDidLoad;
- (void)loadView;

@end

