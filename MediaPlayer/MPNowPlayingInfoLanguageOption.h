//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MPNowPlayingInfoLanguageOption : NSObject
{
    void *_mrLanguageOption;
}

@property(readonly, nonatomic) void *mrLanguageOption; // @synthesize mrLanguageOption=_mrLanguageOption;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSArray *languageOptionCharacteristics; // @dynamic languageOptionCharacteristics;
@property(readonly, nonatomic) NSString *languageTag; // @dynamic languageTag;
@property(readonly, nonatomic) unsigned long long languageOptionType; // @dynamic languageOptionType;
- (_Bool)isAutomaticAudibleLanguageOption;
- (_Bool)isAutomaticLegibleLanguageOption;
- (id)initWithMRLanguageOption:(void *)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;

@end

