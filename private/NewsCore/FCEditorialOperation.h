//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSError;

@interface FCEditorialOperation : FCOperation
{
    id <FCAppConfiguration> _appConfiguration;
    FCCloudContext *_context;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
    NSArray *_sectionGroups;
}

@property(copy) NSArray *sectionGroups; // @synthesize sectionGroups=_sectionGroups;
@property(copy) CDUnknownBlockType catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
- (void).cxx_destruct;
- (void)_checkShouldShowEditorialWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (void)enumerateEditorialSectionsByRecencyWithBlock:(CDUnknownBlockType)arg1;

@end

