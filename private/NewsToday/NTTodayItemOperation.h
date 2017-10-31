//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCOperation.h"

@class NSArray, NSDictionary, NSSet, NTCatchUpOperationForYouFetchInfo;

@interface NTTodayItemOperation : FCOperation
{
    NSDictionary *_catchUpOperationResultsBySectionDescriptor;
    id <FCAppConfiguration> _appConfiguration;
    id <FCContentContext> _contentContext;
    NSSet *_itemIDsOfLeadingCells;
    id <FCFeedPersonalizing> _feedPersonalizer;
    id <NTTodayResultOperationInfoProviding> _operationInfo;
    NTCatchUpOperationForYouFetchInfo *_forYouFetchInfo;
    CDUnknownBlockType _todayItemCompletion;
    NSArray *_feedItems;
    NSDictionary *_resultTodayItemsBySectionDescriptor;
    NSDictionary *_resultAssetFileURLsByRemoteURL;
}

@property(retain, nonatomic) NSDictionary *resultAssetFileURLsByRemoteURL; // @synthesize resultAssetFileURLsByRemoteURL=_resultAssetFileURLsByRemoteURL;
@property(retain, nonatomic) NSDictionary *resultTodayItemsBySectionDescriptor; // @synthesize resultTodayItemsBySectionDescriptor=_resultTodayItemsBySectionDescriptor;
@property(copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(copy, nonatomic) CDUnknownBlockType todayItemCompletion; // @synthesize todayItemCompletion=_todayItemCompletion;
@property(copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo; // @synthesize forYouFetchInfo=_forYouFetchInfo;
@property(copy, nonatomic) id <NTTodayResultOperationInfoProviding> operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(copy, nonatomic) NSSet *itemIDsOfLeadingCells; // @synthesize itemIDsOfLeadingCells=_itemIDsOfLeadingCells;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) id <FCAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(copy, nonatomic) NSDictionary *catchUpOperationResultsBySectionDescriptor; // @synthesize catchUpOperationResultsBySectionDescriptor=_catchUpOperationResultsBySectionDescriptor;
- (void).cxx_destruct;
- (void)_fetchProtoitemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_extractFeedItemsFromInputs;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

