//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableArray, NSSet, NSURL;
@protocol NSXMLParserDelegate;

@interface NSXMLParser : NSObject
{
    id _reserved0;
    id _delegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    struct _xmlSAXHandler *_saxHandler;
    struct _xmlParserCtxt *_parserContext;
    unsigned long long _parserFlags;
    NSError *_error;
    NSMutableArray *_namespaces;
    struct __CFDictionary *_slowStringMap;
    _Bool _delegateAborted;
    _Bool _haveDetectedEncoding;
    NSData *_bomChunk;
    unsigned long long _chunkSize;
    NSSet *_allowedEntityURLs;
    NSURL *_url;
    unsigned long long _externalEntityResolvingPolicy;
}

+ (id)currentParser;
+ (void)setCurrentParser:(id)arg1;
- (void)_initializeSAX2Callbacks;
- (void)_popNamespaces;
- (void)_pushNamespaces:(id)arg1;
- (void)_setParserError:(long long)arg1;
- (void)_setExpandedParserError:(id)arg1;
- (void)dealloc;
- (long long)columnNumber;
- (long long)lineNumber;
- (id)systemID;
- (id)publicID;
@property(readonly, copy) NSError *parserError;
- (void)abortParsing;
- (_Bool)parse;
- (_Bool)parseFromStream;
- (_Bool)finishIncrementalParse;
- (_Bool)parseData:(id)arg1;
- (_Bool)_handleParseResult:(long long)arg1;
- (_Bool)shouldContinueAfterFatalError;
- (void)setShouldContinueAfterFatalError:(_Bool)arg1;
@property _Bool shouldResolveExternalEntities;
@property _Bool shouldReportNamespacePrefixes;
@property _Bool shouldProcessNamespaces;
- (struct _xmlParserInput *)_xmlExternalEntityWithURL:(const char *)arg1 identifier:(const char *)arg2 context:(struct _xmlParserCtxt *)arg3 originalLoaderFunction:(CDUnknownFunctionPointerType)arg4;
@property unsigned long long externalEntityResolvingPolicy;
@property(copy) NSSet *allowedExternalEntityURLs;
@property id <NSXMLParserDelegate> delegate;
- (id)initWithStream:(id)arg1;
- (id)initForIncrementalParsing;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;

@end

