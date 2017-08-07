//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolDOMDomainHandler-Protocol.h>

@class IKJSInspectorController, NSMutableDictionary, NSString, RWIProtocolDOMNode;

@interface IKJSInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler>
{
    NSMutableDictionary *_searches;
    RWIProtocolDOMNode *_rootNode;
    IKJSInspectorController *_controller;
}

+ (id)_nodeIDsFromNodePaths:(id)arg1;
+ (id)_searchNode:(id)arg1 query:(id)arg2 currentPath:(id)arg3;
+ (void)_updateProtocolNode:(id)arg1 withDOMNode:(id)arg2 dispatcher:(id)arg3;
+ (id)_parseAttributeString:(id)arg1;
+ (id)_procotolNodeForDOMNode:(id)arg1;
+ (void)_buildNodePath:(id)arg1 rootProtocolNode:(id)arg2 rootDOMNode:(id)arg3 withDispatcher:(id)arg4;
+ (id)_buildNodeTreeForNode:(id)arg1 depth:(int)arg2;
+ (id)_findNodeWithNodeId:(int)arg1 node:(id)arg2;
@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)focusWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)markUndoableStateWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)redoWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)undoWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)moveToWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int *)arg5;
- (void)getAttributesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)resolveNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 objectGroup:(id *)arg4;
- (void)releaseBackendNodeIdsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeGroup:(id)arg3;
- (void)pushNodeByBackendIdToFrontendWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 backendNodeId:(int)arg3;
- (void)pushNodeByPathToFrontendWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 path:(id)arg3;
- (void)highlightFrameWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3 contentColor:(id *)arg4 contentOutlineColor:(id *)arg5;
- (void)hideHighlightWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (_Bool)hideHighlight;
- (void)highlightNodeListWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeIds:(id)arg3 highlightConfig:(id)arg4;
- (void)highlightNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 highlightConfig:(id)arg3 nodeId:(int *)arg4 objectId:(id *)arg5;
- (void)highlightSelectorWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 highlightConfig:(id)arg3 selectorString:(id)arg4 frameId:(id *)arg5;
- (void)highlightQuadWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 quad:(id)arg3 color:(id *)arg4 outlineColor:(id *)arg5 usePageCoordinates:(_Bool *)arg6;
- (void)highlightRectWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 color:(id *)arg7 outlineColor:(id *)arg8 usePageCoordinates:(_Bool *)arg9;
- (void)setInspectModeEnabledWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 enabled:(_Bool)arg3 highlightConfig:(id *)arg4;
- (void)requestNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 objectId:(id)arg3;
- (void)discardSearchResultsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 searchId:(id)arg3;
- (void)getSearchResultsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 searchId:(id)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;
- (void)performSearchWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 query:(id)arg3 nodeIds:(id *)arg4;
- (void)setOuterHTMLWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 outerHTML:(id)arg4;
- (void)getOuterHTMLWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getEventListenersForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 objectGroup:(id *)arg4;
- (void)removeAttributeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 name:(id)arg4;
- (void)setAttributesAsTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 text:(id)arg4 name:(id *)arg5;
- (void)setAttributeValueWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 name:(id)arg4 value:(id)arg5;
- (void)removeNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)setNodeValueWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 value:(id)arg4;
- (void)setNodeNameWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 name:(id)arg4;
- (void)querySelectorAllWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 selector:(id)arg4;
- (void)querySelectorWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 selector:(id)arg4;
- (void)requestChildNodesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 depth:(int *)arg4;
- (void)getDocumentWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)documentDidChange;
- (void)documentDidUpdate;
- (id)initWithInspectorController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

