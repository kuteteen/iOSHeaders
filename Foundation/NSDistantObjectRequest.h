//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConnection, NSInvocation;

@interface NSDistantObjectRequest : NSObject
{
}

- (void)replyWithException:(id)arg1;
@property(readonly, retain) id conversation;
@property(readonly, retain) NSConnection *connection;
@property(readonly, retain) NSInvocation *invocation;

@end

