//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

#import <MapKit/MKDynamicTransitUIContainer-Protocol.h>
#import <MapKit/MKTransitDeparturesCellDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>
#import <MapKit/_MKTransitConnectionCellDelegate-Protocol.h>

@class MKMapItem, MKTransitItemIncidentsController, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MKTransitDepaturesViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesViewController : _MKTableViewController <_MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKDynamicTransitUIContainer, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    NSMutableDictionary *_sectionControllers;
    NSMutableSet *_pagedSectionIdentifiers;
    NSMapTable *_cachedSectionHeaders;
    _Bool _fetchingTransitInfo;
    _Bool _lastInfoRefreshFailed;
    NSString *_infoRefreshErrorDescription;
    NSMutableArray *_sections;
    NSMutableDictionary *_cachedSequencesForSection;
    NSMapTable *_cachedDirectionsForSystem;
    NSMapTable *_cachedSystemHasInactiveLines;
    NSMutableDictionary *_cachedMaxImageWidths;
    NSMutableDictionary *_cachedColumnCenteringWidths;
    struct CGRect _lastMaxWidthBounds;
    MKTransitItemIncidentsController *_incidentsController;
    NSMutableArray *_shownIncidentTitles;
    NSMutableSet *_hiddenSections;
    _Bool _isTransitioningSize;
    struct CGSize _newSize;
    _Bool _animatingRowInsertion;
    _Bool _showDisambiguation;
    _Bool _allowsTransitLineSelection;
    _Bool _isInSiri;
    MKMapItem *_mapItem;
    NSDate *_departureCutoffDate;
    NSDate *_lastCutoffDateWithValidSchedule;
    id <MKTransitDepaturesViewControllerDelegate> _delegate;
    long long _lastFailureDiagnosis;
}

@property(nonatomic) long long lastFailureDiagnosis; // @synthesize lastFailureDiagnosis=_lastFailureDiagnosis;
@property(nonatomic) _Bool isInSiri; // @synthesize isInSiri=_isInSiri;
@property(nonatomic) __weak id <MKTransitDepaturesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *lastCutoffDateWithValidSchedule; // @synthesize lastCutoffDateWithValidSchedule=_lastCutoffDateWithValidSchedule;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) _Bool allowsTransitLineSelection; // @synthesize allowsTransitLineSelection=_allowsTransitLineSelection;
@property(nonatomic) _Bool showDisambiguation; // @synthesize showDisambiguation=_showDisambiguation;
- (void).cxx_destruct;
- (long long)_departureSequenceFrequencyTypeForSection:(long long)arg1;
- (long long)_departureSequenceFrequencyTypeForAllDeparturesSections;
- (int)_transitCategoryForSequence:(id)arg1;
- (int)transitCategoryForFrequencyType:(long long)arg1;
- (int)_transitCategoryForSection:(long long)arg1;
- (int)currentTransitCategory;
- (void)recordIncidentShown:(id)arg1 system:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (id)_indexPathWithHeader:(id)arg1;
- (id)_indexPathWithoutHeader:(id)arg1;
- (id)_incidentCellForRow:(long long)arg1;
- (id)_connectionCellForRow:(long long)arg1;
- (id)_messageCellForSection:(long long)arg1;
- (void)_configureLeadingForDeparturesCell:(id)arg1 width:(double)arg2 compressed:(_Bool)arg3;
- (void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_operatingHoursDescriptionForSequence:(id)arg1;
- (id)_startEndDatesForSequence:(id)arg1 date:(id)arg2;
- (void)_localeDidChange;
- (double)_maxImageWidthForSection:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (double)_maxImageWidthForSection:(long long)arg1;
- (double)_columnCenteringImageWidthForSection:(long long)arg1;
- (_Bool)_isImageCandidateForColumnCentering:(id)arg1 source:(id)arg2;
- (id)_imageForLine:(id)arg1 inSection:(long long)arg2;
- (id)_imageForLine:(id)arg1 size:(long long)arg2;
- (long long)_lineImageSizeForSection:(long long)arg1;
- (_Bool)_isCompressed;
- (_Bool)_isCompressedWithTraits:(id)arg1;
- (id)_imageWithArtworkDataSource:(id)arg1;
- (id)_smallerImageWithArtworkDataSource:(id)arg1;
- (id)_viewForFooterInSection:(long long)arg1;
- (id)_viewForHeaderInSection:(long long)arg1;
- (void)incidentButtonSelectedInDeparturesCell:(id)arg1;
- (void)_incidentDetailsButtonSelected;
- (void)infoButtonSelectedInConnectionCell:(id)arg1;
- (id)_pagingPromptForSection:(long long)arg1;
- (_Bool)_sectionHasFooter:(long long)arg1;
- (_Bool)_sectionHasHeader:(long long)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (id)_controllerForSection:(long long)arg1;
- (id)_departuresControllerForSection:(long long)arg1;
- (id)_inactiveLinesControllerForSection:(long long)arg1;
- (id)_directionForSection:(long long)arg1;
- (id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out _Bool *)arg2;
- (id)_departureSequencesForSection:(long long)arg1;
- (id)_systemForSection:(long long)arg1;
- (_Bool)_isLastSectionForSystem:(long long)arg1;
- (id)_systemForSection:(long long)arg1 directionIndex:(out long long *)arg2;
- (void)_rebuildSections;
- (long long)_sectionsCount;
- (id)_inactiveLinesForSystem:(id)arg1;
- (_Bool)_systemHasInactiveLines:(id)arg1;
- (long long)_numberOfDeparturesSectionsForSystem:(id)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1 outIsNewLine:(_Bool *)arg2 outNextLineIsSame:(_Bool *)arg3;
- (_Bool)_systemHasIncidents:(id)arg1;
- (id)_dominantIncidentForSequence:(id)arg1;
- (id)_blockedIncidentEntities;
- (id)_incidentsFilteredToOnePerLine:(_Bool)arg1;
- (id)_departureCutoffDateForSequence:(id)arg1;
- (id)_departureCutoffDateForLine:(id)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1;
- (_Bool)_hasIncidentsSection;
- (_Bool)_hasPlaceCardMessageSection;
- (_Bool)_hasConnectionsSection;
- (long long)_sectionTypeForSection:(long long)arg1;
- (void)_refreshCells;
- (_Bool)_isStuckWithExpiredInfo;
- (_Bool)_isInfoExpired;
- (void)_transitInfoUpdated;
- (void)_refreshTransitInfoIfNeededForIncidents:(_Bool)arg1;
- (void)_refreshTransitInfoIfNeeded;
- (_Bool)_shouldPageSection:(long long)arg1;
- (void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2;
- (void)_sectionHeaderButtonPressed:(id)arg1;
- (long long)_sectionForIdentifier:(id)arg1;
- (id)_identifierForSection:(long long)arg1;
- (id)_identifierForSystem:(id)arg1;
- (id)_identifierForSequence:(id)arg1;
@property(retain, nonatomic) NSDate *departureCutoffDate; // @synthesize departureCutoffDate=_departureCutoffDate;
- (void)_updateDepartureCutoffDate;
- (double)_heightForFooterInSection:(long long)arg1;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

