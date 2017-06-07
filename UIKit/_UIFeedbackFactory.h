//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIFeedbackFactory : NSObject
{
    NSDictionary *_customFeedbacksArchiveContents;
    NSDictionary *_customDiscreteFeedbacks;
    NSDictionary *_customContinuousFeedbacks;
    NSString *_localIdentifier;
}

+ (id)sharedFactory;
@property(retain, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(retain, nonatomic) NSDictionary *customContinuousFeedbacks; // @synthesize customContinuousFeedbacks=_customContinuousFeedbacks;
@property(retain, nonatomic) NSDictionary *customDiscreteFeedbacks; // @synthesize customDiscreteFeedbacks=_customDiscreteFeedbacks;
@property(readonly, nonatomic) NSDictionary *customFeedbacksArchiveContents; // @synthesize customFeedbacksArchiveContents=_customFeedbacksArchiveContents;
- (void).cxx_destruct;
- (void)addLocalPatterns:(id)arg1;
- (void)performWithLocalIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)feedbackWithIdentifier:(id)arg1;
- (id)continuousFeedbackWithIdentifier:(id)arg1;
- (id)discreteFeedbackWithIdentifier:(id)arg1;
- (long long)_continuousFeedbackTypeFromIdentifier:(id)arg1;
- (id)_patternIdentifierFromIdentifier:(id)arg1;
- (_Bool)_customEventType:(unsigned long long *)arg1 andSystemSoundID:(unsigned int *)arg2 fromIdentifier:(id)arg3;
- (long long)_discreteFeedbackTypeFromIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *continuousFeedbackIdentifiers;
@property(readonly, nonatomic) NSArray *discreteFeedbackIdentifiers;
- (id)titleForFeedbackWithIdentifier:(id)arg1;
- (id)identifierForLocalPatternFeedbackWithName:(id)arg1;
- (id)identifierForPatternFeedbackWithFilename:(id)arg1;
- (id)identifierForContinuousFeedbackType:(long long)arg1;
- (id)identifierForCustomDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned int)arg2;
- (id)identifierForDiscreteFeedbackType:(long long)arg1;

@end

