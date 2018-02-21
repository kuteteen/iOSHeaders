//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAKView.h"

#import "WebCoreFrameView.h"

@class WAKView<WebDocumentView>, WebFrame, WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView>
{
    WebFrameViewPrivate *_private;
}

+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(_Bool)arg2;
+ (_Bool)_canShowMIMETypeAsHTML:(id)arg1;
+ (id)_viewTypesAllowImageTypeOmission:(_Bool)arg1;
- (void)printDocumentView;
@property(readonly, nonatomic) _Bool documentViewShouldHandlePrint;
- (id)_webcore_effectiveFirstResponder;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_forwardMouseEvent:(id)arg1;
- (_Bool)_firstResponderIsFormControl;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (_Bool)_scrollLineHorizontally:(_Bool)arg1;
- (_Bool)_scrollLineVertically:(_Bool)arg1;
- (_Bool)_pageInBlockProgressionDirection:(_Bool)arg1;
- (_Bool)_pageHorizontally:(_Bool)arg1;
- (_Bool)_pageVertically:(_Bool)arg1;
- (float)_horizontalPageScrollDistance;
- (float)_horizontalKeyboardScrollDistance;
- (_Bool)_scrollHorizontallyBy:(float)arg1;
- (_Bool)_scrollVerticallyBy:(float)arg1;
- (void)_goForward;
- (void)_goBack;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (_Bool)_scrollToEndOfDocument;
- (_Bool)_scrollToBeginningOfDocument;
- (_Bool)_isFlippedDocument;
- (_Bool)_isVerticalDocument;
- (_Bool)_scrollOverflowInDirection:(unsigned char)arg1 granularity:(unsigned char)arg2;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)visibleRect;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isOpaque;
- (void)setNextKeyView:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)acceptsFirstResponder;
@property(readonly, nonatomic) WAKView<WebDocumentView> *documentView;
@property(nonatomic) _Bool allowsScrolling;
@property(readonly, nonatomic) WebFrame *webFrame;
- (_Bool)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
-     // Error parsing type: ^{Frame=^^?{atomic<unsigned int>=AI}{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}IIII}}^{MainFrame}^{Page}{RefPtr<WebCore::Settings, WTF::DumbPtrTraits<WebCore::Settings> >=^{Settings}}{FrameTree=^{Frame}^{Frame}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}I}{UniqueRef<WebCore::FrameLoader>={unique_ptr<WebCore::FrameLoader, std::__1::default_delete<WebCore::FrameLoader> >={__compressed_pair<WebCore::FrameLoader *, std::__1::default_delete<WebCore::FrameLoader> >=^{FrameLoader}}}}{UniqueRef<WebCore::NavigationScheduler>={unique_ptr<WebCore::NavigationScheduler, std::__1::default_delete<WebCore::NavigationScheduler> >={__compressed_pair<WebCore::NavigationScheduler *, std::__1::default_delete<WebCore::NavigationScheduler> >=^{NavigationScheduler}}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView, WTF::DumbPtrTraits<WebCore::FrameView> >=^{FrameView}}{RefPtr<WebCore::Document, WTF::DumbPtrTraits<WebCore::Document> >=^{Document}}{UniqueRef<WebCore::ScriptController>={unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> >={__compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> >=^{ScriptController}}}}{UniqueRef<WebCore::Editor>={unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> >={__compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> >=^{Editor}}}}{UniqueRef<WebCore::FrameSelection>={unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> >={__compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> >=^{FrameSelection}}}}{UniqueRef<WebCore::CSSAnimationController>={unique_ptr<WebCore::CSSAnimationController, std::__1::default_delete<WebCore::CSSAnimationController> >={__compressed_pair<WebCore::CSSAnimationController *, std::__1::default_delete<WebCore::CSSAnimationController> >=^{CSSAnimationController}}}}{RetainPtr<NSArray>=^v}{Timer=^^?{MonotonicTime=d}{MonotonicTime=d}{Seconds=d}iIB^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>}{Ref<WTF::Thread, WTF::DumbPtrTraits<WTF::Thread> >=^{Thread}}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}}f{IntPoint=ii}{ViewportArguments=iffffffffffffiB}B{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}ffiBB{UniqueRef<WebCore::EventHandler>={unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> >={__compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> >=^{EventHandler}}}}}16@0:8, name: _web_frame
- (float)_verticalKeyboardScrollDistance;
- (void)_frameSizeChanged;
- (void)_install;
- (Class)_viewClassForMIMEType:(id)arg1;
- (float)_verticalPageScrollDistance;
- (id)_scrollView;
- (void)_setWebFrame:(id)arg1;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (void)_setDocumentView:(id)arg1;
- (id)_webView;
- (Class)_customScrollViewClass;
- (id)_contentView;
- (id)_largestChildWithScrollBars;
- (_Bool)_hasScrollBars;
- (id)_largestScrollableChild;
- (_Bool)_isScrollable;
- (float)_area;
- (void)frameSizeChanged;

@end

