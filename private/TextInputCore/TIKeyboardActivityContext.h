//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIKeyboardActivityContext : NSObject
{
    unsigned long long _fromState;
    unsigned long long _toState;
    unsigned long long _excessMemoryInBytes;
}

+ (id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
@property(nonatomic) unsigned long long excessMemoryInBytes; // @synthesize excessMemoryInBytes=_excessMemoryInBytes;
@property(nonatomic) unsigned long long toState; // @synthesize toState=_toState;
@property(nonatomic) unsigned long long fromState; // @synthesize fromState=_fromState;

@end

