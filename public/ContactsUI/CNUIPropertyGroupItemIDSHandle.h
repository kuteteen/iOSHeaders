//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIIDSHandle.h"

@class CNPropertyGroupItem, CNUIContactPropertyIDSHandle, NSString;

__attribute__((visibility("hidden")))
@interface CNUIPropertyGroupItemIDSHandle : NSObject <CNUIIDSHandle>
{
    CNPropertyGroupItem *_propertyGroupItem;
    CNUIContactPropertyIDSHandle *_contactPropertyHandle;
}

+ (_Bool)supportsPropertyGroupItem:(id)arg1;
@property(readonly, nonatomic) CNUIContactPropertyIDSHandle *contactPropertyHandle; // @synthesize contactPropertyHandle=_contactPropertyHandle;
@property(readonly, copy, nonatomic) CNPropertyGroupItem *propertyGroupItem; // @synthesize propertyGroupItem=_propertyGroupItem;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *_cnui_IDSIDRepresentation;
- (id)initWithPropertyGroupItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

