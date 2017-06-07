//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class HDNanoSyncSession, HDSQLitePredicate, NSSet;

@protocol HDNanoSyncEntity <HDSyncEntity>
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@optional
+ (NSSet *)syncEntityDependenciesForNanoSyncProtocolVersion:(int)arg1;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (HDSQLitePredicate *)nanoSyncPredicateForSession:(HDNanoSyncSession *)arg1;
@end
