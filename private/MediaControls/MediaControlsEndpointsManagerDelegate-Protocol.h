//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVEndpointRoute, MediaControlsEndpointsManager, NSArray;

@protocol MediaControlsEndpointsManagerDelegate <NSObject>
- (void)endpointsManager:(MediaControlsEndpointsManager *)arg1 willUpdateRoutes:(NSArray *)arg2 defersRoutesReplacement:(MPChangeDetails * (^)(void))arg3;
- (void)endpointsManager:(MediaControlsEndpointsManager *)arg1 activeSystemRouteDidChange:(MPAVEndpointRoute *)arg2;
@end
