//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import "SXClassFactoryProtocol.h"

@class NSString;

@interface SXComponentBehavior : SXJSONObject <SXClassFactoryProtocol>
{
}

+ (id)typeString;
+ (void)initializeObject;
- (Class)handlerClassForComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end

