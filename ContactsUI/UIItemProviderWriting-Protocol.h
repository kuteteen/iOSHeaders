//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSItemProviderWriting-Protocol.h>

@class NSArray, NSProgress, NSString, UIItemProvider;

@protocol UIItemProviderWriting <NSItemProviderWriting>
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (NSArray *)writableTypeIdentifiersForItemProvider;
- (void)registerLoadHandlersToItemProvider:(UIItemProvider *)arg1;
@end

