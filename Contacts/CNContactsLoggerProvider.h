//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactsLoggerProvider-Protocol.h>

@class NSString;
@protocol CNContactsLogger, CNSpotlightIndexingLogger;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider>
{
    id <CNContactsLogger> _contactsLogger;
    id <CNSpotlightIndexingLogger> _spotlightIndexingLogger;
}

+ (id)defaultProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property(readonly, nonatomic) id <CNContactsLogger> contactsLogger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

