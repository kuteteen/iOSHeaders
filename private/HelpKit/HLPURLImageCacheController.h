//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/HLPURLDataCacheController.h>

@class NSCache;

@interface HLPURLImageCacheController : HLPURLDataCacheController
{
    NSCache *_inMemoryImageCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *inMemoryImageCache; // @synthesize inMemoryImageCache=_inMemoryImageCache;
- (void).cxx_destruct;
- (void)getImageForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)imageFromMemoryCacheForPath:(id)arg1;
- (void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3;
- (id)newDataCache;
- (void)unload;

@end
