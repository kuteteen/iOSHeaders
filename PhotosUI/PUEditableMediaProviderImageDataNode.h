//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUImageDataNode-Protocol.h>
#import <PhotosUI/PUImageInfoNode-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PUEditableMediaProvider;
@protocol PUEditableAsset, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUEditableMediaProviderImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode>
{
    int _requestID;
    NSData *_imageData;
    NSURL *_imageDataURL;
    long long _imageExifOrientation;
    long long _version;
    id <PUEditableAsset> _asset;
    PUEditableMediaProvider *_mediaProvider;
}

@property(readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) long long imageExifOrientation; // @synthesize imageExifOrientation=_imageExifOrientation;
@property(readonly, nonatomic) NSURL *imageDataURL; // @synthesize imageDataURL=_imageDataURL;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageOrientation:(long long)arg2 info:(id)arg3;
- (void)run;
- (void)didCancel;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3;

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

