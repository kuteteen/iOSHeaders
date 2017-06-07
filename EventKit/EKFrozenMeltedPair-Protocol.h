//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/NSObject-Protocol.h>

@class EKChangeSet, EKEventStore, EKObject, NSSet, NSString;
@protocol EKFrozenMeltedPair, EKProtocolObject;

@protocol EKFrozenMeltedPair <NSObject>
+ (Class)meltedClass;
+ (Class)frozenClass;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool isPartialObject;
@property(readonly, nonatomic) _Bool isFrozen;
- (_Bool)isEqual:(id <EKFrozenMeltedPair>)arg1 ignoringProperties:(NSSet *)arg2;
- (_Bool)isCompletelyEqual:(id <EKFrozenMeltedPair>)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (EKObject *)meltedObjectInStore:(EKEventStore *)arg1;
- (_Bool)isPropertyUnavailable:(NSString *)arg1;
- (EKPersistentObject_556b3b22 *)frozenObject;
- (EKObject *)existingMeltedObject;
- (EKChangeSet *)changeSet;
- (id)initWithObject:(id <EKProtocolObject>)arg1;
@end

