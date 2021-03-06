//
//  DiffWindowController.h
//  CocoaRestClient
//
//  Created by Mike Mattozzi on 9/14/17.
//
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class MainWindowController;

@interface DiffWindowController : NSWindowController

@property (weak) IBOutlet NSPopUpButton *diffSourceLeft;
@property (weak) IBOutlet NSPopUpButton *diffSourceRight;
@property (weak) IBOutlet WKWebView *diffView;
@property (weak) NSArray<MainWindowController *> * windows;

- (void) setup:(NSArray<MainWindowController *> *)openWindows;
- (IBAction) updateDiff:(id)sender;
- (IBAction) clearDiff:(id)sender;

@end
