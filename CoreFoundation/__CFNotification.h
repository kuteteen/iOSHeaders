//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject <NSCopying>
{
    id _name;
    id _object;
    id _userInfo;
    _Bool _fouSemantics;
    _Bool _dyingObject;
}

- (void)dealloc;
- (id)initWithName:(struct __CFString *)arg1 object:(const void *)arg2 userInfo:(struct __CFDictionary *)arg3 foundation:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)userInfo;
- (id)object;
- (id)name;

@end

