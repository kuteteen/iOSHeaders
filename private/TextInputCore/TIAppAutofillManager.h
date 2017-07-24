//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSUUID;

@interface TIAppAutofillManager : NSObject
{
    NSUUID *_documentIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastKeyboardSync;
    NSDictionary *_queuedCustomInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *queuedCustomInfo; // @synthesize queuedCustomInfo=_queuedCustomInfo;
@property(retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync; // @synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync;
@property(retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration; // @synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration;
@property(retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration; // @synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration;
- (id)generateAutofillFormCandidatesWithSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 withKeyboardState:(id)arg3;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (id)getCredentialsWithApplicationIdentifier:(id)arg1;
- (id)customInfoFromCredential:(id)arg1;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (void)obtainCredential:(id)arg1;
- (void)dealloc;

@end
