//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MPMediaLibraryAlbumAppData : NSObject
{
    long long _version;
    NSDictionary *_appDataDict;
    NSMutableDictionary *_dirtyPopularityDict;
}

@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)createAppDataDictionary;
- (id)songPopularityForAdamID:(long long)arg1;
- (void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2;
- (id)songPopularityForIdentifiers:(id)arg1;
- (void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2;
- (id)initWithAppDataDictionary:(id)arg1;
- (id)init;

@end

