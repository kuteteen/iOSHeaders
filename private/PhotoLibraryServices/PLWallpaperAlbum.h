//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedAlbum.h>

@interface PLWallpaperAlbum : PLManagedAlbum
{
}

+ (id)wallpaperAlbumInLibrary:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (id)_kindDescription;
- (unsigned long long)photosCount;
- (id)posterImage;
- (id)localizedTitle;
- (void)awakeFromInsert;

// Remaining properties
@property(nonatomic) short wallpaperAlbumType; // @dynamic wallpaperAlbumType;

@end

