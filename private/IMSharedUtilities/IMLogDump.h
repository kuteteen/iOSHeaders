//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject
{
    NSObject<OS_dispatch_queue> *_logDumpQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue; // @synthesize logDumpQueue=_logDumpQueue;
- (void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 shouldCompress:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (_Bool)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withError:(id *)arg3;
- (void)_compressAndDeleteFileAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_lastHoursToAppend:(int)arg1;
- (id)_predicateToAppend:(id)arg1;
- (void)dealloc;
- (id)init;

@end

