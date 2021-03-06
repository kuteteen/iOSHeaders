//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HKGraphSeriesDataSource : NSObject
{
    id <HKGraphSeriesDataSourceDelegate> _delegate;
    long long _minimumZoom;
    long long _maximumZoom;
}

@property(nonatomic) long long maximumZoom; // @synthesize maximumZoom=_maximumZoom;
@property(nonatomic) long long minimumZoom; // @synthesize minimumZoom=_minimumZoom;
@property(nonatomic) __weak id <HKGraphSeriesDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)invalidateCache;
- (_Bool)blocksAvailableFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (id)init;

@end

