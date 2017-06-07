//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUVideoAssetNode-Protocol.h>

@class AVAsset, NSArray, NSString, PHAsset;
@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoKitVideoAssetNode : PXRunNode <PUVideoAssetNode>
{
    int _requestID;
    AVAsset *_videoAsset;
    long long _version;
    PHAsset *_asset;
}

@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void).cxx_destruct;
- (void)_handleDidLoadVideo:(id)arg1 info:(id)arg2;
- (void)run;
- (id)initWithAsset:(id)arg1 version:(long long)arg2;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

