//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject
{
}

- (id)_persistentInfo;
- (id)lazyLoadRelationForKey:(id)arg1;
@property(nonatomic) double timestamp;
@property(nonatomic) _Bool changesAcknowledged;
@property(nonatomic) unsigned long long changedFields;
@property(copy, nonatomic) NSString *uniqueKey;
@property(copy, nonatomic) NSString *opaqueKey;
- (id)relatedEvent;
- (id)copy;
- (id)description;
- (id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3;

@end

