//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/_LSQueryResolving-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSLocalQueryResolver : NSObject <_LSQueryResolving>
{
}

- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_queryCache;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

