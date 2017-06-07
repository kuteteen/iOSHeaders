//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKMediaItem.h>

@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem
{
    MPMediaItem *_mediaItem;
}

+ (id)urlForMPAsset:(id)arg1;
+ (id)urlForMediaObject:(id)arg1;
+ (_Bool)isRemote;
+ (id)scheme;
@property(retain) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (_Bool)wantsDiskCachedMetadata;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resolveAssetIfNeeded;
- (void)setMediaObject:(id)arg1;
- (id)mediaObject;
- (void)dealloc;
- (id)initWithMPMediaItem:(id)arg1;
- (id)init;

@end
