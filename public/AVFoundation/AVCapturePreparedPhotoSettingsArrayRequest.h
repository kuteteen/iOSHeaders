//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject
{
    unsigned long long _requestID;
    NSArray *_photoSettingsArray;
    CDUnknownBlockType _completionHandler;
    _Bool _completed;
}

+ (id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(readonly) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly) NSArray *photoSettingsArray;
@property(readonly) unsigned long long requestID;
- (void)dealloc;
- (id)_initWithArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

