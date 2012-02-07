<?php
/**
 * @file
 * docreferences_examples.default_docreferences.inc
 */

/**
 * Implements hook_default_docreferences().
 */
function docreferences_examples_default_docreferences() {
  $export = array();

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'ajax_examples';
  $reference->title = 'Ajax examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/ajax_example--ajax_example.module/group/ajax_example/7';
  $reference->weight = 0;
  $export['ajax_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'block_examples';
  $reference->title = 'Block examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/block_example--block_example.module/group/block_example/7';
  $reference->weight = 0;
  $export['block_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'cache_examples';
  $reference->title = 'Cache examples';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/cache_example--cache_example.module/group/cache_example/7';
  $reference->weight = 0;
  $export['cache_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'cron_examples';
  $reference->title = 'Cron examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/cron_example--cron_example.module/group/cron_example/7';
  $reference->weight = 0;
  $export['cron_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'database_examples';
  $reference->title = 'Database examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/dbtng_example--dbtng_example.module/group/dbtng_example/7';
  $reference->weight = 0;
  $export['database_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'email_examples';
  $reference->title = 'Email examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/email_example--email_example.module/group/email_example/7';
  $reference->weight = 0;
  $export['email_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'field_api_examples';
  $reference->title = 'Field API examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/field_example--field_example.module/group/field_example/7';
  $reference->weight = 0;
  $export['field_api_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'file_examples';
  $reference->title = 'File examples';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/file_example--file_example.module/group/file_example/7';
  $reference->weight = 0;
  $export['file_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'filter_examples';
  $reference->title = 'Filter examples';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/filter_example--filter_example.module/group/filter_example/7';
  $reference->weight = 0;
  $export['filter_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'form_examples';
  $reference->title = 'Form examples';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/form_example--form_example.module/group/form_example/7';
  $reference->weight = 0;
  $export['form_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'image_examples';
  $reference->title = 'Image examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/image_example--image_example.module/group/image_example/7';
  $reference->weight = 0;
  $export['image_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'menu_examples';
  $reference->title = 'Menu Examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/menu_example--menu_example.module/group/menu_example/7';
  $reference->weight = 0;
  $export['menu_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'node_access_examples';
  $reference->title = 'Node access examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/node_access_example--node_access_example.module/group/node_access_example/7';
  $reference->weight = 0;
  $export['node_access_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'node_api_examples';
  $reference->title = 'Node API examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/nodeapi_example--nodeapi_example.module/group/nodeapi_example/7';
  $reference->weight = 0;
  $export['node_api_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'node_examples';
  $reference->title = 'Node examples';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/node_example--node_example.module/group/node_example/7';
  $reference->weight = 0;
  $export['node_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'page_examples';
  $reference->title = 'Page Examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/page_example--page_example.module/group/page_example/7';
  $reference->weight = 0;
  $export['page_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'queue_examples';
  $reference->title = 'Queue examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/queue_example--queue_example.module/group/queue_example/7';
  $reference->weight = 0;
  $export['queue_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'render_examples';
  $reference->title = 'Render examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/render_example--render_example.module/group/render_example/7';
  $reference->weight = 0;
  $export['render_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'simpletest_examples';
  $reference->title = 'simpletest examples';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/simpletest_example--simpletest_example.module/group/simpletest_example/7';
  $reference->weight = 0;
  $export['simpletest_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'token_examples';
  $reference->title = 'Token examples';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/token_example--token_example.module/group/token_example/7';
  $reference->weight = 0;
  $export['token_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'trigger_examples';
  $reference->title = 'Trigger examples';
  $reference->category = 'Core Modules';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/trigger_example--trigger_example.module/group/trigger_example/7';
  $reference->weight = 0;
  $export['trigger_examples'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'xmlrpc_examples';
  $reference->title = 'XMLRPC examples';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/examples/xmlrpc_example--xmlrpc_example.module/group/xmlrpc_example/7';
  $reference->weight = 0;
  $export['xmlrpc_examples'] = $reference;

  return $export;
}
