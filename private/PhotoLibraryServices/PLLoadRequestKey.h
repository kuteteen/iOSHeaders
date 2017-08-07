//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSManagedObjectID;

@interface PLLoadRequestKey : NSObject <NSCopying>
{
    unsigned short _sourceID;
    NSManagedObjectID *_objectID;
    unsigned long long _hash;
}

+ (id)keyWithSource:(id)arg1 asset:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

