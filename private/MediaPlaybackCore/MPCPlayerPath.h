//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MPAVRoute, NSString;

@interface MPCPlayerPath : NSObject <NSCopying>
{
    NSString *_bundleID;
    NSString *_playerID;
    void *_mediaRemotePlayerPath;
    MPAVRoute *_route;
}

+ (id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void *)arg2;
+ (id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;
+ (id)deviceActivePlayerPath;
@property(readonly, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) void *mediaRemotePlayerPath; // @synthesize mediaRemotePlayerPath=_mediaRemotePlayerPath;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void *)_createMediaRemoteOriginForInvalidationObservation;
- (void *)_createMediaRemotePlayerPathWithOrigin:(void *)arg1;
- (void)resolveWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isInProcess) _Bool inProcess;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;

@end

