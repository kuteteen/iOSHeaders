//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICLegacyContentUtilities : NSObject
{
}

+ (id)newNoteBasedOnModernNote:(id)arg1 inFolder:(id)arg2 context:(struct NoteContext *)arg3;
+ (id)createAttachmentFromWebResource:(id)arg1 inContext:(struct NoteContext *)arg2;
+ (id)createAttachmentWithContentID:(id)arg1 mimeType:(id)arg2 data:(id)arg3 filename:(id)arg4 inContext:(struct NoteContext *)arg5;
+ (id)generateContentID;
+ (id)suggestedFilenameForURL:(id)arg1 mimeType:(id)arg2;
+ (id)contentStringFromWebArchive:(id)arg1;

@end
