//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SecurityFoundation/_SFPublicKey.h>

@class _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey
{
    id _ecPublicKeyInternal;
}

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey *)arg1;
- (void).cxx_destruct;
- (id)performWithCCKey:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier; // @dynamic keySpecifier;

@end

