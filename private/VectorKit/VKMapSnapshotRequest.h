//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration, NSLocale;

@interface VKMapSnapshotRequest : NSObject
{
    unsigned int _scale;
    long long _mapType;
    NSLocale *_locale;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    struct CGSize _size;
    struct {
        CDStruct_2c43369c center;
        struct {
            double latitudeDelta;
            double longitudeDelta;
        } span;
    } _region;
}

@property(retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct VKRequestKey)_requestKey;

@end

