//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject <NSCopying>
{
    _Bool _isEmail;
    _Bool _isPhone;
    EKParticipant *_participant;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}

+ (id)participantForSortingWithEKParticipant:(id)arg1;
+ (id)contactStore;
@property(nonatomic) _Bool isPhone; // @synthesize isPhone=_isPhone;
@property(nonatomic) _Bool isEmail; // @synthesize isEmail=_isEmail;
@property(copy, nonatomic) NSString *cachedDisplayName; // @synthesize cachedDisplayName=_cachedDisplayName;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) __weak EKParticipant *participant; // @synthesize participant=_participant;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)displayName;
- (id)description;

@end

