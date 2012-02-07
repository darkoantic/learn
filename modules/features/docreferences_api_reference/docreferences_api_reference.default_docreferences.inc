<?php
/**
 * @file
 * docreferences_api_reference.default_docreferences.inc
 */

/**
 * Implements hook_default_docreferences().
 */
function docreferences_api_reference_default_docreferences() {
  $export = array();

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'constants';
  $reference->title = 'Constants';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/constants/7';
  $reference->weight = 0;
  $export['constants'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'database_abstraction_layer';
  $reference->title = 'Database abstraction layer';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--database--database.inc/group/database/7';
  $reference->weight = 0;
  $export['database_abstraction_layer'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'field_api';
  $reference->title = 'Field API';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--field--field.module/group/field/7';
  $reference->weight = 0;
  $export['field_api'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'file_upload_system';
  $reference->title = 'File upload system';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--file.inc/group/file/7';
  $reference->weight = 0;
  $export['file_upload_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'form_generation';
  $reference->title = 'Form generation';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--form.inc/group/form_api/7';
  $reference->weight = 0;
  $export['form_generation'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'global_variables';
  $reference->title = 'Global variables';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/globals/7';
  $reference->weight = 0;
  $export['global_variables'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'menu_system';
  $reference->title = 'Menu system ';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--menu.inc/group/menu/7';
  $reference->weight = 0;
  $export['menu_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'module_system';
  $reference->title = 'Module system (Drupal hooks)';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--module.inc/group/hooks/7';
  $reference->weight = 0;
  $export['module_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'node_access_system';
  $reference->title = 'Node access system';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--node--node.module/group/node_access/7';
  $reference->weight = 0;
  $export['node_access_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'search_system';
  $reference->title = 'Search system';
  $reference->category = 'Examples';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--search--search.module/group/search/7';
  $reference->weight = 0;
  $export['search_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'theme_system';
  $reference->title = 'Theme system';
  $reference->category = 'API References';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--system--theme.api.php/group/themeable/7';
  $reference->weight = 0;
  $export['theme_system'] = $reference;

  return $export;
}
