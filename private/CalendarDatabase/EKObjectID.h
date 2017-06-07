//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CalendarDatabase/NSCopying-Protocol.h>
#import <CalendarDatabase/NSSecureCoding-Protocol.h>

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _temporary;
    int _entityType;
    int _rowID;
}

+ (id)objectIDWithURL:(id)arg1;
+ (id)temporaryObjectIDWithEntityType:(int)arg1;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;
+ (id)objectIDWithCADObjectID:(CDStruct_1ef3fb1f)arg1;
+ (_Bool)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)URIRepresentation;
- (id)stringRepresentation;
- (id)description;
- (_Bool)isTemporary;
- (CDStruct_1ef3fb1f)CADObjectID;
- (int)rowID;
- (int)entityType;
- (id)entityName;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(_Bool)arg3;

@end
