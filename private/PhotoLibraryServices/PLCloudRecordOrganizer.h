//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, PLPhotoLibrary;

@interface PLCloudRecordOrganizer : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_assetRecordsWithContainerChange;
    NSMutableArray *_albumRecordsWithContainerChange;
    NSMutableArray *_personRecords;
    NSMutableArray *_masterRecords;
    NSMutableArray *_assetRecords;
    NSMutableArray *_albumRecords;
    NSMutableArray *_memoryRecords;
    NSMutableArray *_faceCropRecords;
    NSMutableArray *_deleteRecords;
    NSMutableArray *_deletePersonRecords;
    NSMutableArray *_expungedRecords;
}

+ (_Bool)records:(id)arg1 containsIdentifier:(id)arg2;
@property(readonly) NSMutableArray *expungedRecords; // @synthesize expungedRecords=_expungedRecords;
@property(readonly) NSMutableArray *deletePersonRecords; // @synthesize deletePersonRecords=_deletePersonRecords;
@property(readonly) NSMutableArray *deleteRecords; // @synthesize deleteRecords=_deleteRecords;
@property(readonly) NSMutableArray *faceCropRecords; // @synthesize faceCropRecords=_faceCropRecords;
@property(readonly) NSMutableArray *memoryRecords; // @synthesize memoryRecords=_memoryRecords;
@property(readonly) NSMutableArray *albumRecords; // @synthesize albumRecords=_albumRecords;
@property(readonly) NSMutableArray *assetRecords; // @synthesize assetRecords=_assetRecords;
@property(readonly) NSMutableArray *masterRecords; // @synthesize masterRecords=_masterRecords;
@property(readonly) NSMutableArray *personRecords; // @synthesize personRecords=_personRecords;
@property(readonly) NSMutableArray *albumRecordsWithContainerChange; // @synthesize albumRecordsWithContainerChange=_albumRecordsWithContainerChange;
@property(readonly) NSMutableArray *assetRecordsWithContainerChange; // @synthesize assetRecordsWithContainerChange=_assetRecordsWithContainerChange;
- (void)organizeRecords:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end

