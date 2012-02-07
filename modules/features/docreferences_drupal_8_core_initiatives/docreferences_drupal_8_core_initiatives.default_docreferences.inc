<?php
/**
 * @file
 * docreferences_drupal_8_core_initiatives.default_docreferences.inc
 */

/**
 * Implements hook_default_docreferences().
 */
function docreferences_drupal_8_core_initiatives_default_docreferences() {
  $export = array();

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'configuration_management';
  $reference->title = 'Configuration Management';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://groups.drupal.org/build-systems-change-management/cmi';
  $reference->weight = 0;
  $export['configuration_management'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'core_initiatives_overview';
  $reference->title = 'Core initiatives overview';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://drupal.org/community-initiatives';
  $reference->weight = 0;
  $export['core_initiatives_overview'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'design';
  $reference->title = 'Design';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://groups.drupal.org/design-drupal/d8di';
  $reference->weight = 0;
  $export['design'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'g_d_o';
  $reference->title = 'Initiatives on groups.drupal.org';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://groups.drupal.org/drupal-initiatives';
  $reference->weight = 0;
  $export['g_d_o'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'html5';
  $reference->title = 'HTML 5';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://groups.drupal.org/html5/drupal-8';
  $reference->weight = 0;
  $export['html5'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'mobile_Initiative';
  $reference->title = 'Mobile Initiative';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://groups.drupal.org/mobile/drupal-8';
  $reference->weight = 0;
  $export['mobile_Initiative'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'multilingual';
  $reference->title = 'Multilingual';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://groups.drupal.org/internationalization';
  $reference->weight = 0;
  $export['multilingual'] = $reference;

  $reference = new stdClass;
  $reference->disabled = FALSE; /* Edit this to true to make a default reference disabled initially */
  $reference->api_version = 1;
  $reference->name = 'web_services';
  $reference->title = 'Web Services';
  $reference->category = 'Drupal 8 Core Initiatives';
  $reference->description = '';
  $reference->url = 'http://groups.drupal.org/wscci';
  $reference->weight = 0;
  $export['web_services'] = $reference;

  return $export;
}
