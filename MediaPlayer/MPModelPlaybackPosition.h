//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelPlaybackPosition : MPModelObject
{
    _Bool _shouldRememberBookmarkTime;
    _Bool _hasBeenPlayed;
    double _bookmarkTime;
    NSString *_storeUbiquitousIdentifier;
    long long _userPlayCount;
}

+ (id)__MPModelPropertyPlaybackPositionUserPlayCount__PROPERTY;
+ (id)__userPlayCount__KEY;
+ (id)__MPModelPropertyPlaybackPositionStoreUbiquitousIdentifier__PROPERTY;
+ (id)__storeUbiquitousIdentifier__KEY;
+ (id)__MPModelPropertyPlaybackPositionHasBeenPlayed__PROPERTY;
+ (id)__hasBeenPlayed__KEY;
+ (id)__MPModelPropertyPlaybackPositionShouldRememberBookmarkTime__PROPERTY;
+ (id)__shouldRememberBookmarkTime__KEY;
+ (id)__MPModelPropertyPlaybackPositionBookmarkTime__PROPERTY;
+ (id)__bookmarkTime__KEY;
@property(nonatomic) long long userPlayCount; // @synthesize userPlayCount=_userPlayCount;
@property(copy, nonatomic) NSString *storeUbiquitousIdentifier; // @synthesize storeUbiquitousIdentifier=_storeUbiquitousIdentifier;
@property(nonatomic) _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) _Bool shouldRememberBookmarkTime; // @synthesize shouldRememberBookmarkTime=_shouldRememberBookmarkTime;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;

@end

