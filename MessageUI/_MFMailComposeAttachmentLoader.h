//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject
{
    MFMailMessage *_message;
    id _content;
    _Bool _isDraft;
    _Bool _didLoadBestAlternative;
    CDUnknownBlockType _completionBlock;
}

- (void)loadAttachments;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(_Bool)arg3 didLoadBestAlternative:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

@end

