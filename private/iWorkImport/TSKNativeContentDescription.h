//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKNativeContentDescription : TSPObject
{
    NSString *_appName;
    NSString *_appVersion;
    NSString *_documentId;
    NSArray *_drawableDescriptions;
}

- (void).cxx_destruct;
- (void)saveToArchive:(struct NativeContentDescription *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct NativeContentDescription *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)description;
@property(copy, nonatomic) NSArray *drawableDescriptions;
@property(copy, nonatomic) NSString *documentId;
@property(copy, nonatomic) NSString *appVersion;
@property(copy, nonatomic) NSString *appName;

@end

