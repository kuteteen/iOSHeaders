//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OpusKit/OKMediaItem.h>

@class OKProducerPlugin;

@interface OKMediaProducerItem : OKMediaItem
{
    OKProducerPlugin *_plugin;
}

+ (id)urlForProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2;
+ (id)urlForMediaObject:(id)arg1;
+ (id)scheme;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsTemporaryDiskCache;
- (id)parseDate:(id)arg1;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_fileURL;
- (void)setMediaObject:(id)arg1;
- (id)mediaObject;
- (void)dealloc;
- (id)initWithProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2;

@end

