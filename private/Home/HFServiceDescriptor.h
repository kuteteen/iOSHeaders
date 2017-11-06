//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAIdentifiable.h"

@class NSString;

@interface HFServiceDescriptor : NSObject <NAIdentifiable>
{
    HFServiceDescriptor *_parentServiceDescriptor;
    NSString *_serviceType;
    NSString *_serviceSubtype;
    CDUnknownBlockType _parentServiceDescriptorGenerator;
}

+ (id)na_identity;
@property(readonly, copy, nonatomic) CDUnknownBlockType parentServiceDescriptorGenerator; // @synthesize parentServiceDescriptorGenerator=_parentServiceDescriptorGenerator;
@property(readonly, copy, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) HFServiceDescriptor *parentServiceDescriptor; // @synthesize parentServiceDescriptor=_parentServiceDescriptor;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptor:(id)arg3;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptorGenerator:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

