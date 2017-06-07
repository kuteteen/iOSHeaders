//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSFilePresenter-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, NSURL;

@interface WCContentIndex : NSObject <NSFilePresenter>
{
    _Bool _invalidated;
    NSURL *_itemURL;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_cachedContentIndex;
    id _lastGenerationIdentifier;
}

@property(retain, nonatomic) id lastGenerationIdentifier; // @synthesize lastGenerationIdentifier=_lastGenerationIdentifier;
@property(retain, nonatomic) NSMutableArray *cachedContentIndex; // @synthesize cachedContentIndex=_cachedContentIndex;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void).cxx_destruct;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidChange;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)commit;
- (void)removeContentIdentifier:(id)arg1;
- (void)addContentIdentifier:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *index;
- (void)loadContentIfNecessary;
- (void)invalidate;
- (id)initWithContainingFolder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

