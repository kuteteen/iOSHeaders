//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <Foundation/NSCoding-Protocol.h>

@class NSConnection;

@interface NSDistantObject : NSProxy <NSCoding>
{
    id _knownSelectors;
    unsigned long long _wireCount;
    unsigned long long _refCount;
    id _proto;
    unsigned short ___2;
    unsigned char ___1;
    unsigned char _wireType;
    id _remoteClass;
}

+ (id)newDistantObjectWithCoder:(id)arg1;
+ (id)proxyWithLocal:(id)arg1 connection:(id)arg2;
+ (id)proxyWithTarget:(id)arg1 connection:(id)arg2;
+ (void)initialize;
+ (void)_enableLogging:(_Bool)arg1;
- (struct _NSZone *)zone;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendFormat:(id)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (Class)class;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)retainWireCount;
- (oneway void)release;
- (void)dealloc;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (id)retain;
- (void)_releaseWireCount:(unsigned long long)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)protocolForProxy;
- (void)setProtocolForProxy:(id)arg1;
@property(readonly, retain) NSConnection *connectionForProxy;
- (id)initWithLocal:(id)arg1 connection:(id)arg2;
- (id)initWithTarget:(id)arg1 connection:(id)arg2;

@end

