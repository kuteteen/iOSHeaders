//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface HMFClassRegistry : HMFObject
{
    NSMutableDictionary *_classes;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    Class _defaultClass;
}

@property(readonly) Class defaultClass; // @synthesize defaultClass=_defaultClass;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (void)setClass:(Class)arg1 forKey:(id)arg2;
- (Class)classForKey:(id)arg1;
- (id)initWithDefaultClass:(Class)arg1;
- (id)init;

@end

