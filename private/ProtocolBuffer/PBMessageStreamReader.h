//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSInputStream;

@interface PBMessageStreamReader : NSObject
{
    NSInputStream *_stream;
    Class _classOfNextMessage;
    unsigned long long _position;
}

@property(readonly) unsigned long long position; // @synthesize position=_position;
@property Class classOfNextMessage; // @synthesize classOfNextMessage=_classOfNextMessage;
- (id)nextMessage;
- (void)dealloc;
- (id)initWithStream:(id)arg1;

@end

