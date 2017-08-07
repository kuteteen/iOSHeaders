//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GGLRenderQueueSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource>
{
    // Error parsing type: ^{MapEngine=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}{_retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}^{Device}{_retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> >={__compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> >=^{DisplayLink}}}{unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> >={__compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> >=^{SnapshotRunLoop}}}^{RunLoop}{unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> >={__compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> >=^{AnimationManager}}}{unique_ptr<md::AnimationRunner, std::__1::default_delete<md::AnimationRunner> >={__compressed_pair<md::AnimationRunner *, std::__1::default_delete<md::AnimationRunner> >=^{AnimationRunner}}}{shared_ptr<md::RunLoopController>=^{RunLoopController}^{__shared_weak_count}}@@@@{unique_ptr<md::CartographicRenderer, std::__1::default_delete<md::CartographicRenderer> >={__compressed_pair<md::CartographicRenderer *, std::__1::default_delete<md::CartographicRenderer> >=^{CartographicRenderer}}}{unique_ptr<md::realistic::RealisticRenderer, std::__1::default_delete<md::realistic::RealisticRenderer> >={__compressed_pair<md::realistic::RealisticRenderer *, std::__1::default_delete<md::realistic::RealisticRenderer> >=^{RealisticRenderer}}}^{Renderer}{unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >={__compressed_pair<md::LayoutContext *, std::__1::default_delete<md::LayoutContext> >=^{LayoutContext}}}{_retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{unique_ptr<md::LogicManager, std::__1::default_delete<md::LogicManager> >={__compressed_pair<md::LogicManager *, std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B}, name: _mapEngine
}

- (RenderQueue_5bbf3210 *)renderQueueForTimestamp:(double)arg1;
-     // Error parsing type: @24@0:8^{MapEngine=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}{_retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}^{Device}{_retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> >={__compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> >=^{DisplayLink}}}{unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> >={__compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> >=^{SnapshotRunLoop}}}^{RunLoop}{unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> >={__compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> >=^{AnimationManager}}}{unique_ptr<md::AnimationRunner, std::__1::default_delete<md::AnimationRunner> >={__compressed_pair<md::AnimationRunner *, std::__1::default_delete<md::AnimationRunner> >=^{AnimationRunner}}}{shared_ptr<md::RunLoopController>=^{RunLoopController}^{__shared_weak_count}}@@@@{unique_ptr<md::CartographicRenderer, std::__1::default_delete<md::CartographicRenderer> >={__compressed_pair<md::CartographicRenderer *, std::__1::default_delete<md::CartographicRenderer> >=^{CartographicRenderer}}}{unique_ptr<md::realistic::RealisticRenderer, std::__1::default_delete<md::realistic::RealisticRenderer> >={__compressed_pair<md::realistic::RealisticRenderer *, std::__1::default_delete<md::realistic::RealisticRenderer> >=^{RealisticRenderer}}}^{Renderer}{unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >={__compressed_pair<md::LayoutContext *, std::__1::default_delete<md::LayoutContext> >=^{LayoutContext}}}{_retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{unique_ptr<md::LogicManager, std::__1::default_delete<md::LogicManager> >={__compressed_pair<md::LogicManager *, std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B}16, name: initWithEngine:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

