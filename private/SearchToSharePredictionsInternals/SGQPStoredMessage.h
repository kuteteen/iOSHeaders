//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SGQPWordBoundaries;

@interface SGQPStoredMessage : NSObject
{
    _Bool _isSent;
    NSString *_uniqueIdentifier;
    NSString *_content;
    double _creationTimestamp;
    SGQPWordBoundaries *_wordBoundaries;
}

+ (id)messageWithContent:(id)arg1 isSent:(_Bool)arg2 creationTimestamp:(double)arg3;
+ (id)messageWithContent:(id)arg1 isSent:(_Bool)arg2;
+ (id)messageWithUniqueIdentifier:(id)arg1 content:(id)arg2 isSent:(_Bool)arg3 creationTimestamp:(double)arg4;
+ (id)phoneOrEmailFromConversationId:(id)arg1;
+ (id)transcriptFromMessages:(id)arg1;
+ (id)transcriptFromMessages:(id)arg1 limit:(unsigned long long)arg2;
+ (id)uniqueIdentifiersFromMessages:(id)arg1;
+ (id)sortByCreationDesc:(id)arg1;
@property(readonly, nonatomic) SGQPWordBoundaries *wordBoundaries; // @synthesize wordBoundaries=_wordBoundaries;
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isMostRecentSentMessageInMessages:(id)arg1;
- (_Bool)isMostRecentReceivedMessageInMessages:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 content:(id)arg2 isSent:(_Bool)arg3 creationTimestamp:(double)arg4;
- (id)init;

@end
