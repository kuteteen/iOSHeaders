//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvar : NSObject
{
    NSString *_name;
    NSString *_typeDescription;
    id _value;
    NSObject *_object;
    struct objc_ivar *_objcIvar;
    const char *_typeEncoding;
}

+ (id)ivarWithObjcIvar:(struct objc_ivar *)arg1 forObject:(id)arg2;
@property(nonatomic) const char *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(nonatomic) struct objc_ivar *objcIvar; // @synthesize objcIvar=_objcIvar;
@property(nonatomic) NSObject *object; // @synthesize object=_object;
@property(nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isObject;
@property(readonly, nonatomic) NSString *valueDescription;

@end

