//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAsset;

@protocol PLCloudFeedNavigating <NSObject>
- (_Bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(PLCloudSharedAlbum *)arg1;
- (_Bool)cloudFeedCommentIsAvailableForNavigation:(PLCloudSharedComment *)arg1;
- (_Bool)cloudFeedAssetIsAvailableForNavigation:(PLManagedAsset *)arg1;
@end

