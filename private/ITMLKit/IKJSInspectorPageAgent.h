//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IKNetworkRequestLoader.h"
#import "RWIProtocolPageDomainHandler.h"

@class IKJSInspectorController, NSString, RWIProtocolPageFrameResourceTree;

@interface IKJSInspectorPageAgent : NSObject <IKNetworkRequestLoader, RWIProtocolPageDomainHandler>
{
    RWIProtocolPageFrameResourceTree *_resourceTree;
    IKJSInspectorController *_controller;
    NSString *_currentFrameIdentifier;
}

+ (id)_pageFromDOMDocument:(id)arg1;
@property(retain, nonatomic) NSString *currentFrameIdentifier; // @synthesize currentFrameIdentifier=_currentFrameIdentifier;
@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)archiveWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)snapshotRectWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(long long)arg7;
- (void)snapshotNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)setCompositingBordersVisibleWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 visible:(_Bool)arg3;
- (void)getCompositingBordersVisibleWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)setEmulatedMediaWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 media:(id)arg3;
- (void)setShowPaintRectsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 result:(_Bool)arg3;
- (void)searchInResourceWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(_Bool *)arg6 isRegex:(_Bool *)arg7 requestId:(id *)arg8;
- (void)searchInResourcesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 text:(id)arg3 caseSensitive:(_Bool *)arg4 isRegex:(_Bool *)arg5;
- (void)searchInResourceWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(_Bool *)arg6 isRegex:(_Bool *)arg7;
- (void)getResourceContentWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3 url:(id)arg4;
- (void)getResourceTreeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)deleteCookieWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 cookieName:(id)arg3 url:(id)arg4;
- (void)getCookiesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)navigateWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 url:(id)arg3;
- (void)reloadWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 ignoreCache:(_Bool *)arg3 revalidateAllResources:(_Bool *)arg4 scriptToEvaluateOnLoad:(id *)arg5;
- (void)removeScriptToEvaluateOnLoadWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 identifier:(id)arg3;
- (void)addScriptToEvaluateOnLoadWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 scriptSource:(id)arg3;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)documentDidChange;
@property(readonly, nonatomic) RWIProtocolPageFrameResourceTree *resourceTree; // @synthesize resourceTree=_resourceTree;
- (id)initWithInspectorController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

