//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSArray;

@protocol INStartAudioCallIntentExport <NSObject, JSExport>
@property(nonatomic, setter=setTTYType:) long long ttyType;
@property(copy, nonatomic) NSArray *contacts;
@property(nonatomic) long long preferredCallProvider;
@property(nonatomic) long long destinationType;
@property(nonatomic) long long audioRoute;
- (id)init;
@end

