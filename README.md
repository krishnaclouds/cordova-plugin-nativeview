---
title: NativeView
description: Starts native view from a cordova app.
---

# cordova-plugin-nativeview

Start or Back to a UIViewController(_ios_) or Activity(_Android_) relative to your cordova app.

You can use this in a standalone project (basic cordova project), or into a existing native _Android/IOS_ application, like described in [Embed Cordova in native apps](https://cordova.apache.org/docs/en/latest/guide/hybrid/webviews/index.html)

> **OBS:** If you wish just **EXIT** from cordova app or back to native view (Android only), use: `navigator['app'].exitApp()`

## Installation
    
```bash
cordova plugin add https://github.com/krishnaclouds/cordova-plugin-nativeview.git --save

# using IONIC
ionic cordova plugin add https://github.com/krishnaclouds/cordova-plugin-nativeview.git --save
```

## Methods

## NativeView.show(string packageOrClassName, string className)

Shows a native view.


**ANDROID**

```js

document.addEventListener("deviceready", function() {
    //  pass a package name and a activity by params
    cordova.plugins.NativeView.show('com.mycompany', 'MyActivity')
    .then(function() {
      
      /**
       * Do something when open the activity.
       * This code here will be executed in paralell,
       * not after open.
       */
    }).catch(function(error) {
        
        /**
         * error.success => Will be "false"
         * error.name => Exception type from the captured error 
         * error.message => A exception message
         */
    });
}, false);

```
**IOS**

```js

/*
*  Optionally, pass a storyboard name that contains
*  an UIViewController
*/
document.addEventListener("deviceready", function() {
    cordova.plugins.NativeView.show('MyStoryboard', 'MyUIViewController')
    .then(function() {
      
      /**
       * Do something when open the activity.
       * This code here will be executed in paralell,
       * not after open.
       */
    });

    /*
     *  Or, pass only the UIViewController name, if you don't
     *  use storyboards in your project.
     */
     cordova.plugins.NativeView.show('MyUIViewController');

     /*
     * Or just call the "show()" method without params.
     * This plugin will check whether exists a *"NavigationController" 
     * in your project, and execute
     * "[popViewControllerAnimated: Yes]" method. Else, will be throw a
     * exception
     * 
     */
     cordova.plugins.NativeView.show();

}, false);
```

**IONIC**

Replace `document.addEventListener` event to `this.platform.ready().then(...)` service method. See [IONIC Platform documentation](https://ionicframework.com/docs/api/platform/Platform/)
## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
