//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString;

@interface SiriCoreLocalSpeechUserData : NSObject <NSSecureCoding>
{
    NSString *_language;
    NSArray *_contactsWords;
    NSArray *_appNames;
    NSDictionary *_interactionSenderDisplayNames;
    NSDictionary *_searchEventValues;
    NSArray *_locationOfInterestNames;
    NSArray *_locationOfInterestSpokenNames;
    NSArray *_spatialLocationOfInterestNames;
    NSArray *_spatialLocationOfInterestSpokenNames;
    NSArray *_eventTitles;
    NSArray *_eventLocationNames;
    NSDictionary *_keyboardLMDynamicVocabularyItems;
    NSArray *_pexNamedEntityNames;
    NSArray *_corrections;
}

+ (_Bool)supportsSecureCoding;
+ (void)fetchUserDataWithLanguage:(id)arg1 keepGoing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fetchUserDataWithLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *corrections; // @synthesize corrections=_corrections;
@property(readonly, copy, nonatomic) NSArray *pexNamedEntityNames; // @synthesize pexNamedEntityNames=_pexNamedEntityNames;
@property(readonly, copy, nonatomic) NSDictionary *keyboardLMDynamicVocabularyItems; // @synthesize keyboardLMDynamicVocabularyItems=_keyboardLMDynamicVocabularyItems;
@property(readonly, copy, nonatomic) NSArray *eventLocationNames; // @synthesize eventLocationNames=_eventLocationNames;
@property(readonly, copy, nonatomic) NSArray *eventTitles; // @synthesize eventTitles=_eventTitles;
@property(readonly, copy, nonatomic) NSArray *spatialLocationOfInterestSpokenNames; // @synthesize spatialLocationOfInterestSpokenNames=_spatialLocationOfInterestSpokenNames;
@property(readonly, copy, nonatomic) NSArray *spatialLocationOfInterestNames; // @synthesize spatialLocationOfInterestNames=_spatialLocationOfInterestNames;
@property(readonly, copy, nonatomic) NSArray *locationOfInterestSpokenNames; // @synthesize locationOfInterestSpokenNames=_locationOfInterestSpokenNames;
@property(readonly, copy, nonatomic) NSArray *locationOfInterestNames; // @synthesize locationOfInterestNames=_locationOfInterestNames;
@property(readonly, copy, nonatomic) NSDictionary *searchEventValues; // @synthesize searchEventValues=_searchEventValues;
@property(readonly, copy, nonatomic) NSDictionary *interactionSenderDisplayNames; // @synthesize interactionSenderDisplayNames=_interactionSenderDisplayNames;
@property(readonly, copy, nonatomic) NSArray *appNames; // @synthesize appNames=_appNames;
@property(readonly, copy, nonatomic) NSArray *contactsWords; // @synthesize contactsWords=_contactsWords;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_fetchEventKitWithKeepGoing:(CDUnknownBlockType)arg1;
- (void)_fetchCorrectionsWithKeepGoing:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchDynamicKeyboardLanguageModelWithKeepGoing:(CDUnknownBlockType)arg1;
- (void)_fetchCoreRoutineWithKeepGoing:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchCoreDuetSearchEventsWithKeepGoing:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchCoreDuetInteractionsWithKeepGoing:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchAppsWithKeepGoing:(CDUnknownBlockType)arg1;
- (void)_fetchPEXWithKeepGoing:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchContactsWithKeepGoing:(CDUnknownBlockType)arg1;
- (id)_initWithLanguage:(id)arg1;

@end

