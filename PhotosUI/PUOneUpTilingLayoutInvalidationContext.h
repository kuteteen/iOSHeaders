//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTilingLayoutInvalidationContext.h>

@interface PUOneUpTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext
{
    _Bool _invalidatedContentInsets;
    _Bool _invalidatedCommentsTile;
    _Bool _invalidatedAccessoryTile;
    _Bool _invalidatedContentOffset;
    _Bool _invalidatedVideoPlaceholderTile;
    unsigned long long _options;
}

@property(nonatomic, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property(nonatomic, setter=_setInvalidatedVideoPlaceholderTile:) _Bool invalidatedVideoPlaceholderTile; // @synthesize invalidatedVideoPlaceholderTile=_invalidatedVideoPlaceholderTile;
@property(nonatomic, setter=_setInvalidatedContentOffset:) _Bool invalidatedContentOffset; // @synthesize invalidatedContentOffset=_invalidatedContentOffset;
@property(nonatomic, setter=_setInvalidatedAccessoryTile:) _Bool invalidatedAccessoryTile; // @synthesize invalidatedAccessoryTile=_invalidatedAccessoryTile;
@property(readonly, nonatomic) _Bool invalidatedCommentsTile; // @synthesize invalidatedCommentsTile=_invalidatedCommentsTile;
@property(nonatomic, setter=_setInvalidatedContentInsets:) _Bool invalidatedContentInsets; // @synthesize invalidatedContentInsets=_invalidatedContentInsets;

@end

