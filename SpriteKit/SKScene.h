//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKEffectNode.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSMapTable, NSMutableArray, PKPhysicsWorld, SKCameraNode, SKNode, SKPhysicsBody, SKPhysicsWorld, SKView, UIColor;
@protocol SKSceneDelegate;

@interface SKScene : SKEffectNode
{
    double _lastUpdate;
    double _pausedTime;
    struct CGRect _visibleRect;
    NSMapTable *_touchMap;
    NSMutableArray *_allChildenWithConstraints;
    struct CGRect _bounds;
    _Bool _isSetup;
    _Bool _usesExplicitUpdate;
    _Bool _usesExplicitRender;
    SKPhysicsBody *_scenePinBody;
    id _view;
    // Error parsing type: ^{SKCSceneNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@fB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}@B@{shared_ptr<jet_framebuffer>=^{jet_framebuffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}BI@BB@Iq^{SKCSpriteNode}^{SKCSpriteNode}}, name: _skcSceneNode
    SKNode *_listener;
    AVAudioEngine *_audioEngine;
    _Bool __needsUpdate;
    _Bool __needsRender;
    SKPhysicsWorld *_physicsWorld;
    SKCameraNode *_camera;
    id <SKSceneDelegate> _delegate;
    AVAudioEnvironmentNode *_avAudioEnvironmentNode;
    PKPhysicsWorld *__pkPhysicsWorld;
}

+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize)arg2;
+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) PKPhysicsWorld *_pkPhysicsWorld; // @synthesize _pkPhysicsWorld=__pkPhysicsWorld;
@property(retain, nonatomic) AVAudioEnvironmentNode *avAudioEnvironmentNode; // @synthesize avAudioEnvironmentNode=_avAudioEnvironmentNode;
@property _Bool _needsRender; // @synthesize _needsRender=__needsRender;
@property _Bool _needsUpdate; // @synthesize _needsUpdate=__needsUpdate;
@property(nonatomic) __weak id <SKSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SKCameraNode *camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (id)_getFocusNodes;
- (id)_parentFocusEnvironment;
@property(readonly, nonatomic) __weak SKView *view;
- (void)setPaused:(_Bool)arg1;
- (void)didFinishUpdate;
- (void)didApplyConstraints;
- (void)didSimulatePhysics;
- (void)didEvaluateActions;
- (void)_update:(double)arg1;
- (void)update:(double)arg1;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)willMoveFromView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_didMoveToView:(id)arg1;
- (void)checkAudioEngine;
@property(readonly, nonatomic) SKPhysicsWorld *physicsWorld; // @synthesize physicsWorld=_physicsWorld;
- (struct CGRect)frame;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint visibleRectCenter;
@property(nonatomic) struct CGSize visibleRectSize;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromView:(struct CGPoint)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)setZPosition:(double)arg1;
- (double)zPosition;
- (void)setZRotation:(double)arg1;
- (double)zRotation;
- (void)setYScale:(double)arg1;
- (double)yScale;
- (void)setXScale:(double)arg1;
- (double)xScale;
- (void)setScale:(double)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)_didMakeBackingNode;
-     // Error parsing type: ^{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@fB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}}16@0:8, name: _makeBackingNode
- (void)set_anchorPoint:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint anchorPoint;
@property(readonly, retain, nonatomic) AVAudioEngine *audioEngine;
@property(nonatomic) __weak SKNode *listener;
@property(nonatomic) long long scaleMode;
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;
@property(retain, nonatomic) UIColor *backgroundColor;
- (void)_removeConstraintsForNode:(id)arg1;
- (void)_registerConstraintsForNode:(id)arg1;
- (_Bool)_hasConstraints;
- (void)dealloc;
- (void)sceneDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
@property _Bool _usesExplicitRender;
@property _Bool _usesExplicitUpdate;
- (void)didContinueContact:(id)arg1;
- (void)willRenderContent;
- (void)_willMoveFromView:(id)arg1;

@end

