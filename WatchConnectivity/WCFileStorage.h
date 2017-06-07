//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCContentIndex;
@protocol OS_dispatch_queue;

@interface WCFileStorage : NSObject
{
    NSString *_pairingID;
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSArray *_outstandingFileTransfers;
    WCContentIndex *_fileIndex;
    WCContentIndex *_fileResultsIndex;
    WCContentIndex *_userInfoIndex;
    WCContentIndex *_userInfoResultsIndex;
}

+ (id)sharedInstance;
@property(retain) WCContentIndex *userInfoResultsIndex; // @synthesize userInfoResultsIndex=_userInfoResultsIndex;
@property(retain) WCContentIndex *userInfoIndex; // @synthesize userInfoIndex=_userInfoIndex;
@property(retain) WCContentIndex *fileResultsIndex; // @synthesize fileResultsIndex=_fileResultsIndex;
@property(retain) WCContentIndex *fileIndex; // @synthesize fileIndex=_fileIndex;
@property(retain) NSArray *outstandingFileTransfers; // @synthesize outstandingFileTransfers=_outstandingFileTransfers;
@property(retain) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(copy, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
- (void).cxx_destruct;
- (id)receivedAppContextFolderURL;
- (id)localAppContextFolderURL;
- (id)appContextFolderURL:(_Bool)arg1;
- (id)homeDirectoryURL;
- (id)outgoingFileTransferPath;
- (id)appendPathForFileTransfer:(id)arg1 toPath:(id)arg2;
- (void)cleanUpOldPairingIDFolderInFolder:(id)arg1 pairedDevicesPairingIDs:(id)arg2;
- (void)cleanUpOldPairingIDFoldersWithPairedDevicesPairingIDs:(id)arg1;
- (void)cleanUpWatchContentDirectoryWithCurrentAppInstallationID:(id)arg1;
- (void)createWatchDirectoryIfNeeded:(id)arg1;
- (void)enumerateUserInfoResultsWithBlock:(CDUnknownBlockType)arg1;
- (void)deleteUserInfoTransferFromInbox:(id)arg1;
- (void)enumerateIncomingUserInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)deleteFileFolderForSessionFileFromInbox:(id)arg1;
- (void)deleteRelatedMetadataForSessionFileFromInbox:(id)arg1;
- (void)cleanupSessionFileFromInbox:(id)arg1;
- (void)enumerateIncomingFilesWithBlock:(CDUnknownBlockType)arg1;
- (void)deleteAppContextDataFromInbox;
- (id)loadAppContextDataFromInbox;
- (void)deleteAppContextReceived:(_Bool)arg1;
- (id)loadAppContextReceived:(_Bool)arg1;
- (void)persistAppContextData:(id)arg1 received:(_Bool)arg2;
- (void)enumerateFileTransferResultsWithBlock:(CDUnknownBlockType)arg1;
- (void)deleteOutstandingUserInfoTransfer:(id)arg1;
- (id)loadOutstandingUserInfoTransfersAndComplicationUserInfo:(id *)arg1;
- (id)persistOutgoingUserInfoTransfer:(id)arg1;
- (void)deleteOutstandingFileTransfer:(id)arg1;
- (void)onqueue_persistFileTransfer:(id)arg1;
- (void)persistOutgoingFileTransfer:(id)arg1;
- (id)loadOutstandingFileTransfers;
- (void)resetIndexes;
- (id)init;

@end

