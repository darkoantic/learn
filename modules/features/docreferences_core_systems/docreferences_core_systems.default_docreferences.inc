<?php
/**
 * @file
 * docreferences_core_systems.default_docreferences.inc
 */

/**
 * Implements hook_default_docreferences().
 */
function docreferences_core_systems_default_docreferences() {
  $export = array();

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'additional_field_apis';
  $reference->title = 'Additional field APIs';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/groups/7';
  $reference->weight = 0;
  $export['additional_field_apis'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'ajax_system';
  $reference->title = 'Ajax system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--ajax.inc/group/ajax/7';
  $reference->weight = 0;
  $export['ajax_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'base_system';
  $reference->title = 'Base system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--system--system.module/7';
  $reference->weight = 0;
  $export['base_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'cache_system';
  $reference->title = 'Cache system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--cache.inc/7';
  $reference->weight = 0;
  $export['cache_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'cron_system';
  $reference->title = 'Cron system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/cron.php/7';
  $reference->weight = 0;
  $export['cron_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'database_system';
  $reference->title = 'Database system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--database--database.inc/group/database/7';
  $reference->weight = 0;
  $export['database_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'database_update_system';
  $reference->title = 'Database update system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--system--system.api.php/function/hook_update_N/7';
  $reference->weight = 0;
  $export['database_update_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'entity_system';
  $reference->title = 'Entity system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--entity.inc/7';
  $reference->weight = 0;
  $export['entity_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'field_system';
  $reference->title = 'Field system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--field--field.module/group/field/7';
  $reference->weight = 0;
  $export['field_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'file_system';
  $reference->title = 'File system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--file.inc/group/file/7';
  $reference->weight = 0;
  $export['file_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'forms_system';
  $reference->title = 'Forms system ';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--form.inc/group/form_api/7';
  $reference->weight = 0;
  $export['forms_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'image_system';
  $reference->title = 'Image system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--image.inc/group/image/7';
  $reference->weight = 0;
  $export['image_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'install_system';
  $reference->title = 'Install system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--install.core.inc/7';
  $reference->weight = 0;
  $export['install_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'language_system';
  $reference->title = 'Language system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--language.inc/7';
  $reference->weight = 0;
  $export['language_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'mail_system';
  $reference->title = 'Mail system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--mail.inc/7';
  $reference->weight = 0;
  $export['mail_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'node_system';
  $reference->title = 'Node system';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/modules--node--node.api.php/group/node_api_hooks/7';
  $reference->weight = 0;
  $export['node_system'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'theme system2';
  $reference->title = 'Theme system ';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--theme.inc/function/theme/7';
  $reference->weight = 0;
  $export['theme system2'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'xmlrpc';
  $reference->title = 'XMLRPC';
  $reference->category = 'Core Systems';
  $reference->description = '';
  $reference->url = 'http://api.drupal.org/api/drupal/includes--xmlrpc.inc/7';
  $reference->weight = 0;
  $export['xmlrpc'] = $reference;

  return $export;
}
