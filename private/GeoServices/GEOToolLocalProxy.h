//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOToolProxy.h"

@interface GEOToolLocalProxy : NSObject <GEOToolProxy>
{
}

- (void)validateMapLayerDataWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (id)getDefault:(id)arg1;
- (void)lockDBs;
- (void)unlockDBs;
- (void)resetMapDataExtension;

@end

