//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@interface _MXExtensionObject : NSObject <NSSecureCoding>
{
}

+ (id)typeIdentifier;
+ (_Bool)supportsSecureCoding;
+ (void)load;
+ (void)registerTypeIdentifier;
+ (void)extensionObjectFromExtensionItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (Class)classForItemProvider:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)extensionItem;

@end

