//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNEncodedFetchCursor-Protocol.h>

@class CNContactFetchRequest, CNContactsEnvironment;
@protocol CNEncodedFetchCursor;

__attribute__((visibility("hidden")))
@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor>
{
    void *_addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    CDUnknownBlockType _completionHandler;
    id <CNEncodedFetchCursor> _cursor;
}

@property(readonly, nonatomic) id <CNEncodedFetchCursor> cursor; // @synthesize cursor=_cursor;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) CNContactFetchRequest *contactFetchRequest; // @synthesize contactFetchRequest=_contactFetchRequest;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (void)fetchNextBatchWithReply:(CDUnknownBlockType)arg1;
- (_Bool)fetchEncodedPeopleWithError:(id *)arg1 batchHandler:(CDUnknownBlockType)arg2;
- (id)cursorWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void *)arg2 completionHandler:(CDUnknownBlockType)arg3 environment:(id)arg4;

@end

