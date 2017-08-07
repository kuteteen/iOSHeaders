//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/UIItemProviderReading-Protocol.h>

@class NSArray, NSString;

@interface MFComposeRecipients : NSObject <UIItemProviderReading>
{
    NSArray *_recipients;
}

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (void).cxx_destruct;
- (id)initWithRecipients:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

