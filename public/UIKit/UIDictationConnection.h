//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/AFDictationDelegate-Protocol.h>

@class AFDictationConnection, NSString;
@protocol UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

__attribute__((visibility("hidden")))
@interface UIDictationConnection : NSObject <AFDictationDelegate>
{
    _Bool _offlineOnly;
    id <UIDictationConnectionDelegate> _delegate;
    id <UIDictationConnectionTokenFilterProtocol> _tokenFilter;
    AFDictationConnection *_connection;
}

+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(CDUnknownBlockType)arg3;
+ (void)_updateFromGlobalOptions:(id)arg1;
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
+ (_Bool)dictationRestricted;
+ (void)cacheSupportedDictationLanguages;
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (_Bool)isDictationAvailable;
@property(nonatomic) _Bool offlineOnly; // @synthesize offlineOnly=_offlineOnly;
@property(retain, nonatomic) AFDictationConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <UIDictationConnectionTokenFilterProtocol> tokenFilter; // @synthesize tokenFilter=_tokenFilter;
@property(nonatomic) __weak id <UIDictationConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)preheat;
- (void)cancelSpeech;
- (void)stopSpeech;
- (void)stopSpeechWithoutAlert;
- (void)setSuppressStopAlert:(_Bool)arg1;
- (void)_startWithOptions:(id)arg1;
- (id)_initializeWithOptions:(id)arg1;
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;
- (void)start;
- (id)_createConnectionOptions;
- (id)_speechOptions:(id)arg1;
- (id)_dictationOptions:(id)arg1;
- (void)endSession;
- (float)averagePower;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;
- (void)restartDictation;
- (void)cancelAvailabilityMonitoring;
- (void)beginAvailabilityMonitoring;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

