//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSArray, NSString;

@interface MPModelMediaClip : MPModelObject
{
}

+ (id)__title_KEY;
+ (id)__staticAssets_KEY;
+ (id)__previewArtworkCatalogBlock_KEY;
- (id)previewArtworkCatalog;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType previewArtworkCatalogBlock; // @dynamic previewArtworkCatalogBlock;
@property(copy, nonatomic) NSArray *staticAssets; // @dynamic staticAssets;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

