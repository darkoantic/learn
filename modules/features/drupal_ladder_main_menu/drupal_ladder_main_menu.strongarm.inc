<?php
/**
 * @file
 * drupal_ladder_main_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupal_ladder_main_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_main_links_source';
  $strongarm->value = 'menu-learn-drupal-main';
  $export['menu_main_links_source'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'ladder/about';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
