//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, _SFKeySpecifier;

@interface _SFKey : NSObject
{
    id _keyInternal;
    NSData *_keyData;
}

+ (id)_specifierForSecKey:(struct __SecKey *)arg1;
+ (Class)_attributesClass;
@property(readonly, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyDomain;
@property(readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
- (id)initRandomKeyWithSpecifier:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;

@end

