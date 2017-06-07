//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)_scriptNameForScriptIndex:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)allLanguages;
- (id)allScripts;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)arg1;
- (id)languagesForScript:(id)arg1;
- (unsigned int)orthographyFlags;
@property(readonly, copy) NSDictionary *languageMap;
@property(readonly, copy) NSString *dominantScript;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;

@end

