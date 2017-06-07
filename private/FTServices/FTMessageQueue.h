//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDSBaseMessage, NSArray, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject
{
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    id <FTMessageQueueDelegate> _delegate;
}

@property id <FTMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *_addDates; // @synthesize _addDates;
@property(retain) NSMutableArray *_queue; // @synthesize _queue;
- (_Bool)removeMessage:(id)arg1;
- (_Bool)addMessageAtHeadOfQueue:(id)arg1;
- (_Bool)addMessage:(id)arg1;
- (id)dequeueTopMessage;
- (void)removeAllMessages;
- (void)_timeoutHit;
- (void)_setTimeout;
- (void)_clearTimeout;
@property(readonly) long long count;
@property(readonly) NSArray *messages;
@property(readonly) IDSBaseMessage *topMessage;
- (void)dealloc;
- (id)init;

@end
