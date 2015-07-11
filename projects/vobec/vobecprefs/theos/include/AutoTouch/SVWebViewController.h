/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:30 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIBarButtonItem, UIWebView, NSURL;

@interface SVWebViewController : UIViewController <UIWebViewDelegate> {

	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _forwardBarButtonItem;
	UIBarButtonItem* _refreshBarButtonItem;
	UIBarButtonItem* _stopBarButtonItem;
	UIBarButtonItem* _actionBarButtonItem;
	UIWebView* _webView;
	NSURL* _URL;

}

@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                 //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forwardBarButtonItem;              //@synthesize forwardBarButtonItem=_forwardBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshBarButtonItem;              //@synthesize refreshBarButtonItem=_refreshBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * stopBarButtonItem;                 //@synthesize stopBarButtonItem=_stopBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionBarButtonItem;               //@synthesize actionBarButtonItem=_actionBarButtonItem - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
-(void)updateToolbarItems;
-(void)goBackClicked:(id)arg1 ;
-(void)goForwardClicked:(id)arg1 ;
-(void)reloadClicked:(id)arg1 ;
-(void)stopClicked:(id)arg1 ;
-(UIBarButtonItem *)actionBarButtonItem;
-(UIBarButtonItem *)stopBarButtonItem;
-(UIBarButtonItem *)refreshBarButtonItem;
-(void)setForwardBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRefreshBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setStopBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setActionBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(void)dealloc;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)backBarButtonItem;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(UIWebView *)webView;
-(NSURL *)URL;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(UIBarButtonItem *)forwardBarButtonItem;
-(void)doneButtonClicked:(id)arg1 ;
-(void)actionButtonClicked:(id)arg1 ;
-(void)loadURL:(id)arg1 ;
@end

