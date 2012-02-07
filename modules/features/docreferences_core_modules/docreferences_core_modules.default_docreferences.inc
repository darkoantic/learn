<?php
/**
 * @file
 * docreferences_core_modules.default_docreferences.inc
 */

/**
 * Implements hook_default_docreferences().
 */
function docreferences_core_modules_default_docreferences() {
  $export = array();

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'aggregator_module';
  $reference->title = 'aggregator.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--token.inc/7';
  $reference->weight = 0;
  $export['aggregator_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'block_module';
  $reference->title = 'block.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--block--block.module/7';
  $reference->weight = 0;
  $export['block_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'blog_module';
  $reference->title = 'blog.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--blog--blog.module/7';
  $reference->weight = 0;
  $export['blog_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'book_module';
  $reference->title = 'book.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--book--book.module/7';
  $reference->weight = 0;
  $export['book_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'color_module';
  $reference->title = 'color.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--color--color.module/7';
  $reference->weight = 0;
  $export['color_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'comment_module';
  $reference->title = 'comment.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--comment--comment.module/7';
  $reference->weight = 0;
  $export['comment_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'contact_module';
  $reference->title = 'contact.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--contact--contact.module/7';
  $reference->weight = 0;
  $export['contact_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'contextual_module';
  $reference->title = 'contextual.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--contextual--contextual.module/7';
  $reference->weight = 0;
  $export['contextual_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'dashboard_module';
  $reference->title = 'dashboard.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--dashboard--dashboard.module/7';
  $reference->weight = 0;
  $export['dashboard_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'dblog_module';
  $reference->title = 'dblog.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--dblog--dblog.module/7';
  $reference->weight = 0;
  $export['dblog_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'field_ui_module';
  $reference->title = 'field_ui.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--field_ui--field_ui.module/7';
  $reference->weight = 0;
  $export['field_ui_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'file_module';
  $reference->title = 'file.module';
  $reference->category = '';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--file--file.module/7';
  $reference->weight = 0;
  $export['file_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'filter_module';
  $reference->title = 'filter.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--filter--filter.module/7';
  $reference->weight = 0;
  $export['filter_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'forum_module';
  $reference->title = 'forum.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--forum--forum.module/7';
  $reference->weight = 0;
  $export['forum_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'help_module';
  $reference->title = 'help.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--help--help.module/7';
  $reference->weight = 0;
  $export['help_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'image_module';
  $reference->title = 'image.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--image--image.module/7';
  $reference->weight = 0;
  $export['image_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'locale_module';
  $reference->title = 'locale.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--locale--locale.module/7';
  $reference->weight = 0;
  $export['locale_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'menu_module';
  $reference->title = 'menu.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--menu--menu.module/7';
  $reference->weight = 0;
  $export['menu_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'node_module';
  $reference->title = 'node.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--node--node.module/7';
  $reference->weight = 0;
  $export['node_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'openid_module';
  $reference->title = 'openid.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--openid--openid.module/7';
  $reference->weight = 0;
  $export['openid_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'overlay_module';
  $reference->title = 'overlay.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--overlay--overlay.module/7';
  $reference->weight = 0;
  $export['overlay_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'path_module';
  $reference->title = 'path.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--path--path.module/7';
  $reference->weight = 0;
  $export['path_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'php_module';
  $reference->title = 'php.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--php--php.module/7';
  $reference->weight = 0;
  $export['php_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'poll_module';
  $reference->title = 'poll.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--poll--poll.module/7';
  $reference->weight = 0;
  $export['poll_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'profile_module';
  $reference->title = 'profile.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--profile--profile.module/7';
  $reference->weight = 0;
  $export['profile_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'rdf_module';
  $reference->title = 'rdf.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--rdf--rdf.module/7';
  $reference->weight = 0;
  $export['rdf_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'search_module';
  $reference->title = 'search.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--search--search.module/7';
  $reference->weight = 0;
  $export['search_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'shortcut_module';
  $reference->title = 'shortcut.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--shortcut--shortcut.module/7';
  $reference->weight = 0;
  $export['shortcut_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'simpletest_module';
  $reference->title = 'simpletest.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--simpletest--simpletest.module/7';
  $reference->weight = 0;
  $export['simpletest_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'statistics_module';
  $reference->title = 'statistics.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--statistics--statistics.module/7';
  $reference->weight = 0;
  $export['statistics_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'syslog_module';
  $reference->title = 'syslog.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--syslog--syslog.module/7';
  $reference->weight = 0;
  $export['syslog_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'system_module';
  $reference->title = 'system.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--system--system.module/7';
  $reference->weight = 0;
  $export['system_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'taxonomy.module';
  $reference->title = 'taxonomy_module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--taxonomy--taxonomy.module/7';
  $reference->weight = 0;
  $export['taxonomy.module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'token_inc';
  $reference->title = 'token.inc';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--token.inc/7';
  $reference->weight = 0;
  $export['token_inc'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'toolbar_module';
  $reference->title = 'toolbar.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--toolbar--toolbar.module/7';
  $reference->weight = 0;
  $export['toolbar_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'tracker_module';
  $reference->title = 'tracker.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--tracker--tracker.module/7';
  $reference->weight = 0;
  $export['tracker_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'translation_module';
  $reference->title = 'translation.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--translation--translation.module/7';
  $reference->weight = 0;
  $export['translation_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'trigger_module';
  $reference->title = 'trigger.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--trigger--trigger.module/7';
  $reference->weight = 0;
  $export['trigger_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'update_module';
  $reference->title = 'update.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--update--update.module/7';
  $reference->weight = 0;
  $export['update_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'update_php';
  $reference->title = 'update.php';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/update.php/7';
  $reference->weight = 0;
  $export['update_php'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'user_module';
  $reference->title = 'user.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--user--user.module/7';
  $reference->weight = 0;
  $export['user_module'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'watchdog_module';
  $reference->title = 'watchdog.module';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--bootstrap.inc/function/watchdog/7';
  $reference->weight = 0;
  $export['watchdog_module'] = $reference;

  return $export;
}
