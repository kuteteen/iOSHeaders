//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString;

@protocol INActivateCarSignalIntentExport <NSObject, JSExport>
@property(nonatomic) unsigned long long signals;
@property(copy, nonatomic) INSpeakableString *carName;
- (id)init;
@end

