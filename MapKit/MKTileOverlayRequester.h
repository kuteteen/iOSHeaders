//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface MKTileOverlayRequester : GEOTileRequester
{
    _Bool _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
}

+ (void)unregisterOverlay:(unsigned int)arg1;
+ (unsigned int)registerOverlay:(id)arg1;
+ (unsigned char)tileProviderIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (_Bool)isRunning;
- (void)start;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_operationFinished:(id)arg1;
- (void)_cleanup;
- (void)_doWorkOrFinish;

@end

