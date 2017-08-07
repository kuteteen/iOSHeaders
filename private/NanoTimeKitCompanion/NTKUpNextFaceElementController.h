//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKUpNextElementCoordinatorObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NTKUpNextElementCoordinator;
@protocol NTKUpNextFaceElementControllerDelegate;

@interface NTKUpNextFaceElementController : NSObject <NTKUpNextElementCoordinatorObserver>
{
    NTKUpNextElementCoordinator *_coordinator;
    struct {
        unsigned int implementsPerformBatchUpdate:1;
        unsigned int implementsReloadElement:1;
        unsigned int implementsRemoveElement:1;
        unsigned int implementsInsertElement:1;
        unsigned int implementsMoveElement:1;
        unsigned int implementsIndexPathVisibility:1;
    } _delegateCallbacks;
    NSArray *_hiddenIndices;
    NSMutableSet *_hiddenBundleIdentifiers;
    NSMutableDictionary *_becameVisibleDates;
    NSMutableArray *_pendingOperations;
    _Bool _isMonitoringElements;
    _Bool _isBacklightOn;
    _Bool _isShowingContentElements;
    _Bool _performingBatch;
    _Bool _postedScrollEvent;
    _Bool _isDeviceLocked;
    _Bool _showsIdealizedContent;
    _Bool _showsCanonicalContent;
    id <NTKUpNextFaceElementControllerDelegate> _delegate;
    unsigned long long _state;
}

+ (id)applicationPrewarmIdentifiers;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) _Bool showsIdealizedContent; // @synthesize showsIdealizedContent=_showsIdealizedContent;
@property(nonatomic) __weak id <NTKUpNextFaceElementControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateMonitoringVisibilityForAllElement;
- (void)_endMonitoringVisibilityForElement:(id)arg1;
- (void)_beginMonitoringVisibilityForElement:(id)arg1;
- (void)elementContentAtIndexPathReceivedFeedback:(id)arg1 isPositive:(_Bool)arg2;
- (void)elementContentAtIndexPathWasTapped:(id)arg1;
- (void)scrollViewDidScroll;
- (void)_updateNoContentState;
- (_Bool)elementCoordinator:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
- (void)elementCoordinator:(id)arg1 didMoveElement:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)elementCoordinator:(id)arg1 didInsertElement:(id)arg2 atIndexPath:(id)arg3;
- (void)elementCoordinator:(id)arg1 didRemoveElement:(id)arg2 atIndexPath:(id)arg3;
- (void)elementCoordinator:(id)arg1 didReloadElement:(id)arg2 atIndexPath:(id)arg3;
- (void)elementCoordinator:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performOperations:(id)arg1 toSection:(unsigned long long)arg2;
- (void)_performBatchUpdateUpdatingNoContent:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performOrEnqueueOperation:(id)arg1;
- (void)_setElement:(id)arg1 atIndexPath:(id)arg2 hidden:(_Bool)arg3;
- (void)_enumerateCoordinatorElementWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)complicationDescriptors;
- (void)elementContentAtIndexPathDidBecomeHidden:(id)arg1;
- (void)elementContentAtIndexPathWillBecomeVisible:(id)arg1;
- (id)_indexPathForElement:(id)arg1;
- (unsigned long long)numberOfElementsInSection:(unsigned long long)arg1;
- (id)indexPathForElementIdentifier:(id)arg1;
- (id)elementIdentifierAtIndexPath:(id)arg1;
- (id)elementBundleIdentifierAtIndexPath:(id)arg1;
- (id)elementActionAtIndexPath:(id)arg1;
- (id)_contentForElement:(id)arg1;
- (id)elementContentAtIndexPath:(id)arg1;
- (id)_elementAtIndexPath:(id)arg1;
- (id)_coordinatorIndexPathForFaceIndexPath:(id)arg1;
- (id)_faceIndexPathForCoordinatorIndexPath:(id)arg1;
- (_Bool)_isElementHidden:(id)arg1;
- (void)_setDataSource:(id)arg1 enabled:(_Bool)arg2;
@property(readonly, nonatomic) NSSet *disabledDataSources;
- (_Bool)isDataSourceWithBundleIdentifierEnabled:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forDataSourceWithBundleIdentifier:(id)arg2;
- (void)setShowsCanonicalContent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShowsIdealizedContent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_lockStateChanged;
- (void)_loadNewElementCoordinatorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadNewElementCoordinator;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

