//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSPredicate, OSLogEventSource, _OSLogIndex;

@interface OSLogEventStream : NSObject
{
    unsigned int _invalidated;
    NSPredicate *_filterPredicate;
    unsigned long long _flags;
    _OSLogIndex *_index;
    CDUnknownBlockType _invalidationHandler;
    OSLogEventSource *_source;
    CDUnknownBlockType _streamHandler;
    NSObject<OS_dispatch_queue> *_target;
    struct _os_timesync_db_s *_tsdb;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) struct _os_timesync_db_s *tsdb; // @synthesize tsdb=_tsdb;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *target; // @synthesize target=_target;
@property(copy, nonatomic) CDUnknownBlockType streamHandler; // @synthesize streamHandler=_streamHandler;
@property(readonly, nonatomic) OSLogEventSource *source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) _OSLogIndex *index; // @synthesize index=_index;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activateStreamFromPosition:(id)arg1;
- (void)activateStreamFromLastBoot;
- (void)activateStreamFromDate:(id)arg1;
- (void)_activateStreamInRange:(struct os_timesync_range_s *)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1;

@end

