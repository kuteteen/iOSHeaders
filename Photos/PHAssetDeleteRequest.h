//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObjectDeleteRequest.h>

@interface PHAssetDeleteRequest : PHObjectDeleteRequest
{
    _Bool _clientEntitledToExpunge;
    _Bool _expunged;
}

@property(nonatomic, getter=isExpunged) _Bool expunged; // @synthesize expunged=_expunged;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;

@end

