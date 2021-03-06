//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCOperation.h"

@class FCArticle, NUANFEndOfArticlePublisherOperationResult;

@interface NUANFEndOfArticlePublisherOperation : FCOperation
{
    CDUnknownBlockType _completion;
    FCArticle *_article;
    double _scale;
    NUANFEndOfArticlePublisherOperationResult *_result;
}

@property(retain, nonatomic) NUANFEndOfArticlePublisherOperationResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (struct CGSize)adjustSizeForNameImage:(id)arg1;
- (id)loadAndScaleImageFromFilePath:(id)arg1;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithArticle:(id)arg1 scale:(double)arg2;

@end

