//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLCloudTaskManager : NSObject
{
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_resourceForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
}

- (id)_identifierForResource:(id)arg1;
- (void)reportCompletionForResource:(id)arg1 withError:(id)arg2 highPriority:(_Bool)arg3;
- (void)reportProgress:(float)arg1 forResource:(id)arg2 highPriority:(_Bool)arg3;
- (_Bool)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forResource:(id)arg3 highPriority:(_Bool)arg4 withTaskIdentifier:(id)arg5;
- (_Bool)cancelTaskWithTaskIdentifier:(id)arg1;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (void)createPendingTaskWithProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forResource:(id)arg3 highPriority:(_Bool)arg4 withTaskIdentifier:(id)arg5;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)reset;
- (void)removeTaskIdentifiersForResource:(id)arg1 highPriority:(_Bool)arg2;
- (void)setTaskIdentifiers:(id)arg1 forResource:(id)arg2 highPriority:(_Bool)arg3;
- (id)taskIdentifiersForResource:(id)arg1 highPriority:(_Bool)arg2;
- (id)taskForResource:(id)arg1 highPriority:(_Bool)arg2;
- (id)firstTaskIdentifierForResource:(id)arg1 highPriority:(_Bool)arg2;
- (_Bool)hasTaskIdentifierForResource:(id)arg1 highPriority:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

