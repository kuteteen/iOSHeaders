//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallDirectoryEntryData-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding>
{
    NSData *_phoneNumberData;
    NSData *_labelData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *labelData; // @synthesize labelData=_labelData;
@property(retain, nonatomic) NSData *phoneNumberData; // @synthesize phoneNumberData=_phoneNumberData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const char *)utf8LabelAtIndex:(unsigned long long)arg1 length:(out unsigned short *)arg2;
- (long long)phoneNumberAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

