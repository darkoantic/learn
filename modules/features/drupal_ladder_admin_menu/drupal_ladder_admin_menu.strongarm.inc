<?php
/**
 * @file
 * drupal_ladder_admin_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupal_ladder_admin_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_secondary_links_source';
  $strongarm->value = 'menu-learn-drupal-admin';
  $export['menu_secondary_links_source'] = $strongarm;

  return $export;
}
