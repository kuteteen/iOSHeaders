//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class CKQueryCursor, FCCKContentDatabase, NSArray, NSError, NSString;

@interface FCCKTagSearchQueryOperation : FCOperation
{
    FCCKContentDatabase *_database;
    unsigned long long _resultsLimit;
    NSString *_searchString;
    long long _tagType;
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    NSString *_locale;
    CDUnknownBlockType _queryCompletionHandler;
    NSString *_tagTypeString;
    NSArray *_resultRecords;
    CKQueryCursor *_resultCursor;
    NSError *_resultError;
}

@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) CKQueryCursor *resultCursor; // @synthesize resultCursor=_resultCursor;
@property(retain, nonatomic) NSArray *resultRecords; // @synthesize resultRecords=_resultRecords;
@property(retain, nonatomic) NSString *tagTypeString; // @synthesize tagTypeString=_tagTypeString;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_constructTagSearchQuery;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

