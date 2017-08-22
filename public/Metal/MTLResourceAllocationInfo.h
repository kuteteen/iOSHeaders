//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCoding-Protocol.h>
#import <Metal/NSCopying-Protocol.h>

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>
{
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly) unsigned long long dirtySize; // @dynamic dirtySize;
@property(readonly) NSString *memoryPool; // @dynamic memoryPool;
@property(readonly) _Bool pageoffRequired; // @dynamic pageoffRequired;
@property(readonly) _Bool purgeable; // @dynamic purgeable;
@property(readonly) unsigned long long residentSize; // @dynamic residentSize;
@property(readonly) unsigned long long uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly) unsigned long long virtualSize; // @dynamic virtualSize;

@end

