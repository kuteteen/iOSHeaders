//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class DOMCSSStyleDeclaration, DOMNode, DOMRange, NSNotification, NSString, NSUndoManager, WebView;

@protocol WebEditingDelegate <NSObject>

@optional
- (NSUndoManager *)undoManagerForWebView:(WebView *)arg1;
- (void)webViewDidChangeSelection:(NSNotification *)arg1;
- (void)webViewDidChangeTypingStyle:(NSNotification *)arg1;
- (void)webViewDidEndEditing:(NSNotification *)arg1;
- (void)webViewDidChange:(NSNotification *)arg1;
- (void)webViewDidBeginEditing:(NSNotification *)arg1;
- (_Bool)webView:(WebView *)arg1 doCommandBySelector:(SEL)arg2;
- (_Bool)webView:(WebView *)arg1 shouldChangeTypingStyle:(DOMCSSStyleDeclaration *)arg2 toStyle:(DOMCSSStyleDeclaration *)arg3;
- (_Bool)webView:(WebView *)arg1 shouldApplyStyle:(DOMCSSStyleDeclaration *)arg2 toElementsInDOMRange:(DOMRange *)arg3;
- (_Bool)webView:(WebView *)arg1 shouldChangeSelectedDOMRange:(DOMRange *)arg2 toDOMRange:(DOMRange *)arg3 affinity:(int)arg4 stillSelecting:(_Bool)arg5;
- (_Bool)webView:(WebView *)arg1 shouldDeleteDOMRange:(DOMRange *)arg2;
- (_Bool)webView:(WebView *)arg1 shouldInsertText:(NSString *)arg2 replacingDOMRange:(DOMRange *)arg3 givenAction:(long long)arg4;
- (_Bool)webView:(WebView *)arg1 shouldInsertNode:(DOMNode *)arg2 replacingDOMRange:(DOMRange *)arg3 givenAction:(long long)arg4;
- (_Bool)webView:(WebView *)arg1 shouldEndEditingInDOMRange:(DOMRange *)arg2;
- (_Bool)webView:(WebView *)arg1 shouldBeginEditingInDOMRange:(DOMRange *)arg2;
@end

