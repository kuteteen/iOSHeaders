//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class NSXPCConnection;
@protocol NSObject;

@interface NSXPCCoder : NSCoder
{
    id <NSObject> _userInfo;
    id _reserved1;
}

+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2;
+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2;
@property(retain) id <NSObject> userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
- (id)init;
@property(readonly) NSXPCConnection *connection;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (_Bool)requiresSecureCoding;

@end

