//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, _MXExtensionProvider;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXExtensionServiceCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_extlock;
    NSDictionary *_extensions;
    NSDictionary *_mapsExtensions;
    NSDictionary *_containingAppProxies;
    _MXExtensionProvider *_extensionProvider;
}

@property(readonly, nonatomic) __weak _MXExtensionProvider *extensionProvider; // @synthesize extensionProvider=_extensionProvider;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *containingAppProxies;
@property(copy, nonatomic) NSDictionary *mapsExtensions;
@property(copy, nonatomic) NSDictionary *extensions;
- (id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1;
- (void)_clearExtensions;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)allExtensions;
- (void)receivedExtensions:(id)arg1 error:(id)arg2;
- (id)initWithExtensionProvider:(id)arg1;

@end

