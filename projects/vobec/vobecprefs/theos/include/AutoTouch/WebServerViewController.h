/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:24 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AutoTouch/WebFileResourceDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UILabel, HTTPServer, NSMutableArray;

@interface WebServerViewController : UIViewController <WebFileResourceDelegate, UIAlertViewDelegate> {

	UILabel* urlLabel;
	HTTPServer* httpServer;
	NSMutableArray* fileList;
	char _serverIsRunning;
	UILabel* _label;

}

@property (assign,nonatomic) char serverIsRunning;              //@synthesize serverIsRunning=_serverIsRunning - In the implementation block
@property (nonatomic,retain) UILabel * label;                   //@synthesize label=_label - In the implementation block
-(void)clickRightButton;
-(void)loadFileList;
-(id)filePathForFileName:(id)arg1 ;
-(int)numberOfFiles;
-(id)fileNameAtIndex:(int)arg1 ;
-(void)newFileDidUpload:(id)arg1 inTempPath:(id)arg2 ;
-(void)fileShouldDelete:(id)arg1 ;
-(char)serverIsRunning;
-(void)setServerIsRunning:(char)arg1 ;
-(void)didReceiveMemoryWarning;
-(UILabel *)label;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
@end

