//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol UIItemProviderWriting;

@interface WebItemProviderRegistrationInfo : NSObject
{
    struct RetainPtr<id<UIItemProviderWriting>> _representingObject;
    struct RetainPtr<NSString> _typeIdentifier;
    struct RetainPtr<NSData> _data;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *typeIdentifier;
@property(readonly, nonatomic) id <UIItemProviderWriting> representingObject;
- (id)initWithRepresentingObject:(id)arg1 typeIdentifier:(id)arg2 data:(id)arg3;

@end
