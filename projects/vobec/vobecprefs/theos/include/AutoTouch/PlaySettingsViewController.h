/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:24 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AutoTouch/AutoTouch-Structs.h>
#import <UIKit/UITableViewController.h>
#import <AutoTouch/ActivatorSettingsDelegate.h>

@class PlaySettings, UISwitch, UIStepper, UITextField, UILabel, NSString;

@interface PlaySettingsViewController : UITableViewController <ActivatorSettingsDelegate> {

	PlaySettings* _playSettings;
	char _inDB;
	UISwitch* playDirectlySwitchView;
	UIStepper* repeatCountStepper;
	UITextField* repeatCountTextField;
	UIStepper* repeatIntervalStepper;
	UILabel* repeatCountLabel;
	UILabel* repeatIntervalLabel;
	UILabel* repeatIntervalValueLabel;
	UILabel* playSpeedLabel;
	UILabel* playSpeedValueLabel;
	UIStepper* playSpeedStepper;
	NSString* _scriptTitle;

}

@property (nonatomic,retain) NSString * scriptTitle;              //@synthesize scriptTitle=_scriptTitle - In the implementation block
-(NSString *)scriptTitle;
-(void)viewTapped:(id)arg1 ;
-(void)repeatCountTextFieldEditingChanged;
-(void)stepperChanged:(id)arg1 ;
-(void)setScriptTitle:(NSString *)arg1 ;
-(void)activatorSettingsChanged:(char)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)done;
@end

