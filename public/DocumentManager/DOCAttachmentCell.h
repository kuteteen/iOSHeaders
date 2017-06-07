//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManager/NSTextAttachmentCell-Protocol.h>

@class NSString, NSTextAttachment;

@interface DOCAttachmentCell : NSObject <NSTextAttachmentCell>
{
    NSTextAttachment *_cellAttachment;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) NSTextAttachment *cellAttachment; // @synthesize cellAttachment=_cellAttachment;
- (void).cxx_destruct;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
