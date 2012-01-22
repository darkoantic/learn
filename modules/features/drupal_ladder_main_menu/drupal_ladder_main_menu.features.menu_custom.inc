<?php
/**
 * @file
 * drupal_ladder_main_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drupal_ladder_main_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-learn-drupal-main
  $menus['menu-learn-drupal-main'] = array(
    'menu_name' => 'menu-learn-drupal-main',
    'title' => 'Learn Drupal Main',
    'description' => 'The Learn Drupal Main menu is used to show the major sections of a Learn Drupal site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Learn Drupal Main');
  t('The Learn Drupal Main menu is used to show the major sections of a Learn Drupal site.');


  return $menus;
}
