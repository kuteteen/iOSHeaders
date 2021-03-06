//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSObject<OS_dispatch_queue>, NSURL;

__attribute__((visibility("hidden")))
@interface PUReviewFileManager : NSObject
{
    NSFileManager *__fileManager;
    NSObject<OS_dispatch_queue> *__fileManagementQueue;
    NSURL *__safePathURL;
}

+ (id)defaultManager;
@property(readonly, nonatomic) NSURL *_safePathURL; // @synthesize _safePathURL=__safePathURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_fileManagementQueue; // @synthesize _fileManagementQueue=__fileManagementQueue;
@property(readonly, nonatomic) NSFileManager *_fileManager; // @synthesize _fileManager=__fileManager;
- (void).cxx_destruct;
- (_Bool)_removeItemAtURL:(id)arg1 error:(id *)arg2 stackshot:(id)arg3;
- (_Bool)_allowedToDeleteItemAtURL:(id)arg1;
- (void)removeItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileManager:(id)arg1;

@end

