//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VKTimer;

__attribute__((visibility("hidden")))
@interface VKLabelManagerCollisionTimer : NSObject
{
    _Bool _isTimerStarted;
    VKTimer *_timer;
    // Error parsing type: ^{LabelManager=^^?{weak_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{_retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}@fQCqCCBBBBBBBBBBBBBBBBBBBBBBBBB{atomic<bool>=AB}BBBBBBBBBBBBBB{Box<unsigned int, 2>={Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}}{Box<unsigned int, 2>={Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}}BB^{LabelLayoutContext}{LabelLayoutContext=BBBBBCf{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}ddddddd{?={Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}fff}ffff{Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}{LabelAngle=C}f{Matrix<double, 4, 4>=[16d]}{Matrix<double, 4, 4>=[16d]}{Matrix<float, 2, 1>=[2f]}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}II{shared_ptr<const md::VenueLogicContext>=^{VenueLogicContext}^{__shared_weak_count}}}{LabelLayoutContext=BBBBBCf{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}ddddddd{?={Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}fff}ffff{Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}{LabelAngle=C}f{Matrix<double, 4, 4>=[16d]}{Matrix<double, 4, 4>=[16d]}{Matrix<float, 2, 1>=[2f]}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}II{shared_ptr<const md::VenueLogicContext>=^{VenueLogicContext}^{__shared_weak_count}}}{LabelNavLayoutContext={Box<double, 2>={Matrix<double, 2, 1>=[2d]}{Matrix<double, 2, 1>=[2d]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Matrix<double, 3, 1>=[3d]}{Matrix<float, 2, 1>=[2f]}d}[5d]di{unique_ptr<md::LabelExternalObjectsModerator, std::__1::default_delete<md::LabelExternalObjectsModerator> >={__compressed_pair<md::LabelExternalObjectsModerator *, std::__1::default_delete<md::LabelExternalObjectsModerator> >=^{LabelExternalObjectsModerator}}}{unique_ptr<md::LabelTransitSupport, std::__1::default_delete<md::LabelTransitSupport> >={__compressed_pair<md::LabelTransitSupport *, std::__1::default_delete<md::LabelTransitSupport> >=^{LabelTransitSupport}}}{unique_ptr<md::LabelCustomFeatureSupport, std::__1::default_delete<md::LabelCustomFeatureSupport> >={__compressed_pair<md::LabelCustomFeatureSupport *, std::__1::default_delete<md::LabelCustomFeatureSupport> >=^{LabelCustomFeatureSupport}}}{unique_ptr<md::LabelNavSupport, std::__1::default_delete<md::LabelNavSupport> >={__compressed_pair<md::LabelNavSupport *, std::__1::default_delete<md::LabelNavSupport> >=^{LabelNavSupport}}}{unique_ptr<md::LabelNavTrafficSupport, std::__1::default_delete<md::LabelNavTrafficSupport> >={__compressed_pair<md::LabelNavTrafficSupport *, std::__1::default_delete<md::LabelNavTrafficSupport> >=^{LabelNavTrafficSupport}}}{unique_ptr<md::LabelImageLoader, std::__1::default_delete<md::LabelImageLoader> >={__compressed_pair<md::LabelImageLoader *, std::__1::default_delete<md::LabelImageLoader> >=^{LabelImageLoader}}}{unique_ptr<md::LabelTextDataLoader, std::__1::default_delete<md::LabelTextDataLoader> >={__compressed_pair<md::LabelTextDataLoader *, std::__1::default_delete<md::LabelTextDataLoader> >=^{LabelTextDataLoader}}}{unique_ptr<md::LabelGlyphImageLoader, std::__1::default_delete<md::LabelGlyphImageLoader> >={__compressed_pair<md::LabelGlyphImageLoader *, std::__1::default_delete<md::LabelGlyphImageLoader> >=^{LabelGlyphImageLoader}}}{vector<std::__1::shared_ptr<md::LabelMapTile>, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >=^{shared_ptr<md::LabelMapTile>}^{shared_ptr<md::LabelMapTile>}{__compressed_pair<std::__1::shared_ptr<md::LabelMapTile> *, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >=^{shared_ptr<md::LabelMapTile>}}}{set<std::__1::shared_ptr<md::LabelMapTile>, std::__1::less<std::__1::shared_ptr<md::LabelMapTile> >, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >={__tree<std::__1::shared_ptr<md::LabelMapTile>, std::__1::less<std::__1::shared_ptr<md::LabelMapTile> >, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::shared_ptr<md::LabelMapTile>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<std::__1::shared_ptr<md::LabelMapTile> > >=Q}}}{unique_ptr<md::LabelFeaturePool, std::__1::default_delete<md::LabelFeaturePool> >={__compressed_pair<md::LabelFeaturePool *, std::__1::default_delete<md::LabelFeaturePool> >=^{LabelFeaturePool}}}{unique_ptr<md::LabelFeatureStyler, std::__1::default_delete<md::LabelFeatureStyler> >={__compressed_pair<md::LabelFeatureStyler *, std::__1::default_delete<md::LabelFeatureStyler> >=^{LabelFeatureStyler}}}{unique_ptr<md::LabelPool, std::__1::default_delete<md::LabelPool> >={__compressed_pair<md::LabelPool *, std::__1::default_delete<md::LabelPool> >=^{LabelPool}}}{vector<std::__1::shared_ptr<md::Label>, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}^{shared_ptr<md::Label>}{__compressed_pair<std::__1::shared_ptr<md::Label> *, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}}}{vector<std::__1::shared_ptr<md::Label>, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}^{shared_ptr<md::Label>}{__compressed_pair<std::__1::shared_ptr<md::Label> *, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}}}{vector<md::Label *, std::__1::allocator<md::Label *> >=^^{Label}^^{Label}{__compressed_pair<md::Label **, std::__1::allocator<md::Label *> >=^^{Label}}}{unique_ptr<md::FontAtlas, std::__1::default_delete<md::FontAtlas> >={__compressed_pair<md::FontAtlas *, std::__1::default_delete<md::FontAtlas> >=^{FontAtlas}}}{?={unique_ptr<md::FontGlyphCache, std::__1::default_delete<md::FontGlyphCache> >={__compressed_pair<md::FontGlyphCache *, std::__1::default_delete<md::FontGlyphCache> >=^{FontGlyphCache}}}}{unique_ptr<md::LabelMesh, std::__1::default_delete<md::LabelMesh> >={__compressed_pair<md::LabelMesh *, std::__1::default_delete<md::LabelMesh> >=^{LabelMesh}}}{unique_ptr<md::LabelStyleCache, std::__1::default_delete<md::LabelStyleCache> >={__compressed_pair<md::LabelStyleCache *, std::__1::default_delete<md::LabelStyleCache> >=^{LabelStyleCache}}}{shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >=^{StylesheetManager<gss::ScenePropertyID>}^{__shared_weak_count}}{unique_ptr<md::LabelCollider, std::__1::default_delete<md::LabelCollider> >={__compressed_pair<md::LabelCollider *, std::__1::default_delete<md::LabelCollider> >=^{LabelCollider}}}{unique_ptr<md::OcclusionManager, std::__1::default_delete<md::OcclusionManager> >={__compressed_pair<md::OcclusionManager *, std::__1::default_delete<md::OcclusionManager> >=^{OcclusionManager}}}QQ{shared_ptr<md::LabelTrafficTilePool>=^{LabelTrafficTilePool}^{__shared_weak_count}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{vector<std::__1::shared_ptr<md::LabelManagerCommand>, std::__1::allocator<std::__1::shared_ptr<md::LabelManagerCommand> > >=^{shared_ptr<md::LabelManagerCommand>}^{shared_ptr<md::LabelManagerCommand>}{__compressed_pair<std::__1::shared_ptr<md::LabelManagerCommand> *, std::__1::allocator<std::__1::shared_ptr<md::LabelManagerCommand> > >=^{shared_ptr<md::LabelManagerCommand>}}}IIIddQBIIIfI{array<bool, 12>=[12B]}fBB{shared_ptr<md::Label>=^{Label}^{__shared_weak_count}}{shared_ptr<md::LabelFeature>=^{LabelFeature}^{__shared_weak_count}}{LabelIdentifier=I}BqqfqCBBBBBBBBBBBBBB{atomic<bool>=AB}{atomic<bool>=AB}{atomic<bool>=AB}{atomic<bool>=AB}ii{shared_ptr<md::LabelMarker>=^{LabelMarker}^{__shared_weak_count}}{SelectedLabelState={Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}BC}{_retain_ptr<VKLabelManagerCollisionTimer *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{_retain_ptr<VKClientLocalizedStrings *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{?={shared_ptr<gss::StylesheetManager<gss::PropertyID> >=^{StylesheetManager<gss::PropertyID>}^{__shared_weak_count}}{shared_ptr<md::LabelMarker>=^{LabelMarker}^{__shared_weak_count}}BBB}Bf{vector<std::__1::shared_ptr<md::NavLabel>, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > >=^{shared_ptr<md::NavLabel>}^{shared_ptr<md::NavLabel>}{__compressed_pair<std::__1::shared_ptr<md::NavLabel> *, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > >=^{shared_ptr<md::NavLabel>}}}}, name: _manager
}

