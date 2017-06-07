//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PLAssetContainerList-Protocol.h>

@class NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface PUFeedAssetContainerList : NSObject <PLAssetContainerList>
{
    NSString *_transientIdentifier;
    NSOrderedSet *_sectionInfos;
}

@property(retain, nonatomic) NSOrderedSet *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
- (id)containersRelationshipName;
- (id)photoLibrary;
- (id)managedObjectContext;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

