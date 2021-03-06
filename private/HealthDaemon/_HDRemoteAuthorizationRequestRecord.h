//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSString;

@interface _HDRemoteAuthorizationRequestRecord : NSObject
{
    _Bool _didRecieveShouldPrompt;
    _Bool _shouldPrompt;
    NSString *_bundleID;
    NSString *_hostAppName;
    NSError *_shouldPromptError;
    NSMutableArray *_records;
}

@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(copy, nonatomic) NSError *shouldPromptError; // @synthesize shouldPromptError=_shouldPromptError;
@property(copy, nonatomic) NSString *hostAppName; // @synthesize hostAppName=_hostAppName;
@property(nonatomic) _Bool shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(nonatomic) _Bool didRecieveShouldPrompt; // @synthesize didRecieveShouldPrompt=_didRecieveShouldPrompt;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)arg1;

@end

