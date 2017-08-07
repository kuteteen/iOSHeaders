//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUNavigationController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicSearchBarDelegate-Protocol.h>
#import <FuseUI/MusicSearchViewControllerMediaPickerDelegate-Protocol.h>

@class MusicClientContext, NSArray, NSMutableArray, NSString, SKUIClientContext, UIBarButtonItem;
@protocol MusicMediaPickerDelegate;

@interface MusicMediaPickerNavigationController : MPUNavigationController <MusicSearchBarDelegate, MusicSearchViewControllerMediaPickerDelegate, MusicClientContextConsuming>
{
    unsigned long long _pickedEntitiesCount;
    NSMutableArray *_pickedEntities;
    UIBarButtonItem *_rightBarButtonItem;
    NSMutableArray *_storeItemIDs;
    _Bool _allowsMultipleSelection;
    _Bool _includeStoreItemsInSearch;
    _Bool _allowsCollectionsInSelectedEntities;
    _Bool _picksSingleCollectionEntity;
    _Bool _showsOnlyStoreItems;
    unsigned int _watchCompatibilityVersion;
    MusicClientContext *_clientContext;
    id <MusicMediaPickerDelegate> _mediaPickerDelegate;
    NSString *_prompt;
    long long _state;
    NSMutableArray *_selectedEntitiesForActiveSession;
}

+ (id)selectedItemsForActiveSession;
+ (id)navigationController;
@property(retain, nonatomic) NSMutableArray *selectedEntitiesForActiveSession; // @synthesize selectedEntitiesForActiveSession=_selectedEntitiesForActiveSession;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool showsOnlyStoreItems; // @synthesize showsOnlyStoreItems=_showsOnlyStoreItems;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(readonly, nonatomic) NSArray *pickedEntities; // @synthesize pickedEntities=_pickedEntities;
@property(nonatomic) __weak id <MusicMediaPickerDelegate> mediaPickerDelegate; // @synthesize mediaPickerDelegate=_mediaPickerDelegate;
@property(nonatomic) unsigned int watchCompatibilityVersion; // @synthesize watchCompatibilityVersion=_watchCompatibilityVersion;
@property(nonatomic) _Bool picksSingleCollectionEntity; // @synthesize picksSingleCollectionEntity=_picksSingleCollectionEntity;
@property(nonatomic) _Bool allowsCollectionsInSelectedEntities; // @synthesize allowsCollectionsInSelectedEntities=_allowsCollectionsInSelectedEntities;
@property(nonatomic) _Bool includeStoreItemsInSearch; // @synthesize includeStoreItemsInSearch=_includeStoreItemsInSearch;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)_updateRightBarButtonItem;
- (void)_updatePrompt;
- (void)_stylizeSearchBar:(id)arg1;
- (void)_selectItem:(id)arg1;
- (id)_searchBarInViewController:(id)arg1;
- (void)_reloadDataInViewController:(id)arg1;
- (_Bool)_isMetadataAddable:(id)arg1;
- (void)_insertSearchBarIntoTableView:(id)arg1;
- (void)_configureNavigationBar;
- (id)_allPlayableChildrenMetadataObjectsForMetadata:(id)arg1;
- (void)selectAllMediaItemsInCollection:(id)arg1 fromViewController:(id)arg2;
- (void)selectMediaItem:(id)arg1 fromViewController:(id)arg2;
- (void)reset;
- (void)finish;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)musicSearchViewController:(id)arg1 didSelectStoreItemWithID:(id)arg2;
- (void)musicSearchViewControllerDidFinish:(id)arg1 withSearchBar:(id)arg2;
@property(readonly, nonatomic) _Bool omitsGeniusPlaylists;
@property(readonly, nonatomic) UIBarButtonItem *rightBarButtonItem;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

