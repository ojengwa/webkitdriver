/*
Copyright 2007-2009 WebDriver committers
Copyright 2007-2009 Google Inc.
Portions copyright 2007 ThoughtWorks, Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*
 * Copyright 2007 ThoughtWorks, Inc
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

package org.openqa.selenium.webkit;

public interface WebKitInterface {

  /**
   * Delete cookie with name for current document.
   * Delete all cookies for current document if name is empty.
   * Delete all cookies for all documents if ref is null.
   *
   * @param ref - reference to WebDriver instance
   * @return
   */
  public long deleteCookie(long ref, String cName);

  /**
   * Set all cookies in internal format for current document.
   *
   * @param cookies - cookie string in internal format
   * @param ref - reference to WebDriver instance
   * @return
   */
  public long setCookieJar(long ref, String cookies);

  /**
   * Get all cookies in internal format for current document.
   * Get all cookies in internal format for all documents if ref is null.
   *
   * @param ref - reference to WebDriver instance
   * @return - all cookies in internal format
   */
  public String getCookieJar(long ref);

  /**
   * Set cookies for current document.
   *
   * @param cookies - string with all appended cookies
   * @param ref     - reference to WebDriver instance
   * @return
   */
  public long setCookie(long ref, String cookies);

  /**
   * Get cookies of current document.
   *
   * @param ref - reference to WebDriver instance
   * @return    - string with all appended cookies
   */
  public String cookies(long ref);

  /**
   * Go to previous element in browse history.
   *
   * @param ref - reference to WebDriver instance
   * @return
   */
  public long goBack(long ref);

  /**
   * Go to next element in browse history.
   *
   * @param ref - reference to WebDriver instance
   * @return
   */
  public long goForward(long ref);

  /**
   * Reload current document.
   *
   * @param ref - reference to WebDriver instance
   * @return
   */
  public long refresh(long ref);

  /**
   * for getting ref to Document
   *
   * @param inObj - controller reference
   * @return ref on Document instance
   */
  public long getDocument(long ref);

  /**
   * Document.cpp
   *
   * @param ref - reference to document
   * @param query - id
   * @return reference to Element instance
   */
  public long getElementById(long ref, String query);

  /**
   * Node.cpp
   *
   * @param ref - reference to Node
   * @param query - tagName
   * @return reference to NodeList instance
   */
  public long getElementsByTagName(long ref, String query);

  /**
   * Node.cpp
   *
   * @param ref - reference to Node
   * @param query - tagName
   * @return reference to NodeList instance
   */
  public long getElementsByName(long ref, String query);

  /**
   * Node.cpp
   *
   * @param ref - reference to Node
   * @param query - tagName
   * @return reference to NodeList instance
   */
  public long getElementsByXpath(long ref, String query);

  /**
   * Get single element by CSS selector
   * @param ref - reference to Node
   * @param selector - CSS selector
   * @return reference to Node instance
   */
  public long getElementByCssSelector(long ref, String selector);

  /**
   * Get elements by CSS selector
   * @param ref - reference to Node
   * @param selector - CSS selector
   * @return reference to NodeList instance
   */
  public long getElementsByCssSelector(long ref, String selector);

  /**
   * NodeList.cpp
   *
   * @param ref - reference to NodeList
   * @return size of NodeList
   */
  public long nodeListLength(long ref);

  /**
   * NodeList.cpp
   *
   * @param ref - reference to NodeList
   * @return size of NodeList
   */
  public long nodeListGet(long ref, int i);

  /**
   * Release NodeList after it is not needed anymore
   *
   * @param ref - reference to NodeList
   * @return size of NodeList
   */
  public long nodeListRelease(long ref);

  /**
   * Element.cpp
   *
   * @param ref - reference to Element instance
   * @return
   */
  public String getTagName(long ref);

  /**
   * Element.cpp
   *
   * @param ref - reference to Element instance
   * @return
   */
  public String getAttribute(long ref, String name);

  /**
   * Element.cpp
   *
   * @param ref - reference to Element instance
   * @param name - property name
   * @return property value
   */
  public String getProperty(long ref, String name);

  /**
   * Element.cpp
   *
   * @param ref - reference to Element instance
   * @return
   */
  public String getText(long ref);

  /**
   * InputElement.cpp
   *
   * @param ref - reference
   * @return
   */
  public String getValue(long ref);

  /**
   * Send keys
   *
   * @param ref - reference
   * @return
   */
  public long sendKeys(long ref, String val);

  /**
   * InputElement.cpp
   *
   * @param ref - reference
   * @return
   */
  public long setValue(long ref, String val);

  /**
   * Get current frame title
   *
   * @param ref - reference to WebKitDriver
   * @return frame title
   */
  public String getTitle(long ref);

  /**
   * Get DOM object structure (in HTML)
   *
   * @param ref - reference to WebKitDriver
   * @return dom tree
   */
  public String getDOMDump(long ref);

  /**
   * Get page source
   *
   * @param ref - reference to WebKitDriver
   * @return page source as HTML
   */
  public String getPageSource(long ref);

  /**
   * Get current frame URL
   *
   * @param ref - reference to WebKitDriver
   * @return frame URL
   */
  public String getUrl(long ref);

  /**
   * Create instance of WebKitDriver
   *
   * @param userAgent - user agent string to use
   * @return ref on Document instance
   */
  public long create(String userAgent);

  /**
   * Destroys instance of WebKitDriver
   *
   * @param ref - reference to WebKitDriver
   * @return 1 - destroyed correctly, 0 - empty ref passed
   */
  public long destroy(long ref);

  /**
   * Load URL
   *
   * @param ref - reference to WebKitDriver
   * @param query - URL to load
   * @return ref on Document instance
   */
  public long get(long ref, String query);

  /**
   * Click on input element
   *
   * @param ref - reference to DOM element
   * @return success or not
   */
  public long click(long ref);

  /**
   * Reset input element to default value
   *
   * @param ref - reference to DOM element
   * @return success or not
   */
  public long reset(long ref);

  /**
   * Submit a form
   *
   * @param ref - reference to DOM element
   * @return success or not
   */
  public long submit(long ref);

  /**
   * Toggle checkbox of selection option
   *
   * @param ref - reference to DOM element
   * @return current state, -1 in case of error
   */
  public long toggle(long ref);

  /**
   * Check if element is selected
   *
   * @param ref - reference to DOM element
   * @return 1 - selected, 0 - not selected, -1 - error
   */
  public long selected(long ref);

  /**
   * Make element selected
   *
   * @param ref - reference to DOM element
   * @return 0 - OK, -1 in case of error
   */
  public long setSelected(long ref);

  /**
   * Get option element index
   *
   * @param ref - reference to DOM element
   * @return index starting with 0, -1 in case of error
   */
  public long optionIndex(long ref);

  /**
   * Get active element
   *
   * @param ref - reference to WebKitDriver object
   * @return reference to active element
   */
  public long activeElement(long ref);

  /**
   * Select frame by name
   *
   * @param ref - reference to WebKitDriver object
   * @param name - frame name
   * @return 1 - success, 0 - failure
   */
  public long selectFrameByName(long ref, String name);

  /**
   * Select frame by idx
   *
   * @param ref - reference to WebKitDriver object
   * @param name - frame idx
   * @return 1 - success, 0 - failure
   */
  public long selectFrameByIdx(long ref, long idx);

  /**
   * Select window by name
   *
   * @param ref - reference to WebKitDriver object
   * @param name - window name
   * @return refernece to page controller object, 0 if not found
   */
  public long selectWindow(long ref, String name);

  /**
   * Get current window handle
   *
   * @param ref - reference to WebKitDriver object
   * @return current window handle
   */
  public String getWindowHandle(long ref);

  /**
   * Get all window handles
   *
   * @return string of comma-separated windows handles
   */
  public String getAllWindowHandles();

  /**
   * Select main frame
   *
   * @param ref - reference to WebKitDriver object
   * @return 1 - success, 0 - failure
   */
  public long defaultContent(long ref);

  /**
   * Move focus on the element
   *
   * @param ref - reference to DOM element to focus
   * @return 0 if element can not be focused, 1 otherwise
   */
  public long focus(long ref);

  /**
   * Drag element
   *
   * @param ref - reference to DOM element to drag
   * @param toX, toY - end cordinates
   * @param duration - operation duration in ms
   * @return
   */
  public long drag(long ref, int toX, int toY, int duration);

  /**
   * Get enable/disable JS status
   *
   * @param ref - reference to controller
   * @return JS enabled status
   */
  public boolean isJavascriptEnabled(long ref);

  /**
   * Enable/disable JS
   *
   * @param ref - reference to controller
   * @param enabled - enable/disable script
   */
  public void setJavascriptEnabled(long ref, boolean enabled);

  /**
   * Evaluating Java Script
   *
   * @param ref - Reference to WebDriver
   * @param script - Java Script to evaluate
   * @return reference on JS Value
   */
  public Object evaluateJS (Object driver, long ref, Object[] arguments);

  /**
   * Check if element is stale
   *
   * @param ref - reference to DOM element
   * @return 1 - stale, 0 - not stale, -1 error
   */
  public long stale(long ref);

  /**
   * Check if element is visible
   *
   * @param ref - reference to DOM element
   * @return boolean
   */
  public boolean isVisible(long ref);

  /**
   * Get's actual element size (from renderer)
   *
   * @param ref - reference to DOM element
   * @return Rectangle
   */
  public Object getRect(long ref);

  /**
   * Get text of current alert message
   *
   * @param ref - reference to WebKitDriver object
   * @param clr - clear alert status
   * @return Alert text or null
   */
  public String getAlertText(long ref, boolean clr);

  /**
   * Get Geolocation
   *
   * @param ref - reference to WebKitDriverObject
   * @return return object GeoLocation
   */
  public Object getPosition(long ref);

  /**
   * Helper function set new Geolocation in Client Controller
   *
   * @param ref - reference to WebKitDriverObject
   * @param location - new Geolocation
   * @return return object GeoLocation
   */
  public void setPosition(long ref, Object location);

  /**
   * Check if network state is online
   *
   * @return 1 - selected, 0 - not selected, -1 - error
   */
  public long online();

  /**
   * Set current network state
   *
   * @param online - true if new state is online, false otherwise
   * @return 0 - OK, -1 in case of error
   */
  public long setOnline(boolean online);

  /**
   * Check is media/codec supported for HTMLMediaElement
   *
   * @param ref - reference to HTMLMediaElement
   * @param contentType - string with content media type and codec info
   * @return true - content type may be played
   */
  public boolean canPlayType(long ref, String contentType);

  /**
   * Do play/pause for HTMLMediaElement
   *
   * @param ref - reference to HTMLMediaElement
   * @param doPlay - perform pause() for false and play() for true
   * @return true - content type may be played
   */
  public void mediaPlay(long ref, boolean doPlay);

  /**
   * Get application cache status
   *
   * @param ref - reference to controller
   * @return WebKit status of application cache
   */
  public int getAppCacheStatus(long ref);

  /**
   * Get application cache entries
   *
   * @param ref - reference to controller
   * @return list of cache elements
   */
  public Object getAppCache(long ref);

  /**
   * Execute SQL script
   *
   * @param ref - reference to controller
   * @param dbref - reference to database
   * @param query - sql query to execute
   * @param arguments - array of arguments for sql query, they should match ? in it
   * @return result of query execution
   */
  public Object executeSQL(long ref, long dbref, String query, Object[] arguments);

  /**
   * Open database
   *
   * @param ref - reference to controller
   * @param name - Database name
   * @param version - Database version, this is binding parameter if DB version does not match error will occure
   * @param diaplayName - human readable name for Database
   * @param ref - reference to controller
   * @return reference to opened database
   */
  public long openDatabase(long ref, String name, String version, String displayName, long size);

  /**
   * Close database
   *
   * @param ref - reference to controller
   */
  public void closeDatabase(long ref);

  /**
   * Get number of entries in DOM storage
   *
   * @param ref - reference to controller
   * @param sesson - true for session storage, false for local storage
   * @return numner of items in a session or local storage, -1 in case of error
   */
  public long storageLength(long ref, boolean session);

  /**
   * Clear DOM storage
   *
   * @param ref - reference to controller
   * @param sesson - true for session storage, false for local storage
   * @return true on success, false otherwise
   */
  public boolean storageClear(long ref, boolean session);

  /**
   * Get DOM storage key by index
   *
   * @param ref - reference to controller
   * @param sesson - true for session storage, false for local storage
   * @param idx - key index
   * @return key name
   */
  public String storageKey(long ref, boolean session, long idx);

  /**
   * Get DOM storage value by key
   *
   * @param ref - reference to controller
   * @param sesson - true for session storage, false for local storage
   * @param key - key name
   * @return value for a given key
   */
  public String storageGetValue(long ref, boolean session, String key);

  /**
   * Set DOM storage value
   *
   * @param ref - reference to controller
   * @param sesson - true for session storage, false for local storage
   * @param key - key to set
   * @param value - value to set. If null, key is removed from a storage
   * @return value for a given key
   */
  public Object storageSetValue(long ref, boolean session, String key, String value);
}
