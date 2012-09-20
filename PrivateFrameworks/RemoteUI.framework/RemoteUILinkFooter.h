/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIButton;

@interface RemoteUILinkFooter : UIView <RemoteUITableFooter> {
    UIButton *_linkButton;
    id _delegate;
}

@property(readonly) UIButton * linkButton;


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)linkButton;
- (void)_linkPressed;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (id)initWithAttributes:(id)arg1;

@end