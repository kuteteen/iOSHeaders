//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <NotesUI/TTAttachment-Protocol.h>

@class ICAttachment, NSString;

@interface ICBaseTextAttachment : NSTextAttachment <TTAttachment>
{
    ICAttachment *_attachment;
}

@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (id)attachmentIdentifier;
- (_Bool)isEqualToModelComparable:(id)arg1;
- (id)printableTextContent;
- (id)attachmentAttributesForAttributedString;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(_Bool)arg3;
- (double)viewCornerRadius;
- (_Bool)usesTextAttachmentView;
- (_Bool)allowsTextAttachmentView;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (_Bool)canDragWithoutSelecting;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

