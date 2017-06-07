//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_notifications;
    NSMutableArray *_userInfos;
}

+ (Class)userInfoType;
+ (Class)notificationType;
@property(retain, nonatomic) NSMutableArray *userInfos; // @synthesize userInfos=_userInfos;
@property(retain, nonatomic) NSMutableArray *notifications; // @synthesize notifications=_notifications;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfosCount;
- (void)addUserInfo:(id)arg1;
- (void)clearUserInfos;
- (id)notificationAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationsCount;
- (void)addNotification:(id)arg1;
- (void)clearNotifications;
- (void)dealloc;

@end
