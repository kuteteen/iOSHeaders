//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

__attribute__((visibility("hidden")))
@interface MTLBuiltInArgument : MTLArgumentInternal
{
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}

- (unsigned long long)builtInType;
- (unsigned long long)builtInDataType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(_Bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7;

@end

