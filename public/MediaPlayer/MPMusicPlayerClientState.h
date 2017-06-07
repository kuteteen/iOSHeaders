//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaItem, MPMediaPlaylist, MPMediaQuery, MPRadioStation, NSArray, NSDictionary, NSString;

@interface MPMusicPlayerClientState : NSObject
{
    int _backgroundPlaybackAccess;
    MPMediaItem *_firstItem;
    MPMediaPlaylist *_geniusMixPlaylist;
    _Bool _hasAudioBackgroundMode;
    MPMediaQuery *_query;
    MPRadioStation *_radioStation;
    long long _repeatMode;
    _Bool _seeking;
    long long _shuffleMode;
    _Bool _useApplicationSpecificQueue;
    _Bool _videoPlaybackEnabled;
    NSDictionary *_assetStoreFrontOverrides;
    NSDictionary *_endTimeModifications;
    NSString *_startItemID;
    NSDictionary *_startTimeModifications;
    NSArray *_storeIDs;
}

@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy, nonatomic) NSDictionary *startTimeModifications; // @synthesize startTimeModifications=_startTimeModifications;
@property(copy, nonatomic) NSString *startItemID; // @synthesize startItemID=_startItemID;
@property(retain, nonatomic) MPRadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property(copy, nonatomic) NSDictionary *endTimeModifications; // @synthesize endTimeModifications=_endTimeModifications;
@property(copy, nonatomic) NSDictionary *assetStoreFrontOverrides; // @synthesize assetStoreFrontOverrides=_assetStoreFrontOverrides;
@property(nonatomic) _Bool videoPlaybackEnabled; // @synthesize videoPlaybackEnabled=_videoPlaybackEnabled;
@property(nonatomic) _Bool useApplicationSpecificQueue; // @synthesize useApplicationSpecificQueue=_useApplicationSpecificQueue;
@property(nonatomic) long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(retain, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property(nonatomic) _Bool hasAudioBackgroundMode; // @synthesize hasAudioBackgroundMode=_hasAudioBackgroundMode;
@property(retain, nonatomic) MPMediaPlaylist *geniusMixPlaylist; // @synthesize geniusMixPlaylist=_geniusMixPlaylist;
@property(retain, nonatomic) MPMediaItem *firstItem; // @synthesize firstItem=_firstItem;
@property(nonatomic) int backgroundPlaybackAccess; // @synthesize backgroundPlaybackAccess=_backgroundPlaybackAccess;
- (void).cxx_destruct;

@end
