//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, NTKUpNextElementAction, NTKUpNextElementContent;

@interface NTKUpNextElement : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    unsigned long long _interaction;
    NSString *_identifier;
    unsigned long long _privacyBehavior;
    NTKUpNextElementContent *_content;
    NTKUpNextElementContent *_idealizedContent;
    NTKUpNextElementContent *_lockedContent;
    NSArray *_relevanceProviders;
    NTKUpNextElementAction *_defaultAction;
}

@property(readonly, nonatomic) NTKUpNextElementAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;
@property(readonly, nonatomic) NTKUpNextElementContent *lockedContent; // @synthesize lockedContent=_lockedContent;
@property(readonly, nonatomic) NTKUpNextElementContent *idealizedContent; // @synthesize idealizedContent=_idealizedContent;
@property(readonly, nonatomic) NTKUpNextElementContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) unsigned long long privacyBehavior; // @synthesize privacyBehavior=_privacyBehavior;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long interaction; // @synthesize interaction=_interaction;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isNoContentElement;
- (void)setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 lockedContent:(id)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6 interaction:(unsigned long long)arg7 lockedContent:(id)arg8;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6 interaction:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;

@end

