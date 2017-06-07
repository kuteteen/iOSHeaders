//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKExtensionProvider : NSObject
{
    _Bool _didReceiveExtensions;
    id _matchingContext;
    NSDictionary *_extensions;
    NSDictionary *_passKitExtensions;
    NSObject<OS_dispatch_queue> *_extensionQueue;
    NSObject<OS_dispatch_semaphore> *_extensionSema;
}

+ (id)sharedProvider;
@property(nonatomic) _Bool didReceiveExtensions; // @synthesize didReceiveExtensions=_didReceiveExtensions;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *extensionSema; // @synthesize extensionSema=_extensionSema;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionQueue; // @synthesize extensionQueue=_extensionQueue;
@property(retain, nonatomic) NSDictionary *passKitExtensions; // @synthesize passKitExtensions=_passKitExtensions;
@property(retain, nonatomic) NSDictionary *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
- (void).cxx_destruct;
- (void)_receivedExtensions:(id)arg1;
- (void)_beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_beginRemoteViewControllerExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensions;
- (id)_extensionWithIdentifier:(id)arg1;
- (void)extensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)extensionWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allExtensions;
- (void)dealloc;
- (id)init;

@end

