//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class CPLRecordChange, NSString;
@protocol NSFastEnumeration;

@protocol CPLBatchExtractionStrategyStorage <NSObject>
- (_Bool)hasChanges;
- (_Bool)removeChange:(CPLRecordChange *)arg1 error:(id *)arg2;
- (id <NSFastEnumeration>)allChanges;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 secondaryIdentifier:(NSString *)arg2;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 relatedIdentifier:(NSString *)arg2;
- (id <NSFastEnumeration>)allNonDeletedChangesWithClass:(Class)arg1;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 changeType:(unsigned long long)arg2;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 trashed:(_Bool)arg2;
- (CPLRecordChange *)changeWithIdentifier:(NSString *)arg1;
@end
