//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject
{
    MPPropertySet *_requestedPropertySet;
}

+ (id)allSupportedProperties;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (void).cxx_destruct;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (id)initWithRequestedPropertySet:(id)arg1;

@end

