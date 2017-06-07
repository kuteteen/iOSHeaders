//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetCache.h>

@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache
{
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)arg1;
- (_Bool)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)allKeys;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (id)URL;
- (long long)currentSize;
- (void)setMaxEntrySize:(long long)arg1;
- (long long)maxEntrySize;
- (void)setMaxSize:(long long)arg1;
- (long long)maxSize;
- (void)finalize;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

