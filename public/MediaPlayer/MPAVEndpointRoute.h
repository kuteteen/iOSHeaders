//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVEndpointRoute : MPAVRoute
{
    MPAVRouteConnection *_connection;
    void *_endpoint;
}

+ (void)getActiveEndpointRouteWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) void *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (_Bool)isDeviceRoute;
- (_Bool)isB238Route;
- (_Bool)isAppleTVRoute;
- (_Bool)canAccessRemoteAssets;
- (id)connection;
- (id)description;
- (void)dealloc;
- (id)initWithEndpoint:(void *)arg1;

@end

