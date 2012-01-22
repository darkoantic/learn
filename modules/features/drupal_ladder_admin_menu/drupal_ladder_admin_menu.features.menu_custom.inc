<?php
/**
 * @file
 * drupal_ladder_admin_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drupal_ladder_admin_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-learn-drupal-admin
  $menus['menu-learn-drupal-admin'] = array(
    'menu_name' => 'menu-learn-drupal-admin',
    'title' => 'Learn Drupal Admin',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Learn Drupal Admin');


  return $menus;
}
