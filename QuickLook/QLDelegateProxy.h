//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface QLDelegateProxy : NSProxy
{
    id _firstDelegate;
    id _secondDelegate;
}

@property __weak id secondDelegate; // @synthesize secondDelegate=_secondDelegate;
@property __weak id firstDelegate; // @synthesize firstDelegate=_firstDelegate;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

@end

