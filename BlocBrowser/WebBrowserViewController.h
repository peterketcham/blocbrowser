//
//  WebBrowserViewController.h
//  BlocBrowser
//
//  Created by Peter Ketcham on 6/5/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebBrowserViewController : UIViewController

/* Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately. */

- (void) resetWebView;

@end
