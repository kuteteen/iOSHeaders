//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, _KSCloudKitManager, _KSControlFileController, _KSRequestThrottle, _KSSystemTask;

@interface _KSUserWordsSynchroniser : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSCloudKitManager *_cloudKitManager;
    _KSControlFileController *_controlFile;
    _KSSystemTask *_pushTask;
    _Bool _taskRun;
    NSArray *_languagesIfOffline;
    _Bool _attemptingConnection;
    _Bool _retryPending;
    _Bool _needRetry;
    _KSRequestThrottle *_identityThrottle;
}

+ (Class)infoClass;
+ (id)sharedInstance;
+ (id)generateRecordNameForFilename:(id)arg1 withKey:(id)arg2;
+ (id)generateKeyWithSize:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)deleteZoneWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dumpAllRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)overwriteFilesWithRecords:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)readFilesWithRecordIDs:(id)arg1 forColumns:(id)arg2 qos:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)checkErrors:(id)arg1;
- (id)recordIDForLanguage:(id)arg1 withKey:(id)arg2;
- (id)filenameForLanguage:(id)arg1;
- (id)generateRecordListForLanguages:(id)arg1;
- (void)deltaDownloadForLanguages:(id)arg1;
- (void)firstTimeDownloadWithKey:(id)arg1;
- (void)checkConfiguration;
- (void)generateKeyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)keyboardUsed;
- (void)checkForDownload:(id)arg1 uploads:(id)arg2 allLanguages:(id)arg3;
- (void)checkProgress:(int)arg1 withInfo:(id)arg2;
- (void)identitiesDidChange:(id)arg1;
- (void)accountDidChange:(id)arg1;
@property(retain, nonatomic) NSArray *requiredLanguages;
- (void)modifyInformationWithOperations:(CDUnknownBlockType)arg1;
- (id)information;
- (void)disable;
- (void)dealloc;
- (id)init;
- (id)initForTestingWithManager:(id)arg1 enablePushing:(_Bool)arg2;
- (id)containerID;

@end

