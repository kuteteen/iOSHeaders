//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXUIClientDelegate.h"

@class NSString;

@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate>
{
    _Bool _inSession;
    CDUnknownBlockType _resultCallback;
}

- (void).cxx_destruct;
- (void)cancelPronunciationSession;
- (void)stopPronunciationSession;
- (void)startPronunciationSession:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
- (float)audioLevel;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)supportsPronunciationSessions;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)_speechAssetUpdaterClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

