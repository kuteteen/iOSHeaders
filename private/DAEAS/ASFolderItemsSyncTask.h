//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

#import "NSCopying.h"

@class ASMailMessage, NSArray, NSMutableSet, NSSet, NSString;

@interface ASFolderItemsSyncTask : ASTask <NSCopying>
{
    _Bool _isInitialSync;
    _Bool _isInitialBootstrapSync;
    _Bool _willUpdate;
    _Bool _moreAvailable;
    _Bool _clientWinsOnSyncConflict;
    _Bool _isResyncAfterConnectionFailed;
    _Bool _moreLocalChangesAvailable;
    _Bool _deletesAsMoves;
    _Bool _hadFalseMoreAvailable;
    _Bool _isSpinning;
    _Bool _haveShortcut121Response;
    int _bodyTruncationBytes;
    int _mimeSupport;
    int _filterDays;
    int _numReplacedItems;
    int _numDownloadedElements;
    NSString *_folderID;
    NSString *_previousSyncKey;
    long long _dataclass;
    NSArray *_actions;
    ASMailMessage *_streamingMailMessage;
    NSArray *_preservedActions;
    NSArray *_pushedActions;
    NSMutableSet *_mRejectedServerIds;
}

@property(nonatomic) int numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property(nonatomic) int numReplacedItems; // @synthesize numReplacedItems=_numReplacedItems;
@property(nonatomic) _Bool haveShortcut121Response; // @synthesize haveShortcut121Response=_haveShortcut121Response;
@property(nonatomic) _Bool isSpinning; // @synthesize isSpinning=_isSpinning;
@property(nonatomic) _Bool hadFalseMoreAvailable; // @synthesize hadFalseMoreAvailable=_hadFalseMoreAvailable;
@property(nonatomic) _Bool deletesAsMoves; // @synthesize deletesAsMoves=_deletesAsMoves;
@property(retain, nonatomic) NSMutableSet *mRejectedServerIds; // @synthesize mRejectedServerIds=_mRejectedServerIds;
@property(nonatomic) _Bool moreLocalChangesAvailable; // @synthesize moreLocalChangesAvailable=_moreLocalChangesAvailable;
@property(retain, nonatomic) NSArray *pushedActions; // @synthesize pushedActions=_pushedActions;
@property(retain, nonatomic) NSArray *preservedActions; // @synthesize preservedActions=_preservedActions;
@property(nonatomic) _Bool isResyncAfterConnectionFailed; // @synthesize isResyncAfterConnectionFailed=_isResyncAfterConnectionFailed;
@property(retain, nonatomic) ASMailMessage *streamingMailMessage; // @synthesize streamingMailMessage=_streamingMailMessage;
@property(nonatomic) int filterDays; // @synthesize filterDays=_filterDays;
@property(nonatomic, setter=setMIMESupport:) int mimeSupport; // @synthesize mimeSupport=_mimeSupport;
@property(nonatomic) _Bool clientWinsOnSyncConflict; // @synthesize clientWinsOnSyncConflict=_clientWinsOnSyncConflict;
@property(nonatomic) int bodyTruncationBytes; // @synthesize bodyTruncationBytes=_bodyTruncationBytes;
@property(nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(nonatomic) _Bool willUpdate; // @synthesize willUpdate=_willUpdate;
@property(nonatomic) _Bool isInitialBootstrapSync; // @synthesize isInitialBootstrapSync=_isInitialBootstrapSync;
@property(nonatomic) _Bool isInitialSync; // @synthesize isInitialSync=_isInitialSync;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(copy, nonatomic) NSString *previousSyncKey; // @synthesize previousSyncKey=_previousSyncKey;
@property(copy, nonatomic) NSString *folderID; // @synthesize folderID=_folderID;
- (void).cxx_destruct;
- (void)reportStatusWithError:(id)arg1;
@property(readonly, nonatomic) NSString *previousSyncKeyForAgent;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (double)percentComplete;
- (void)finishWithError:(id)arg1;
- (void)_addRejectedServerId:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)checkForErrorInContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)replacementObjectForEmailItem:(id)arg1;
- (_Bool)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;
- (void)_handleResponseToLeaf:(id)arg1 addedResponses:(id)arg2 modifiedResponses:(id)arg3 removedResponses:(id)arg4 fetchedResponses:(id)arg5;
- (void)_handleChangedLeaf:(id)arg1 addedChanges:(id)arg2 modifiedChanges:(id)arg3 removedChanges:(id)arg4;
- (id)requestBody;
- (int)_mimeTruncationCode;
- (int)_bodyTruncationCode;
- (int)_mimeSupportCode;
- (void)appendSupportedFieldsData:(id)arg1;
- (void)appendActionData:(id)arg1;
- (int)bodyType;
@property(readonly, nonatomic) NSSet *rejectedServerIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFolderID:(id)arg1 deletesAsMoves:(_Bool)arg2;
- (id)initWithFolderID:(id)arg1;
- (void)dealloc;
- (void)_setSpinning:(_Bool)arg1;
- (int)commandCode;

@end

