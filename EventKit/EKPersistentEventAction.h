//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendarItem, NSData, NSString;

@interface EKPersistentEventAction : EKPersistentObject
{
}

+ (id)relations;
@property(retain, nonatomic) EKPersistentCalendarItem *owner;
- (int)entityType;
@property(copy, nonatomic) NSData *externalData;
@property(copy, nonatomic) NSString *externalModTag;
@property(copy, nonatomic) NSString *externalScheduleID;
@property(copy, nonatomic) NSString *externalFolderID;
@property(copy, nonatomic) NSString *externalID;

@end

