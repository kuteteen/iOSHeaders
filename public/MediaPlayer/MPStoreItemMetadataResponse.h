//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSMutableDictionary;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying>
{
    NSArray *_cacheMissItemIdentifiers;
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
    _Bool _finalResponse;
    NSArray *_lastBatchItemIdentifiers;
    NSArray *_requestItemIdentifiers;
}

@property(copy, nonatomic) NSArray *cacheMissItemIdentifiers; // @synthesize cacheMissItemIdentifiers=_cacheMissItemIdentifiers;
@property(copy, nonatomic) NSArray *requestItemIdentifiers; // @synthesize requestItemIdentifiers=_requestItemIdentifiers;
@property(copy, nonatomic) NSArray *lastBatchItemIdentifiers; // @synthesize lastBatchItemIdentifiers=_lastBatchItemIdentifiers;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
- (void).cxx_destruct;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(_Bool *)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy, nonatomic) NSDate *earliestExpirationDate;
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

