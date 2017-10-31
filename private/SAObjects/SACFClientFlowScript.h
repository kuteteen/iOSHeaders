//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString, SACFScriptEncryptionParameters, SACFScriptUrlInformation;

@interface SACFClientFlowScript : SABaseAceObject
{
}

+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowScript;
@property(retain, nonatomic) SACFScriptUrlInformation *urlInformation;
@property(nonatomic) _Bool shouldSkipExecution;
@property(nonatomic) _Bool shouldCacheScript;
@property(copy, nonatomic) NSString *jsScriptIdentifier;
@property(copy, nonatomic) NSData *jsScriptChecksum;
@property(copy, nonatomic) NSString *jsScript;
@property(retain, nonatomic) SACFScriptEncryptionParameters *encryptionParameters;
@property(copy, nonatomic) NSData *compressedScript;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

