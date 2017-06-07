//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INParameter-Protocol.h>
#import <Intents/NSObject-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface INParameter : NSObject <INParameter, NSObject, NSSecureCoding>
{
    Class _parameterClass;
    NSString *_parameterKeyPath;
    NSMutableDictionary *_indexesForSubKeyPaths;
}

+ (_Bool)supportsSecureCoding;
+ (id)parameterForClass:(Class)arg1 keyPath:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *indexesForSubKeyPaths; // @synthesize indexesForSubKeyPaths=_indexesForSubKeyPaths;
@property(copy, nonatomic) NSString *parameterKeyPath; // @synthesize parameterKeyPath=_parameterKeyPath;
@property(retain, nonatomic) Class parameterClass; // @synthesize parameterClass=_parameterClass;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
@property(readonly, nonatomic) id parameterizedObject;
@property(readonly, nonatomic) id parameterValue;
- (id)_parameterValueForParameterizedObject:(id)arg1;
- (id)_sanitizedKeyPathForKeyPath:(id)arg1;
- (id)_valueOfObject:(id)arg1 forRemainingKeyPath:(id)arg2 inFullyQualifiedKeyPath:(id)arg3;
- (unsigned long long)indexForSubKeyPath:(id)arg1;
- (void)setIndex:(unsigned long long)arg1 forSubKeyPath:(id)arg2;
- (_Bool)isEqualToParameter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

