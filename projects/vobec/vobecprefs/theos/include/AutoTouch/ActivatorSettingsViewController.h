/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:24 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libactivator.dylib/LASettingsViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol ActivatorSettingsDelegate;
@class NSString, NSMutableDictionary, NSArray, NSIndexPath, UITableView, ActivatorTrigger, NSObject;

@interface ActivatorSettingsViewController : LASettingsViewController <UIAlertViewDelegate> {

	NSString* _eventMode;
	NSMutableDictionary* _events;
	NSMutableDictionary* _compatibleEvents;
	NSArray* _groups;
	NSIndexPath* _lastCheckmarkIndexPath;
	UITableView* _theTableView;
	ActivatorTrigger* _activatorTrigger;
	NSObject*<ActivatorSettingsDelegate> _delegate;

}

@property (nonatomic,retain) ActivatorTrigger * activatorTrigger;                        //@synthesize activatorTrigger=_activatorTrigger - In the implementation block
@property (nonatomic,retain) NSObject*<ActivatorSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setActivatorTrigger:(ActivatorTrigger *)arg1 ;
-(void)doInit;
-(id)eventNameForRowAtIndexPath:(id)arg1 ;
-(ActivatorTrigger *)activatorTrigger;
-(void)showLastEventMessageForListener:(id)arg1 ;
-(id)initForControlPanel;
-(id)initForStartStopPlaying;
-(char)showsAd;
-(void)setDelegate:(NSObject*<ActivatorSettingsDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(NSObject*<ActivatorSettingsDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewDidLoad;
-(id)groupAtIndex:(int)arg1 ;
@end

