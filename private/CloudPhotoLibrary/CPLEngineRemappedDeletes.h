//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSMutableDictionary, NSString;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject>
{
    NSMutableDictionary *_perTransactionRemappedIdentifiers;
}

- (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)resetWithError:(id *)arg1;
- (id)realIdentifierForRemappedIdentifier:(id)arg1;
- (id)_fixupRemappedDeletesAndReturnBestCloudIdentifierFromRemappedIdentifiers:(id)arg1 fallback:(id)arg2;
- (void)discardDeleteForRemappedRecordWithIdentifier:(id)arg1;
- (void)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

