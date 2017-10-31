//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTTodayProtoitem.h"

@class NSString, SFSearchResult;

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem>
{
    NSString *_identifier;
    id <FCHeadlineProviding> _headline;
    SFSearchResult *_searchResult;
}

@property(readonly, copy, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, copy, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 assetFileURLsByRemoteURL:(id)arg4 forLeadingCellAppearance:(_Bool)arg5;
- (id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 headline:(id)arg2 searchResult:(id)arg3;
- (id)init;

@end