- (void)killTimer;
- (void)cancelTimer;
- (void)startTimer;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{LabelManager=^^?{weak_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{_retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}@fQCqCCBBBBBBBBBBBBBBBBBBBBBBBBB{atomic<bool>=AB}BBBBBBBBBBBBBB{Box<unsigned int, 2>={Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}}{Box<unsigned int, 2>={Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}}BB^{LabelLayoutContext}{LabelLayoutContext=BBBBBCf{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}ddddddd{?={Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}fff}ffff{Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}{LabelAngle=C}f{Matrix<double, 4, 4>=[16d]}{Matrix<double, 4, 4>=[16d]}{Matrix<float, 2, 1>=[2f]}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}II{shared_ptr<const md::VenueLogicContext>=^{VenueLogicContext}^{__shared_weak_count}}}{LabelLayoutContext=BBBBBCf{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}ddddddd{?={Matrix<double, 3, 1>=[3d]}{Matrix<double, 3, 1>=[3d]}fff}ffff{Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}{LabelAngle=C}f{Matrix<double, 4, 4>=[16d]}{Matrix<double, 4, 4>=[16d]}{Matrix<float, 2, 1>=[2f]}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}II{shared_ptr<const md::VenueLogicContext>=^{VenueLogicContext}^{__shared_weak_count}}}{LabelNavLayoutContext={Box<double, 2>={Matrix<double, 2, 1>=[2d]}{Matrix<double, 2, 1>=[2d]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}{Matrix<double, 3, 1>=[3d]}{Matrix<float, 2, 1>=[2f]}d}[5d]di{unique_ptr<md::LabelExternalObjectsModerator, std::__1::default_delete<md::LabelExternalObjectsModerator> >={__compressed_pair<md::LabelExternalObjectsModerator *, std::__1::default_delete<md::LabelExternalObjectsModerator> >=^{LabelExternalObjectsModerator}}}{unique_ptr<md::LabelTransitSupport, std::__1::default_delete<md::LabelTransitSupport> >={__compressed_pair<md::LabelTransitSupport *, std::__1::default_delete<md::LabelTransitSupport> >=^{LabelTransitSupport}}}{unique_ptr<md::LabelCustomFeatureSupport, std::__1::default_delete<md::LabelCustomFeatureSupport> >={__compressed_pair<md::LabelCustomFeatureSupport *, std::__1::default_delete<md::LabelCustomFeatureSupport> >=^{LabelCustomFeatureSupport}}}{unique_ptr<md::LabelNavSupport, std::__1::default_delete<md::LabelNavSupport> >={__compressed_pair<md::LabelNavSupport *, std::__1::default_delete<md::LabelNavSupport> >=^{LabelNavSupport}}}{unique_ptr<md::LabelNavTrafficSupport, std::__1::default_delete<md::LabelNavTrafficSupport> >={__compressed_pair<md::LabelNavTrafficSupport *, std::__1::default_delete<md::LabelNavTrafficSupport> >=^{LabelNavTrafficSupport}}}{unique_ptr<md::LabelImageLoader, std::__1::default_delete<md::LabelImageLoader> >={__compressed_pair<md::LabelImageLoader *, std::__1::default_delete<md::LabelImageLoader> >=^{LabelImageLoader}}}{unique_ptr<md::LabelTextDataLoader, std::__1::default_delete<md::LabelTextDataLoader> >={__compressed_pair<md::LabelTextDataLoader *, std::__1::default_delete<md::LabelTextDataLoader> >=^{LabelTextDataLoader}}}{unique_ptr<md::LabelGlyphImageLoader, std::__1::default_delete<md::LabelGlyphImageLoader> >={__compressed_pair<md::LabelGlyphImageLoader *, std::__1::default_delete<md::LabelGlyphImageLoader> >=^{LabelGlyphImageLoader}}}{vector<std::__1::shared_ptr<md::LabelMapTile>, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >=^{shared_ptr<md::LabelMapTile>}^{shared_ptr<md::LabelMapTile>}{__compressed_pair<std::__1::shared_ptr<md::LabelMapTile> *, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >=^{shared_ptr<md::LabelMapTile>}}}{set<std::__1::shared_ptr<md::LabelMapTile>, std::__1::less<std::__1::shared_ptr<md::LabelMapTile> >, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >={__tree<std::__1::shared_ptr<md::LabelMapTile>, std::__1::less<std::__1::shared_ptr<md::LabelMapTile> >, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::shared_ptr<md::LabelMapTile>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<std::__1::shared_ptr<md::LabelMapTile> > >=Q}}}{unique_ptr<md::LabelFeaturePool, std::__1::default_delete<md::LabelFeaturePool> >={__compressed_pair<md::LabelFeaturePool *, std::__1::default_delete<md::LabelFeaturePool> >=^{LabelFeaturePool}}}{unique_ptr<md::LabelFeatureStyler, std::__1::default_delete<md::LabelFeatureStyler> >={__compressed_pair<md::LabelFeatureStyler *, std::__1::default_delete<md::LabelFeatureStyler> >=^{LabelFeatureStyler}}}{unique_ptr<md::LabelPool, std::__1::default_delete<md::LabelPool> >={__compressed_pair<md::LabelPool *, std::__1::default_delete<md::LabelPool> >=^{LabelPool}}}{vector<std::__1::shared_ptr<md::Label>, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}^{shared_ptr<md::Label>}{__compressed_pair<std::__1::shared_ptr<md::Label> *, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}}}{vector<std::__1::shared_ptr<md::Label>, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}^{shared_ptr<md::Label>}{__compressed_pair<std::__1::shared_ptr<md::Label> *, std::__1::allocator<std::__1::shared_ptr<md::Label> > >=^{shared_ptr<md::Label>}}}{vector<md::Label *, std::__1::allocator<md::Label *> >=^^{Label}^^{Label}{__compressed_pair<md::Label **, std::__1::allocator<md::Label *> >=^^{Label}}}{unique_ptr<md::FontAtlas, std::__1::default_delete<md::FontAtlas> >={__compressed_pair<md::FontAtlas *, std::__1::default_delete<md::FontAtlas> >=^{FontAtlas}}}{?={unique_ptr<md::FontGlyphCache, std::__1::default_delete<md::FontGlyphCache> >={__compressed_pair<md::FontGlyphCache *, std::__1::default_delete<md::FontGlyphCache> >=^{FontGlyphCache}}}}{unique_ptr<md::LabelMesh, std::__1::default_delete<md::LabelMesh> >={__compressed_pair<md::LabelMesh *, std::__1::default_delete<md::LabelMesh> >=^{LabelMesh}}}{unique_ptr<md::LabelStyleCache, std::__1::default_delete<md::LabelStyleCache> >={__compressed_pair<md::LabelStyleCache *, std::__1::default_delete<md::LabelStyleCache> >=^{LabelStyleCache}}}{shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >=^{StylesheetManager<gss::ScenePropertyID>}^{__shared_weak_count}}{unique_ptr<md::LabelCollider, std::__1::default_delete<md::LabelCollider> >={__compressed_pair<md::LabelCollider *, std::__1::default_delete<md::LabelCollider> >=^{LabelCollider}}}{unique_ptr<md::OcclusionManager, std::__1::default_delete<md::OcclusionManager> >={__compressed_pair<md::OcclusionManager *, std::__1::default_delete<md::OcclusionManager> >=^{OcclusionManager}}}QQ{shared_ptr<md::LabelTrafficTilePool>=^{LabelTrafficTilePool}^{__shared_weak_count}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{vector<std::__1::shared_ptr<md::LabelManagerCommand>, std::__1::allocator<std::__1::shared_ptr<md::LabelManagerCommand> > >=^{shared_ptr<md::LabelManagerCommand>}^{shared_ptr<md::LabelManagerCommand>}{__compressed_pair<std::__1::shared_ptr<md::LabelManagerCommand> *, std::__1::allocator<std::__1::shared_ptr<md::LabelManagerCommand> > >=^{shared_ptr<md::LabelManagerCommand>}}}IIIddQBIIIfI{array<bool, 12>=[12B]}fBB{shared_ptr<md::Label>=^{Label}^{__shared_weak_count}}{shared_ptr<md::LabelFeature>=^{LabelFeature}^{__shared_weak_count}}{LabelIdentifier=I}BqqfqCBBBBBBBBBBBBBB{atomic<bool>=AB}{atomic<bool>=AB}{atomic<bool>=AB}{atomic<bool>=AB}ii{shared_ptr<md::LabelMarker>=^{LabelMarker}^{__shared_weak_count}}{SelectedLabelState={Box<float, 2>={Matrix<float, 2, 1>=[2f]}{Matrix<float, 2, 1>=[2f]}}BC}{_retain_ptr<VKLabelManagerCollisionTimer *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{_retain_ptr<VKClientLocalizedStrings *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{?={shared_ptr<gss::StylesheetManager<gss::PropertyID> >=^{StylesheetManager<gss::PropertyID>}^{__shared_weak_count}}{shared_ptr<md::LabelMarker>=^{LabelMarker}^{__shared_weak_count}}BBB}Bf{vector<std::__1::shared_ptr<md::NavLabel>, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > >=^{shared_ptr<md::NavLabel>}^{shared_ptr<md::NavLabel>}{__compressed_pair<std::__1::shared_ptr<md::NavLabel> *, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > >=^{shared_ptr<md::NavLabel>}}}}16, name: initWithManager:
- (void)_timerFired:(id)arg1;

@end

