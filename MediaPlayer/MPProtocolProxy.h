//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSHashTable, Protocol;

@interface MPProtocolProxy : NSProxy
{
    Protocol *_protocol;
    NSHashTable *_objects;
}

+ (id)proxyForObjects:(id)arg1 protocol:(id)arg2;
+ (id)proxyForObject:(id)arg1 protocol:(id)arg2;
@property(retain, nonatomic) NSHashTable *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

