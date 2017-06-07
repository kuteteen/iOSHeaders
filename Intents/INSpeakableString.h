//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INSpeakable-Protocol.h>
#import <Intents/INSpeakableStringExport-Protocol.h>

@class NSString;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable>
{
    NSString *_spokenPhrase;
    NSString *_pronunciationHint;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property(retain, nonatomic) NSString *spokenPhrase; // @synthesize spokenPhrase=_spokenPhrase;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)_effectiveNSStringValue;
- (id)initWithSpokenPhrase:(id)arg1;
- (id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

