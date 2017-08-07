//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallDirectoryLabeledPhoneNumberEntryData.h>

#import <CallKit/NSCopying-Protocol.h>

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <NSCopying>
{
    NSMutableData *_mutablePhoneNumberData;
    NSMutableData *_mutableLabelData;
    NSMutableDictionary *_labelToLabelDataOffset;
}

@property(retain, nonatomic) NSMutableDictionary *labelToLabelDataOffset; // @synthesize labelToLabelDataOffset=_labelToLabelDataOffset;
@property(retain, nonatomic) NSMutableData *mutableLabelData; // @synthesize mutableLabelData=_mutableLabelData;
@property(retain, nonatomic) NSMutableData *mutablePhoneNumberData; // @synthesize mutablePhoneNumberData=_mutablePhoneNumberData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)appendPhoneNumber:(long long)arg1 label:(id)arg2;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

